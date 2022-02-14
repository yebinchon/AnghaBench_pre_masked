
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct venus_inst {scalar_t__ codec_state; int sequence_out; int fh; int sequence_cap; } ;
struct vb2_buffer {int timestamp; TYPE_1__* planes; } ;
struct vb2_v4l2_buffer {int flags; scalar_t__ sequence; struct vb2_buffer vb2_buf; int field; } ;
struct v4l2_event {int type; } ;
typedef enum vb2_buffer_state { ____Placeholder_vb2_buffer_state } vb2_buffer_state ;
struct TYPE_2__ {int data_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *,struct v4l2_event const*) ;
 int FUNC_1 (struct vb2_v4l2_buffer*,int) ;
 int FUNC_2 (struct vb2_buffer*,int ,int) ;
 int FUNC_3 (struct vb2_v4l2_buffer*) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct venus_inst*,unsigned int,int) ;
 int FUNC_5 (struct venus_inst*,int,struct vb2_v4l2_buffer*) ;

__attribute__((used)) static void FUNC_6(struct venus_inst *VAR_14, unsigned int VAR_15,
     u32 VAR_16, u32 VAR_17, u32 VAR_18, u32 VAR_19,
     u32 VAR_20, u64 VAR_21)
{
 enum vb2_buffer_state VAR_22 = VAR_10;
 struct vb2_v4l2_buffer *VAR_23;
 struct vb2_buffer *VAR_24;
 unsigned int VAR_25;

 if (VAR_15 == VAR_3)
  VAR_25 = VAR_7;
 else
  VAR_25 = VAR_6;

 VAR_23 = FUNC_4(VAR_14, VAR_25, VAR_16);
 if (!VAR_23)
  return;

 VAR_23->flags = VAR_19;
 VAR_23->field = VAR_9;
 VAR_24 = &VAR_23->vb2_buf;

 if (VAR_25 == VAR_6) {
  FUNC_2(VAR_24, 0, VAR_17);
  VAR_24->planes[0].data_offset = VAR_18;
  VAR_24->timestamp = VAR_21 * VAR_4;
  VAR_23->sequence = VAR_14->sequence_cap++;

  if (VAR_23->flags & VAR_5) {
   const struct v4l2_event VAR_26 = { .type = VAR_8 };

   FUNC_0(&VAR_14->fh, &VAR_26);

   if (VAR_14->codec_state == VAR_12)
    VAR_14->codec_state = VAR_13;
  }
 } else {
  VAR_23->sequence = VAR_14->sequence_out++;
 }

 FUNC_5(VAR_14, VAR_21, VAR_23);

 if (VAR_20 & VAR_2)
  FUNC_3(VAR_23);

 if (VAR_20 & VAR_0)
  VAR_22 = VAR_11;

 if (VAR_20 & VAR_1) {
  VAR_22 = VAR_11;
  FUNC_2(VAR_24, 0, 0);
  VAR_24->timestamp = 0;
 }

 FUNC_1(VAR_23, VAR_22);
}
