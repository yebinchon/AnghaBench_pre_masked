
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_pdrv_genirq_platdata {TYPE_1__* uioinfo; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int * irqcontrol; int * handler; } ;


 struct uio_pdrv_genirq_platdata* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct uio_pdrv_genirq_platdata *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->uioinfo);
 FUNC_1(&VAR_0->dev);

 VAR_1->uioinfo->handler = ((void*)0);
 VAR_1->uioinfo->irqcontrol = ((void*)0);

 return 0;
}
