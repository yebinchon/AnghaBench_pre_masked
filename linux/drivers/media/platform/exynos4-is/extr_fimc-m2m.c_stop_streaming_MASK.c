
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {struct fimc_ctx* drv_priv; } ;
struct fimc_ctx {TYPE_2__* fimc_dev; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct fimc_ctx*,int ) ;
 int FUNC_1 (struct fimc_ctx*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vb2_queue *VAR_1)
{
 struct fimc_ctx *VAR_2 = VAR_1->drv_priv;


 FUNC_1(VAR_2);
 FUNC_0(VAR_2, VAR_0);
 FUNC_2(&VAR_2->fimc_dev->pdev->dev);
}
