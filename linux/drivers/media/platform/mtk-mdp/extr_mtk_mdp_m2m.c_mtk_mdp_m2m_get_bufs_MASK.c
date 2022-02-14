
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timestamp; } ;
struct vb2_v4l2_buffer {TYPE_1__ vb2_buf; } ;
struct mtk_mdp_frame {int addr; } ;
struct mtk_mdp_ctx {int m2m_ctx; struct mtk_mdp_frame d_frame; struct mtk_mdp_frame s_frame; } ;


 int FUNC_0 (struct mtk_mdp_ctx*,TYPE_1__*,struct mtk_mdp_frame*,int *) ;
 struct vb2_v4l2_buffer* FUNC_1 (int ) ;
 struct vb2_v4l2_buffer* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mtk_mdp_ctx *VAR_0)
{
 struct mtk_mdp_frame *VAR_1, *VAR_2;
 struct vb2_v4l2_buffer *VAR_3, *VAR_4;

 VAR_1 = &VAR_0->s_frame;
 VAR_2 = &VAR_0->d_frame;

 VAR_3 = FUNC_2(VAR_0->m2m_ctx);
 FUNC_0(VAR_0, &VAR_3->vb2_buf, VAR_1, &VAR_1->addr);

 VAR_4 = FUNC_1(VAR_0->m2m_ctx);
 FUNC_0(VAR_0, &VAR_4->vb2_buf, VAR_2, &VAR_2->addr);

 VAR_4->vb2_buf.timestamp = VAR_3->vb2_buf.timestamp;
}
