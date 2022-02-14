
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt76x02_fw_header {int build_time; int build_ver; int fw_ver; int dlm_len; int ilm_len; } ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct firmware {int size; scalar_t__ data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mt76x02_dev*,int ,int,int,int) ;
 int FUNC_9 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_10 (struct mt76x02_dev*,int ,int) ;
 int FUNC_11 (struct mt76x02_dev*,struct mt76x02_fw_header const*) ;
 int FUNC_12 (struct mt76x02_dev*) ;
 int FUNC_13 (struct mt76x02_dev*,scalar_t__,int,int ,int) ;
 int FUNC_14 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_15 (struct mt76x02_dev*) ;
 int FUNC_16 (struct firmware const*) ;
 int FUNC_17 (struct firmware const**,int ,int ) ;
 int FUNC_18 (int,int) ;

__attribute__((used)) static int FUNC_19(struct mt76x02_dev *VAR_19)
{
 u32 VAR_20, VAR_21 = VAR_6;
 const struct mt76x02_fw_header *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 const struct firmware *VAR_27;

 VAR_23 = FUNC_17(&VAR_27, VAR_5, VAR_19->mt76.dev);
 if (VAR_23 < 0)
  return VAR_23;

 if (!VAR_27 || !VAR_27->data || VAR_27->size < sizeof(*VAR_22)) {
  VAR_23 = -VAR_1;
  goto out;
 }

 VAR_22 = (const struct mt76x02_fw_header *)VAR_27->data;
 VAR_25 = FUNC_7(VAR_22->ilm_len);
 VAR_26 = FUNC_7(VAR_22->dlm_len);
 VAR_24 = sizeof(*VAR_22) + VAR_25 + VAR_26;
 if (VAR_27->size != VAR_24) {
  VAR_23 = -VAR_1;
  goto out;
 }

 VAR_20 = FUNC_6(VAR_22->fw_ver);
 FUNC_5(VAR_19->mt76.dev, "Firmware Version: %d.%d.%02d\n",
   (VAR_20 >> 12) & 0xf, (VAR_20 >> 8) & 0xf, VAR_20 & 0xf);

 VAR_20 = FUNC_6(VAR_22->build_ver);
 FUNC_5(VAR_19->mt76.dev, "Build: %x\n", VAR_20);
 FUNC_5(VAR_19->mt76.dev, "Build Time: %.16s\n", VAR_22->build_time);


 FUNC_12(VAR_19);
 FUNC_18(5000, 10000);


 VAR_20 = VAR_16 |
       VAR_17 |
       FUNC_1(VAR_15, 0x20);
 FUNC_10(VAR_19, FUNC_2(VAR_0, VAR_18), VAR_20);

 FUNC_10(VAR_19, VAR_10, 0x1);

 FUNC_10(VAR_19, VAR_13, 0x400230);

 FUNC_10(VAR_19, VAR_14, 0x1);

 FUNC_10(VAR_19, VAR_9, 0x44);

 FUNC_10(VAR_19, VAR_11, 0x3);


 VAR_23 = FUNC_13(VAR_19, VAR_27->data + sizeof(*VAR_22),
     VAR_25, VAR_4,
     VAR_7);
 if (VAR_23 < 0) {
  VAR_23 = -VAR_2;
  goto out;
 }


 if (FUNC_15(VAR_19) >= VAR_8)
  VAR_21 += 0x800;
 VAR_23 = FUNC_13(VAR_19, VAR_27->data + sizeof(*VAR_22) + VAR_25,
     VAR_26, VAR_4,
     VAR_21);
 if (VAR_23 < 0) {
  VAR_23 = -VAR_2;
  goto out;
 }

 FUNC_14(VAR_19);
 if (!FUNC_8(VAR_19, VAR_12, 1, 1, 100)) {
  FUNC_4(VAR_19->mt76.dev, "firmware failed to start\n");
  VAR_23 = -VAR_3;
  goto out;
 }

 FUNC_9(VAR_19, VAR_12, FUNC_0(1));

 FUNC_10(VAR_19, VAR_10, 0x1);
 FUNC_11(VAR_19, VAR_22);
 FUNC_3(VAR_19->mt76.dev, "firmware running\n");

out:
 FUNC_16(VAR_27);
 return VAR_23;
}
