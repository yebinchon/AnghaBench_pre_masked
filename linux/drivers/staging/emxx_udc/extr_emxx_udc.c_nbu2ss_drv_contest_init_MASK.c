
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dma_mask; int coherent_dma_mask; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_9__ {int dma_mask; TYPE_3__* parent; } ;
struct TYPE_7__ {int is_selfpowered; TYPE_4__ dev; int name; int speed; int * ep0; int * ops; } ;
struct nbu2ss_udc {TYPE_2__ gadget; TYPE_1__* ep; struct platform_device* pdev; scalar_t__ mA; int devstate; TYPE_3__* dev; int lock; } ;
struct TYPE_6__ {int ep; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_3 (struct nbu2ss_udc*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4,
       struct nbu2ss_udc *VAR_5)
{
 FUNC_4(&VAR_5->lock);
 VAR_5->dev = &VAR_4->dev;

 VAR_5->gadget.is_selfpowered = 1;
 VAR_5->devstate = VAR_1;
 VAR_5->pdev = VAR_4;
 VAR_5->mA = 0;

 VAR_5->pdev->dev.coherent_dma_mask = FUNC_0(32);


 FUNC_3(VAR_5);


 VAR_5->gadget.ops = &VAR_3;
 VAR_5->gadget.ep0 = &VAR_5->ep[0].ep;
 VAR_5->gadget.speed = VAR_0;
 VAR_5->gadget.name = VAR_2;


 FUNC_2(&VAR_5->gadget.dev);

 FUNC_1(&VAR_5->gadget.dev, "gadget");
 VAR_5->gadget.dev.parent = &VAR_4->dev;
 VAR_5->gadget.dev.dma_mask = VAR_4->dev.dma_mask;

 return 0;
}
