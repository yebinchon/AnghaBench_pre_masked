
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
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6, struct v4l2_buffer *VAR_7)
{
 struct s5p_mfc_ctx *VAR_8 = FUNC_0(VAR_6);

 if (VAR_8->state == VAR_2) {
  FUNC_1("Call on QBUF after unrecoverable error\n");
  return -VAR_1;
 }
 if (VAR_7->type == VAR_4)
  return FUNC_2(&VAR_8->vq_src, ((void*)0), VAR_7);
 else if (VAR_7->type == VAR_3)
  return FUNC_2(&VAR_8->vq_dst, ((void*)0), VAR_7);
 return -VAR_0;
}
