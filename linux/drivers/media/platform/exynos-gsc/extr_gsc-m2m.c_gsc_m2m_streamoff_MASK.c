
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_ctx {int m2m_ctx; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 struct gsc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
       enum v4l2_buf_type VAR_2)
{
 struct gsc_ctx *VAR_3 = FUNC_0(VAR_1);
 return FUNC_1(VAR_0, VAR_3->m2m_ctx, VAR_2);
}
