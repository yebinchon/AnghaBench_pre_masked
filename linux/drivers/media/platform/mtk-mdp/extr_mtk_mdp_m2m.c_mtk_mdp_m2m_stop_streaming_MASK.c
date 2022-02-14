
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {int type; struct mtk_mdp_ctx* drv_priv; } ;
struct vb2_buffer {int dummy; } ;
struct mtk_mdp_ctx {TYPE_2__* mdp_dev; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 struct vb2_buffer* FUNC_0 (struct mtk_mdp_ctx*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vb2_buffer*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct vb2_queue *VAR_1)
{
 struct mtk_mdp_ctx *VAR_2 = VAR_1->drv_priv;
 struct vb2_buffer *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1->type);
 while (VAR_3 != ((void*)0)) {
  FUNC_3(FUNC_2(VAR_3), VAR_0);
  VAR_3 = FUNC_0(VAR_2, VAR_1->type);
 }

 FUNC_1(&VAR_2->mdp_dev->pdev->dev);
}
