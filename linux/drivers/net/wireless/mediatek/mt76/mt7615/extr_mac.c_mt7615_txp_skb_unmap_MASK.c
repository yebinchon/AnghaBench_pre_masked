
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_txwi_cache {int dummy; } ;
struct mt76_dev {int dev; } ;
struct mt7615_txp {int nbuf; int * len; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct mt7615_txp* FUNC_3 (struct mt76_dev*,struct mt76_txwi_cache*) ;

void FUNC_4(struct mt76_dev *VAR_1,
     struct mt76_txwi_cache *VAR_2)
{
 struct mt7615_txp *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 for (VAR_4 = 1; VAR_4 < VAR_3->nbuf; VAR_4++)
  FUNC_0(VAR_1->dev, FUNC_2(VAR_3->buf[VAR_4]),
     FUNC_1(VAR_3->len[VAR_4]), VAR_0);
}
