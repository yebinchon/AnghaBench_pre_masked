
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int txwi ;
struct sk_buff {int len; struct mt76x02_txwi* data; } ;
struct mt76x02_txwi {int dummy; } ;
struct mt76x02_dev {TYPE_1__* beacon_ops; } ;
struct TYPE_2__ {int slot_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mt76x02_dev*,int,struct mt76x02_txwi*,int) ;
 int FUNC_2 (struct mt76x02_dev*,struct mt76x02_txwi*,struct sk_buff*,int *,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct mt76x02_dev *VAR_1, int VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4 = VAR_1->beacon_ops->slot_size;
 struct mt76x02_txwi VAR_5;

 if (FUNC_0(VAR_4 < VAR_3->len + sizeof(struct mt76x02_txwi)))
  return -VAR_0;

 FUNC_2(VAR_1, &VAR_5, VAR_3, ((void*)0), ((void*)0), VAR_3->len);

 FUNC_1(VAR_1, VAR_2, &VAR_5, sizeof(VAR_5));
 VAR_2 += sizeof(VAR_5);

 FUNC_1(VAR_1, VAR_2, VAR_3->data, VAR_3->len);
 return 0;
}
