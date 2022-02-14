
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_txwi_cache {int list; } ;
struct mt76_dev {int lock; int txwi_cache; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct mt76_dev *VAR_0, struct mt76_txwi_cache *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_1->list, &VAR_0->txwi_cache);
 FUNC_2(&VAR_0->lock);
}
