
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_ctx {int m2m_ctx; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct gsc_ctx* FUNC_1 (void*) ;
 int FUNC_2 (int ,struct gsc_ctx*) ;
 int FUNC_3 (struct file*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
      enum v4l2_buf_type VAR_5)
{
 struct gsc_ctx *VAR_6 = FUNC_1(VAR_4);


 if (FUNC_0(VAR_5)) {
  if (!FUNC_2(VAR_2, VAR_6))
   return -VAR_0;
 } else if (!FUNC_2(VAR_1, VAR_6)) {
  return -VAR_0;
 }

 return FUNC_3(VAR_3, VAR_6->m2m_ctx, VAR_5);
}
