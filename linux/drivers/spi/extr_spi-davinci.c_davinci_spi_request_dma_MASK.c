
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* master; } ;
struct davinci_spi {void* dma_tx; void* dma_rx; TYPE_3__ bitbang; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct device*,char*) ;

__attribute__((used)) static int FUNC_4(struct davinci_spi *VAR_0)
{
 struct device *VAR_1 = VAR_0->bitbang.master->dev.parent;

 VAR_0->dma_rx = FUNC_3(VAR_1, "rx");
 if (FUNC_0(VAR_0->dma_rx))
  return FUNC_1(VAR_0->dma_rx);

 VAR_0->dma_tx = FUNC_3(VAR_1, "tx");
 if (FUNC_0(VAR_0->dma_tx)) {
  FUNC_2(VAR_0->dma_rx);
  return FUNC_1(VAR_0->dma_tx);
 }

 return 0;
}
