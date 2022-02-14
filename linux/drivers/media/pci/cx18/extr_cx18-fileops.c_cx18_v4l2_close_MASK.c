
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fh {int dummy; } ;
struct file {struct v4l2_fh* private_data; } ;
struct cx18_stream {scalar_t__ id; int handle; int name; } ;
struct cx18_open_id {size_t type; scalar_t__ open_id; struct cx18* cx; } ;
struct TYPE_2__ {int video_mute_yuv; int video_mute; } ;
struct cx18 {int serialize_lock; TYPE_1__ cxhdl; int ana_capturing; int std; int i_flags; struct cx18_stream* streams; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*,int ,int ,int ) ;
 int FUNC_5 (struct cx18*) ;
 int FUNC_6 (struct cx18_open_id*,int ) ;
 int FUNC_7 (struct cx18*) ;
 int FUNC_8 (struct cx18*,int ,int,int ,int) ;
 struct cx18_open_id* FUNC_9 (struct v4l2_fh*) ;
 int FUNC_10 (struct cx18_open_id*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_3 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct v4l2_fh*) ;
 int FUNC_15 (struct v4l2_fh*) ;
 scalar_t__ FUNC_16 (struct file*) ;
 int VAR_4 ;

int FUNC_17(struct file *VAR_5)
{
 struct v4l2_fh *VAR_6 = VAR_5->private_data;
 struct cx18_open_id *VAR_7 = FUNC_9(VAR_6);
 struct cx18 *VAR_8 = VAR_7->cx;
 struct cx18_stream *VAR_9 = &VAR_8->streams[VAR_7->type];

 FUNC_0("close() of %s\n", VAR_9->name);

 FUNC_11(&VAR_8->serialize_lock);

 if (VAR_7->type == VAR_1 &&
   FUNC_16(VAR_5)) {

  FUNC_5(VAR_8);

  FUNC_2(VAR_2, &VAR_8->i_flags);

  FUNC_4(VAR_8, VAR_4, VAR_3, VAR_8->std);

  FUNC_3(VAR_8);
  if (FUNC_1(&VAR_8->ana_capturing) > 0) {

   FUNC_8(VAR_8, VAR_0, 2, VAR_9->handle,
       (FUNC_13(VAR_8->cxhdl.video_mute) |
       (FUNC_13(VAR_8->cxhdl.video_mute_yuv) << 8)));
  }

  FUNC_7(VAR_8);
 }

 FUNC_14(VAR_6);
 FUNC_15(VAR_6);


 if (VAR_9->id == VAR_7->open_id)
  FUNC_6(VAR_7, 0);
 FUNC_10(VAR_7);
 FUNC_12(&VAR_8->serialize_lock);
 return 0;
}
