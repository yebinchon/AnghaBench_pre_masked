
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_ctx {int vq_dst; int vq_src; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
       enum v4l2_buf_type VAR_5)
{
 struct s5p_mfc_ctx *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5 == VAR_2)
  return FUNC_1(&VAR_6->vq_src, VAR_5);
 else if (VAR_5 == VAR_1)
  return FUNC_1(&VAR_6->vq_dst, VAR_5);
 return -VAR_0;
}
