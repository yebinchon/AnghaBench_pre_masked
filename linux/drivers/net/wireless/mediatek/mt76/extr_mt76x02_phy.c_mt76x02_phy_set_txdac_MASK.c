
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chainmask; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct mt76x02_dev*,int ,int) ;
 int FUNC_2 (struct mt76x02_dev*,int ,int) ;

void FUNC_3(struct mt76x02_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = (VAR_1->mt76.chainmask >> 8) & 0xf;
 switch (VAR_2) {
 case 2:
  FUNC_2(VAR_1, FUNC_0(VAR_0, 5), 0x3);
  break;
 default:
  FUNC_1(VAR_1, FUNC_0(VAR_0, 5), 0x3);
  break;
 }
}
