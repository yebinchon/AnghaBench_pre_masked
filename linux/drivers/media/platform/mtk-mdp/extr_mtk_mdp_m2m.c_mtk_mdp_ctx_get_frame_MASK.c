
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_mdp_frame {int dummy; } ;
struct mtk_mdp_ctx {struct mtk_mdp_frame d_frame; struct mtk_mdp_frame s_frame; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct mtk_mdp_frame *FUNC_1(struct mtk_mdp_ctx *VAR_0,
         enum v4l2_buf_type VAR_1)
{
 if (FUNC_0(VAR_1))
  return &VAR_0->s_frame;
 return &VAR_0->d_frame;
}
