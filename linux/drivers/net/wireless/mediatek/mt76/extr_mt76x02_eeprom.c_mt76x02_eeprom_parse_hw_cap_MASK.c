
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int has_5ghz; int has_2ghz; } ;
struct TYPE_4__ {TYPE_1__ cap; } ;
struct mt76x02_dev {TYPE_2__ mt76; } ;




 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mt76x02_dev*,int ) ;

void FUNC_2(struct mt76x02_dev *VAR_2)
{
 u16 VAR_3 = FUNC_1(VAR_2, VAR_0);

 switch (FUNC_0(VAR_1, VAR_3)) {
 case 128:
  VAR_2->mt76.cap.has_5ghz = 1;
  break;
 case 129:
  VAR_2->mt76.cap.has_2ghz = 1;
  break;
 default:
  VAR_2->mt76.cap.has_2ghz = 1;
  VAR_2->mt76.cap.has_5ghz = 1;
  break;
 }
}
