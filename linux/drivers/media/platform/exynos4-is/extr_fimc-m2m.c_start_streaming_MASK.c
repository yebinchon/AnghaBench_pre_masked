
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


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_0, unsigned int VAR_1)
{
 struct fimc_ctx *VAR_2 = VAR_0->drv_priv;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->fimc_dev->pdev->dev);
 return VAR_3 > 0 ? 0 : VAR_3;
}
