
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_txwi_cache {int dummy; } ;
struct mt76_dev {int dummy; } ;


 struct mt76_txwi_cache* FUNC_0 (struct mt76_dev*) ;
 struct mt76_txwi_cache* FUNC_1 (struct mt76_dev*) ;

struct mt76_txwi_cache *
FUNC_2(struct mt76_dev *VAR_0)
{
 struct mt76_txwi_cache *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  return VAR_1;

 return FUNC_1(VAR_0);
}
