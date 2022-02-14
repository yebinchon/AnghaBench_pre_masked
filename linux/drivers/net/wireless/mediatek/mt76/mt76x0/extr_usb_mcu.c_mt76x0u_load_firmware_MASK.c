
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt76x02_fw_header {int ilm_len; int build_time; int build_ver; int fw_ver; int dlm_len; } ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct firmware {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,int,int,int,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mt76x02_dev*,int) ;
 int FUNC_6 (struct mt76x02_dev*,int,int) ;
 int FUNC_7 (struct mt76x02_dev*,int,int) ;
 int FUNC_8 (struct mt76x02_dev*) ;
 scalar_t__ FUNC_9 (struct mt76x02_dev*) ;
 int FUNC_10 (struct mt76x02_dev*,struct firmware const**) ;
 int FUNC_11 (struct mt76x02_dev*,struct mt76x02_fw_header const*) ;
 int FUNC_12 (struct firmware const*) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(struct mt76x02_dev *VAR_12)
{
 const struct firmware *VAR_13;
 const struct mt76x02_fw_header *VAR_14;
 int VAR_15, VAR_16;
 u32 VAR_17;

 FUNC_7(VAR_12, VAR_7, (VAR_9 |
          VAR_10));

 if (FUNC_9(VAR_12))
  return 0;

 VAR_16 = FUNC_10(VAR_12, &VAR_13);
 if (VAR_16)
  return VAR_16;

 if (!VAR_13 || !VAR_13->data || VAR_13->size < sizeof(*VAR_14))
  goto err_inv_fw;

 VAR_14 = (const struct mt76x02_fw_header *)VAR_13->data;

 if (FUNC_4(VAR_14->ilm_len) <= VAR_4)
  goto err_inv_fw;

 VAR_15 = sizeof(*VAR_14);
 VAR_15 += FUNC_4(VAR_14->ilm_len);
 VAR_15 += FUNC_4(VAR_14->dlm_len);

 if (VAR_13->size != VAR_15)
  goto err_inv_fw;

 VAR_17 = FUNC_3(VAR_14->fw_ver);
 FUNC_1(VAR_12->mt76.dev,
  "Firmware Version: %d.%d.%02d Build: %x Build time: %.16s\n",
  (VAR_17 >> 12) & 0xf, (VAR_17 >> 8) & 0xf, VAR_17 & 0xf,
  FUNC_3(VAR_14->build_ver), VAR_14->build_time);

 VAR_15 = FUNC_4(VAR_14->ilm_len);

 FUNC_7(VAR_12, 0x1004, 0x2c);

 FUNC_6(VAR_12, VAR_7,
   (VAR_9 | VAR_10) |
   FUNC_0(VAR_8, 0x20));
 FUNC_8(VAR_12);
 FUNC_13(5000, 6000);

 FUNC_7(VAR_12, VAR_2, 1);


 FUNC_7(VAR_12, VAR_5, 0x400230);

 FUNC_7(VAR_12, VAR_6, 1);

 FUNC_7(VAR_12, VAR_1, 0x44);

 FUNC_7(VAR_12, VAR_3, 3);

 VAR_17 = FUNC_5(VAR_12, VAR_7);
 VAR_17 |= VAR_11;
 FUNC_7(VAR_12, VAR_7, VAR_17);
 VAR_17 &= ~VAR_11;
 FUNC_7(VAR_12, VAR_7, VAR_17);

 VAR_16 = FUNC_11(VAR_12, VAR_14);
 FUNC_12(VAR_13);

 FUNC_7(VAR_12, VAR_2, 1);

 return VAR_16;

err_inv_fw:
 FUNC_2(VAR_12->mt76.dev, "Invalid firmware image\n");
 FUNC_12(VAR_13);
 return -VAR_0;
}
