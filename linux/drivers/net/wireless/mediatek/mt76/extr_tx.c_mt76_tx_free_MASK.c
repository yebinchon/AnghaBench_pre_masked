
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_txwi_cache {int dma_addr; } ;
struct mt76_dev {TYPE_1__* drv; int dev; } ;
struct TYPE_2__ {int txwi_size; } ;


 int VAR_0 ;
 struct mt76_txwi_cache* FUNC_0 (struct mt76_dev*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void FUNC_2(struct mt76_dev *VAR_1)
{
 struct mt76_txwi_cache *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0))
  FUNC_1(VAR_1->dev, VAR_2->dma_addr, VAR_1->drv->txwi_size,
     VAR_0);
}
