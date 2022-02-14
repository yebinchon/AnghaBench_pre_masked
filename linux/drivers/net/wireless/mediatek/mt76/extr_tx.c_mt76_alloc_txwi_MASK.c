
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mt76_txwi_cache {int dma_addr; } ;
struct mt76_dev {TYPE_1__* drv; int dev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int txwi_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int *,int,int ) ;

__attribute__((used)) static struct mt76_txwi_cache *
FUNC_3(struct mt76_dev *VAR_2)
{
 struct mt76_txwi_cache *VAR_3;
 dma_addr_t VAR_4;
 u8 *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2->drv->txwi_size + sizeof(*VAR_3));
 VAR_5 = FUNC_1(VAR_2->dev, VAR_6, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_2->dev, VAR_5, VAR_2->drv->txwi_size,
         VAR_0);
 VAR_3 = (struct mt76_txwi_cache *)(VAR_5 + VAR_2->drv->txwi_size);
 VAR_3->dma_addr = VAR_4;

 return VAR_3;
}
