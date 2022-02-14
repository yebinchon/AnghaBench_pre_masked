
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {scalar_t__ type; } ;
struct s5p_mfc_ctx {scalar_t__ state; int vq_dst; int vq_src; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7, struct v4l2_buffer *VAR_8)
{
 struct s5p_mfc_ctx *VAR_9 = FUNC_0(VAR_7);

 if (VAR_9->state == VAR_2) {
  FUNC_1("Call on QBUF after unrecoverable error\n");
  return -VAR_1;
 }
 if (VAR_8->type == VAR_5) {
  if (VAR_9->state == VAR_3) {
   FUNC_1("Call on QBUF after EOS command\n");
   return -VAR_1;
  }
  return FUNC_2(&VAR_9->vq_src, ((void*)0), VAR_8);
 } else if (VAR_8->type == VAR_4) {
  return FUNC_2(&VAR_9->vq_dst, ((void*)0), VAR_8);
 }
 return -VAR_0;
}
