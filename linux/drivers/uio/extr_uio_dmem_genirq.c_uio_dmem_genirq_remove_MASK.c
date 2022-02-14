
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_dmem_genirq_platdata {struct uio_dmem_genirq_platdata* uioinfo; int * irqcontrol; int * handler; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct uio_dmem_genirq_platdata*) ;
 struct uio_dmem_genirq_platdata* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct uio_dmem_genirq_platdata*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct uio_dmem_genirq_platdata *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->uioinfo);
 FUNC_2(&VAR_0->dev);

 VAR_1->uioinfo->handler = ((void*)0);
 VAR_1->uioinfo->irqcontrol = ((void*)0);


 if (VAR_0->dev.of_node)
  FUNC_0(VAR_1->uioinfo);

 FUNC_0(VAR_1);
 return 0;
}
