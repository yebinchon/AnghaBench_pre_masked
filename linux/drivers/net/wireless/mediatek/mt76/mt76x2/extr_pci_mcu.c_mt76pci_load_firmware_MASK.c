
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt76x02_fw_header {int dlm_len; int ilm_len; int build_time; int build_ver; int fw_ver; } ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct firmware {int size; scalar_t__ data; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mt76x02_dev*,int ,int,int,int) ;
 int FUNC_7 (struct mt76x02_dev*,int ,int ) ;
 int FUNC_8 (struct mt76x02_dev*,int ,int) ;
 int FUNC_9 (struct mt76x02_dev*,int,int *,int) ;
 int FUNC_10 (struct mt76x02_dev*,int ) ;
 int FUNC_11 (struct mt76x02_dev*,struct mt76x02_fw_header const*) ;
 scalar_t__ FUNC_12 (struct mt76x02_dev*) ;
 int FUNC_13 (struct firmware const*) ;
 int FUNC_14 (struct firmware const**,int ,int ) ;

__attribute__((used)) static int
FUNC_15(struct mt76x02_dev *VAR_14)
{
 const struct firmware *VAR_15;
 const struct mt76x02_fw_header *VAR_16;
 int VAR_17, VAR_18;
 __le32 *VAR_19;
 u32 VAR_20, VAR_21;

 VAR_18 = FUNC_14(&VAR_15, VAR_2, VAR_14->mt76.dev);
 if (VAR_18)
  return VAR_18;

 if (!VAR_15 || !VAR_15->data || VAR_15->size < sizeof(*VAR_16))
  goto error;

 VAR_16 = (const struct mt76x02_fw_header *)VAR_15->data;

 VAR_17 = sizeof(*VAR_16);
 VAR_17 += FUNC_5(VAR_16->ilm_len);
 VAR_17 += FUNC_5(VAR_16->dlm_len);

 if (VAR_15->size != VAR_17)
  goto error;

 VAR_21 = FUNC_4(VAR_16->fw_ver);
 FUNC_3(VAR_14->mt76.dev, "Firmware Version: %d.%d.%02d\n",
   (VAR_21 >> 12) & 0xf, (VAR_21 >> 8) & 0xf, VAR_21 & 0xf);

 VAR_21 = FUNC_4(VAR_16->build_ver);
 FUNC_3(VAR_14->mt76.dev, "Build: %x\n", VAR_21);
 FUNC_3(VAR_14->mt76.dev, "Build Time: %.16s\n", VAR_16->build_time);

 VAR_19 = (__le32 *)(VAR_15->data + sizeof(*VAR_16));
 VAR_17 = FUNC_5(VAR_16->ilm_len);

 FUNC_8(VAR_14, VAR_13, VAR_11);
 FUNC_9(VAR_14, VAR_10, VAR_19, VAR_17);

 VAR_19 += VAR_17 / sizeof(*VAR_19);
 VAR_17 = FUNC_5(VAR_16->dlm_len);

 if (FUNC_12(VAR_14) >= VAR_3)
  VAR_20 = VAR_8;
 else
  VAR_20 = VAR_7;

 FUNC_8(VAR_14, VAR_13, VAR_9);
 FUNC_9(VAR_14, VAR_20, VAR_19, VAR_17);

 FUNC_8(VAR_14, VAR_13, 0);

 VAR_21 = FUNC_10(VAR_14, VAR_4);
 if (FUNC_1(VAR_5, VAR_21) == 1)
  FUNC_7(VAR_14, VAR_6, FUNC_0(30));


 FUNC_8(VAR_14, VAR_12, 2);
 if (!FUNC_6(VAR_14, VAR_6, 1, 1, 200)) {
  FUNC_2(VAR_14->mt76.dev, "Firmware failed to start\n");
  FUNC_13(VAR_15);
  return -VAR_1;
 }

 FUNC_11(VAR_14, VAR_16);
 FUNC_3(VAR_14->mt76.dev, "Firmware running!\n");

 FUNC_13(VAR_15);

 return VAR_18;

error:
 FUNC_2(VAR_14->mt76.dev, "Invalid firmware\n");
 FUNC_13(VAR_15);
 return -VAR_0;
}
