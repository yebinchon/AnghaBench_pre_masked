
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct mt7615_fw_trailer {int addr; int len; int feature_set; } ;
struct TYPE_2__ {int dev; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct mt7615_dev*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct mt7615_dev*,int const*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct mt7615_dev *VAR_3,
        const struct mt7615_fw_trailer *VAR_4,
        const u8 *VAR_5, bool VAR_6)
{
 int VAR_7 = VAR_6 ? VAR_0 : VAR_2;
 int VAR_8, VAR_9, VAR_10 = 0;
 u32 VAR_11, VAR_12, VAR_13;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_13 = FUNC_2(VAR_4[VAR_9].feature_set, VAR_6);
  VAR_11 = FUNC_1(VAR_4[VAR_9].len) + VAR_1;
  VAR_12 = FUNC_1(VAR_4[VAR_9].addr);

  VAR_8 = FUNC_3(VAR_3, VAR_12, VAR_11, VAR_13);
  if (VAR_8) {
   FUNC_0(VAR_3->mt76.dev, "Download request failed\n");
   return VAR_8;
  }

  VAR_8 = FUNC_4(VAR_3, VAR_5 + VAR_10, VAR_11);
  if (VAR_8) {
   FUNC_0(VAR_3->mt76.dev, "Failed to send firmware to device\n");
   return VAR_8;
  }

  VAR_10 += VAR_11;
 }

 return 0;
}
