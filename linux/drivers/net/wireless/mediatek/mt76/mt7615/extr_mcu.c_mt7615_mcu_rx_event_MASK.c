
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct mt7615_mcu_rxd {scalar_t__ ext_eid; int seq; } ;
struct mt7615_dev {int mt76; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mt7615_dev*,struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*) ;

void FUNC_2(struct mt7615_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct mt7615_mcu_rxd *VAR_6 = (struct mt7615_mcu_rxd *)VAR_5->data;

 if (VAR_6->ext_eid == VAR_3 ||
     VAR_6->ext_eid == VAR_1 ||
     VAR_6->ext_eid == VAR_0 ||
     VAR_6->ext_eid == VAR_2 ||
     !VAR_6->seq)
  FUNC_0(VAR_4, VAR_5);
 else
  FUNC_1(&VAR_4->mt76, VAR_5);
}
