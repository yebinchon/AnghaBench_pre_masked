
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_event {int type; } ;
struct v4l2_buffer {int type; size_t index; } ;
struct s5p_mfc_ctx {scalar_t__ state; int fh; TYPE_1__* dst_bufs; int vq_dst; int vq_src; } ;
struct file {int f_flags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,struct v4l2_event const*) ;
 int FUNC_3 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_7, void *VAR_8, struct v4l2_buffer *VAR_9)
{
 const struct v4l2_event VAR_10 = {
  .type = VAR_6
 };
 struct s5p_mfc_ctx *VAR_11 = FUNC_0(VAR_8);
 int VAR_12;

 if (VAR_11->state == VAR_2) {
  FUNC_1("Call on DQBUF after unrecoverable error\n");
  return -VAR_1;
 }

 switch (VAR_9->type) {
 case 128:
  return FUNC_3(&VAR_11->vq_src, VAR_9, VAR_7->f_flags & VAR_5);
 case 129:
  VAR_12 = FUNC_3(&VAR_11->vq_dst, VAR_9, VAR_7->f_flags & VAR_5);
  if (VAR_12)
   return VAR_12;

  if (VAR_11->state == VAR_3 &&
      (VAR_11->dst_bufs[VAR_9->index].flags & VAR_4))
   FUNC_2(&VAR_11->fh, &VAR_10);
  return 0;
 default:
  return -VAR_0;
 }
}
