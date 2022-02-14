
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct mt7615_mcu_rxd {int eid; } ;
struct mt7615_dev {int dummy; } ;



 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct mt7615_dev*,struct sk_buff*) ;

__attribute__((used)) static void
FUNC_2(struct mt7615_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct mt7615_mcu_rxd *VAR_2 = (struct mt7615_mcu_rxd *)VAR_1->data;

 switch (VAR_2->eid) {
 case 128:
  FUNC_1(VAR_0, VAR_1);
  break;
 default:
  break;
 }
 FUNC_0(VAR_1);
}
