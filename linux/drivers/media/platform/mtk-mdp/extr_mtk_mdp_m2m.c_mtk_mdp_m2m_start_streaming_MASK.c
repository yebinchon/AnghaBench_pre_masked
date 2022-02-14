
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {struct mtk_mdp_ctx* drv_priv; } ;
struct mtk_mdp_ctx {int id; TYPE_2__* mdp_dev; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_0, unsigned int VAR_1)
{
 struct mtk_mdp_ctx *VAR_2 = VAR_0->drv_priv;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->mdp_dev->pdev->dev);
 if (VAR_3 < 0)
  FUNC_0(1, "[%d] pm_runtime_get_sync failed:%d",
       VAR_2->id, VAR_3);

 return 0;
}
