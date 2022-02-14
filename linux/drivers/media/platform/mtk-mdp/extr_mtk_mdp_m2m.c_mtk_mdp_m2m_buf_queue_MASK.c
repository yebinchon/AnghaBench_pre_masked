
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int vb2_queue; } ;
struct mtk_mdp_ctx {int m2m_ctx; } ;


 int FUNC_0 (struct vb2_buffer*) ;
 int FUNC_1 (int ,int ) ;
 struct mtk_mdp_ctx* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct vb2_buffer *VAR_0)
{
 struct mtk_mdp_ctx *VAR_1 = FUNC_2(VAR_0->vb2_queue);

 FUNC_1(VAR_1->m2m_ctx, FUNC_0(VAR_0));
}
