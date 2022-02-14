
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_bus {struct sdio_func* host_sdio; } ;
struct sdio_func {int dummy; } ;
struct b43_wldev {TYPE_2__* dev; } ;
struct b43_sdio {int * irq_handler; int * irq_handler_opaque; } ;
struct TYPE_4__ {TYPE_1__* sdev; } ;
struct TYPE_3__ {struct ssb_bus* bus; } ;


 int FUNC_0 (struct sdio_func*) ;
 struct b43_sdio* FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;

void FUNC_4(struct b43_wldev *VAR_0)
{
 struct ssb_bus *VAR_1 = VAR_0->dev->sdev->bus;
 struct sdio_func *VAR_2 = VAR_1->host_sdio;
 struct b43_sdio *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 VAR_3->irq_handler_opaque = ((void*)0);
 VAR_3->irq_handler = ((void*)0);
}
