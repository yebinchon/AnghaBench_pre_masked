
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int dev; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mt7615_dev*) ;
 int FUNC_4 (struct mt7615_dev*) ;
 scalar_t__ FUNC_5 (struct mt7615_dev*,int ,int ) ;
 int FUNC_6 (struct mt7615_dev*,int ,int ,int ,int) ;
 int FUNC_7 (struct mt7615_dev*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct mt7615_dev *VAR_6)
{
 int VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_5(VAR_6, VAR_3, VAR_4);

 if (VAR_8 != VAR_2) {
  FUNC_2(VAR_6->mt76.dev, "Firmware is not ready for download\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7)
  return VAR_7;

 if (!FUNC_6(VAR_6, VAR_3, VAR_4,
       FUNC_0(VAR_4,
           VAR_1), 500)) {
  FUNC_2(VAR_6->mt76.dev, "Timeout for initializing firmware\n");
  return -VAR_0;
 }

 FUNC_7(VAR_6, VAR_5, 0);

 FUNC_1(VAR_6->mt76.dev, "Firmware init done\n");

 return 0;
}
