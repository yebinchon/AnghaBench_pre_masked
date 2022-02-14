
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int has_2ghz; int has_5ghz; } ;
struct TYPE_4__ {int dev; TYPE_1__ cap; } ;
struct mt76x02_dev {TYPE_2__ mt76; scalar_t__ no_2ghz; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (struct mt76x02_dev*,int ) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct mt76x02_dev *VAR_5)
{
 u16 VAR_6 = FUNC_4(VAR_5, VAR_0);
 u16 VAR_7 = FUNC_4(VAR_5, VAR_3);

 FUNC_5(VAR_5);
 FUNC_1(VAR_5->mt76.dev, "2GHz %d 5GHz %d\n",
  VAR_5->mt76.cap.has_2ghz, VAR_5->mt76.cap.has_5ghz);

 if (VAR_5->no_2ghz) {
  VAR_5->mt76.cap.has_2ghz = 0;
  FUNC_1(VAR_5->mt76.dev, "mask out 2GHz support\n");
 }

 if (FUNC_3(VAR_5)) {
  VAR_5->mt76.cap.has_5ghz = 0;
  FUNC_1(VAR_5->mt76.dev, "mask out 5GHz support\n");
 }

 if (!FUNC_6(VAR_7 & 0xff))
  VAR_7 &= 0xff00;

 if (VAR_7 & VAR_4)
  FUNC_2(VAR_5->mt76.dev,
   "driver does not support HW RF ctrl\n");

 if (!FUNC_6(VAR_6 >> 8))
  return;

 if (FUNC_0(VAR_1, VAR_6) > 1 ||
     FUNC_0(VAR_2, VAR_6) > 1)
  FUNC_2(VAR_5->mt76.dev, "invalid tx-rx stream\n");
}
