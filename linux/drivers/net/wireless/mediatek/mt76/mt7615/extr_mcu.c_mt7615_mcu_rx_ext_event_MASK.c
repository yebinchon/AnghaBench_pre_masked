
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct mt7615_mcu_rxd {int ext_eid; } ;
struct TYPE_2__ {int hw; } ;
struct mt7615_dev {TYPE_1__ mt76; int hw_pattern; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,int ,struct mt7615_dev*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct mt7615_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct mt7615_mcu_rxd *VAR_4 = (struct mt7615_mcu_rxd *)VAR_3->data;

 switch (VAR_4->ext_eid) {
 case 128:
  FUNC_1(VAR_2->mt76.hw);
  VAR_2->hw_pattern++;
  break;
 case 129:
  FUNC_0(VAR_2->mt76.hw,
    VAR_0,
    VAR_1, VAR_2);
  break;
 default:
  break;
 }
}
