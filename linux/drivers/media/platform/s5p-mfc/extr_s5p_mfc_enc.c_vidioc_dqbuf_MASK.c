
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_event {int type; } ;
struct v4l2_buffer {scalar_t__ type; } ;
struct TYPE_2__ {int done_list; } ;
struct s5p_mfc_ctx {scalar_t__ state; int fh; TYPE_1__ vq_dst; TYPE_1__ vq_src; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,struct v4l2_event const*) ;
 int FUNC_4 (TYPE_1__*,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_8, void *VAR_9, struct v4l2_buffer *VAR_10)
{
 const struct v4l2_event VAR_11 = {
  .type = VAR_7
 };
 struct s5p_mfc_ctx *VAR_12 = FUNC_0(VAR_9);
 int VAR_13;

 if (VAR_12->state == VAR_2) {
  FUNC_2("Call on DQBUF after unrecoverable error\n");
  return -VAR_1;
 }
 if (VAR_10->type == VAR_6) {
  VAR_13 = FUNC_4(&VAR_12->vq_src, VAR_10, VAR_8->f_flags & VAR_4);
 } else if (VAR_10->type == VAR_5) {
  VAR_13 = FUNC_4(&VAR_12->vq_dst, VAR_10, VAR_8->f_flags & VAR_4);
  if (VAR_13 == 0 && VAR_12->state == VAR_3
     && FUNC_1(&VAR_12->vq_dst.done_list))
   FUNC_3(&VAR_12->fh, &VAR_11);
 } else {
  VAR_13 = -VAR_0;
 }

 return VAR_13;
}
