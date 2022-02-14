
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_mdp_ctx {int m2m_ctx; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void *FUNC_3(struct mtk_mdp_ctx *VAR_0,
        enum v4l2_buf_type VAR_1)
{
 if (FUNC_0(VAR_1))
  return FUNC_2(VAR_0->m2m_ctx);
 else
  return FUNC_1(VAR_0->m2m_ctx);
}
