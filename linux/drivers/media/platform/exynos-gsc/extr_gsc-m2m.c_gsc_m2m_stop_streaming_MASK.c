
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vb2_queue {struct gsc_ctx* drv_priv; } ;
struct gsc_ctx {TYPE_2__* gsc_dev; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct gsc_ctx*) ;
 int FUNC_1 (struct gsc_ctx*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct vb2_queue *VAR_0)
{
 struct gsc_ctx *VAR_1 = VAR_0->drv_priv;

 FUNC_1(VAR_1);

 FUNC_0(VAR_1);

 FUNC_2(&VAR_1->gsc_dev->pdev->dev);
}
