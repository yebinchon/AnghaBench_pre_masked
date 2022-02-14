
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt76x02_patch_header {int build_time; } ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct firmware {int size; scalar_t__ data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct mt76x02_dev*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct mt76x02_dev*,int,int,int,int) ;
 int FUNC_8 (struct mt76x02_dev*,int) ;
 int FUNC_9 (struct mt76x02_dev*,int,int) ;
 int FUNC_10 (struct mt76x02_dev*) ;
 int FUNC_11 (struct mt76x02_dev*,scalar_t__,int,int ,int ) ;
 int FUNC_12 (struct mt76x02_dev*) ;
 int FUNC_13 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_14 (struct mt76x02_dev*) ;
 int FUNC_15 (struct firmware const*) ;
 int FUNC_16 (struct firmware const**,int ,int ) ;
 int FUNC_17 (int,int) ;

__attribute__((used)) static int FUNC_18(struct mt76x02_dev *VAR_19)
{
 bool VAR_20 = !FUNC_5(VAR_19);
 struct mt76x02_patch_header *VAR_21;
 u32 VAR_22, VAR_23, VAR_24;
 const struct firmware *VAR_25;
 int VAR_26;

 if (VAR_20 &&
     !FUNC_7(VAR_19, VAR_12, 1, 1, 600)) {
  FUNC_3(VAR_19->mt76.dev,
   "could not get hardware semaphore for ROM PATCH\n");
  return -VAR_2;
 }

 if (FUNC_14(VAR_19) >= VAR_6) {
  VAR_23 = FUNC_0(0);
  VAR_24 = VAR_10;
 } else {
  VAR_23 = FUNC_0(1);
  VAR_24 = VAR_11;
 }

 if (VAR_20 && (FUNC_8(VAR_19, VAR_24) & VAR_23)) {
  FUNC_4(VAR_19->mt76.dev, "ROM patch already applied\n");
  return 0;
 }

 VAR_26 = FUNC_16(&VAR_25, VAR_4, VAR_19->mt76.dev);
 if (VAR_26 < 0)
  return VAR_26;

 if (!VAR_25 || !VAR_25->data || VAR_25->size <= sizeof(*VAR_21)) {
  FUNC_3(VAR_19->mt76.dev, "failed to load firmware\n");
  VAR_26 = -VAR_1;
  goto out;
 }

 VAR_21 = (struct mt76x02_patch_header *)VAR_25->data;
 FUNC_4(VAR_19->mt76.dev, "ROM patch build: %.15s\n", VAR_21->build_time);


 VAR_22 = VAR_16 |
       VAR_17 |
       FUNC_1(VAR_15, 0x20);
 FUNC_9(VAR_19, FUNC_2(VAR_0, VAR_18), VAR_22);


 FUNC_10(VAR_19);
 FUNC_17(5000, 10000);


 FUNC_9(VAR_19, VAR_8, 0x1);

 FUNC_9(VAR_19, VAR_13, 0x400230);

 FUNC_9(VAR_19, VAR_14, 0x1);

 FUNC_9(VAR_19, VAR_7, 0x44);

 FUNC_9(VAR_19, VAR_9, 0x3);

 VAR_26 = FUNC_11(VAR_19, VAR_25->data + sizeof(*VAR_21),
     VAR_25->size - sizeof(*VAR_21),
     VAR_3,
     VAR_5);
 if (VAR_26 < 0) {
  VAR_26 = -VAR_1;
  goto out;
 }

 FUNC_12(VAR_19);
 FUNC_13(VAR_19);
 FUNC_6(20);

 if (!FUNC_7(VAR_19, VAR_24, VAR_23, VAR_23, 100)) {
  FUNC_3(VAR_19->mt76.dev, "failed to load ROM patch\n");
  VAR_26 = -VAR_2;
 }

out:
 if (VAR_20)
  FUNC_9(VAR_19, VAR_12, 1);
 FUNC_15(VAR_25);
 return VAR_26;
}
