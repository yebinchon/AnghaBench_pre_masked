
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt76_txwi_cache {int dummy; } ;
struct mt76_dev {int dummy; } ;
struct mt7615_txp {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct mt76_dev*,struct mt76_txwi_cache*) ;

__attribute__((used)) static inline struct mt7615_txp *
FUNC_1(struct mt76_dev *VAR_1, struct mt76_txwi_cache *VAR_2)
{
 u8 *VAR_3;

 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1, VAR_2);

 return (struct mt7615_txp *)(VAR_3 + VAR_0);
}
