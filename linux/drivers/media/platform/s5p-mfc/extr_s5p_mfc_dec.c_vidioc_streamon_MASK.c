
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
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
      enum v4l2_buf_type VAR_5)
{
 struct s5p_mfc_ctx *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = -VAR_0;

 FUNC_1();
 if (VAR_5 == VAR_2)
  VAR_7 = FUNC_3(&VAR_6->vq_src, VAR_5);
 else if (VAR_5 == VAR_1)
  VAR_7 = FUNC_3(&VAR_6->vq_dst, VAR_5);
 FUNC_2();
 return VAR_7;
}
