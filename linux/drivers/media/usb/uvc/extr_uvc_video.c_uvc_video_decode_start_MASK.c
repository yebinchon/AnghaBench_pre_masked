
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int nb_invalid; } ;
struct TYPE_7__ {TYPE_1__ frame; } ;
struct uvc_streaming {int last_fid; scalar_t__ sequence; TYPE_3__* dev; TYPE_2__ stats; } ;
struct TYPE_9__ {int timestamp; } ;
struct TYPE_10__ {TYPE_4__ vb2_buf; scalar_t__ sequence; int field; } ;
struct uvc_buffer {int error; scalar_t__ state; scalar_t__ bytesused; TYPE_5__ buf; } ;
struct TYPE_8__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct uvc_streaming*,struct uvc_buffer*,int const*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct uvc_streaming*,int const*,int) ;
 int FUNC_5 (struct uvc_streaming*) ;

__attribute__((used)) static int FUNC_6(struct uvc_streaming *VAR_11,
  struct uvc_buffer *VAR_12, const u8 *VAR_13, int VAR_14)
{
 u8 VAR_15;






 if (VAR_14 < 2 || VAR_13[0] < 2 || VAR_13[0] > VAR_14) {
  VAR_11->stats.frame.nb_invalid++;
  return -VAR_1;
 }

 VAR_15 = VAR_13[1] & VAR_8;




 if (VAR_11->last_fid != VAR_15) {
  VAR_11->sequence++;
  if (VAR_11->sequence)
   FUNC_5(VAR_11);
 }

 FUNC_2(VAR_11, VAR_12, VAR_13, VAR_14);
 FUNC_4(VAR_11, VAR_13, VAR_14);




 if (VAR_12 == ((void*)0)) {
  VAR_11->last_fid = VAR_15;
  return -VAR_2;
 }


 if (VAR_13[1] & VAR_7) {
  FUNC_1(VAR_9, "Marking buffer as bad (error bit "
     "set).\n");
  VAR_12->error = 1;
 }
 if (VAR_12->state != VAR_3) {
  if (VAR_15 == VAR_11->last_fid) {
   FUNC_1(VAR_9, "Dropping payload (out of "
    "sync).\n");
   if ((VAR_11->dev->quirks & VAR_5) &&
       (VAR_13[1] & VAR_6))
    VAR_11->last_fid ^= VAR_8;
   return -VAR_2;
  }

  VAR_12->buf.field = VAR_10;
  VAR_12->buf.sequence = VAR_11->sequence;
  VAR_12->buf.vb2_buf.timestamp = FUNC_0(FUNC_3());


  VAR_12->state = VAR_3;
 }
 if (VAR_15 != VAR_11->last_fid && VAR_12->bytesused != 0) {
  FUNC_1(VAR_9, "Frame complete (FID bit "
    "toggled).\n");
  VAR_12->state = VAR_4;
  return -VAR_0;
 }

 VAR_11->last_fid = VAR_15;

 return VAR_13[0];
}
