
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt76_fw_header {int ilm_len; int build_time; int build_ver; int fw_ver; int dlm_len; } ;
struct mt76_fw {int dummy; } ;
struct mt7601u_dev {int dev; } ;
struct firmware {int size; scalar_t__ data; } ;


 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int,int,int,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct mt7601u_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct mt7601u_dev*,int ,int ,int) ;
 int FUNC_8 (struct mt7601u_dev*,struct mt76_fw const*) ;
 int FUNC_9 (struct mt7601u_dev*) ;
 int FUNC_10 (struct mt7601u_dev*,int,int) ;
 int FUNC_11 (struct mt7601u_dev*,int,int) ;
 int FUNC_12 (struct firmware const*) ;
 int FUNC_13 (struct firmware const**,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct mt7601u_dev *VAR_17)
{
 const struct firmware *VAR_18;
 const struct mt76_fw_header *VAR_19;
 int VAR_20, VAR_21;
 u32 VAR_22;

 FUNC_10(VAR_17, VAR_13, (VAR_14 |
      VAR_15));

 if (FUNC_3(VAR_17))
  return FUNC_2(VAR_17->dev, VAR_1);

 VAR_21 = FUNC_13(&VAR_18, VAR_1, VAR_17->dev);
 if (VAR_21)
  return VAR_21;

 if (!VAR_18 || !VAR_18->data || VAR_18->size < sizeof(*VAR_19))
  goto err_inv_fw;

 VAR_19 = (const struct mt76_fw_header *) VAR_18->data;

 if (FUNC_5(VAR_19->ilm_len) <= VAR_5)
  goto err_inv_fw;

 VAR_20 = sizeof(*VAR_19);
 VAR_20 += FUNC_5(VAR_19->ilm_len);
 VAR_20 += FUNC_5(VAR_19->dlm_len);

 if (VAR_18->size != VAR_20)
  goto err_inv_fw;

 VAR_22 = FUNC_4(VAR_19->fw_ver);
 FUNC_1(VAR_17->dev,
   "Firmware Version: %d.%d.%02d Build: %x Build time: %.16s\n",
   (VAR_22 >> 12) & 0xf, (VAR_22 >> 8) & 0xf, VAR_22 & 0xf,
   FUNC_4(VAR_19->build_ver), VAR_19->build_time);

 VAR_20 = FUNC_5(VAR_19->ilm_len);

 FUNC_10(VAR_17, 0x94c, 0);
 FUNC_10(VAR_17, VAR_3, 0);

 FUNC_9(VAR_17);
 FUNC_6(5);

 FUNC_10(VAR_17, 0xa44, 0);
 FUNC_10(VAR_17, 0x230, 0x84210);
 FUNC_10(VAR_17, 0x400, 0x80c00);
 FUNC_10(VAR_17, 0x800, 1);

 FUNC_7(VAR_17, VAR_6, 0, (VAR_7 |
      VAR_8 |
      VAR_9 |
      VAR_10));

 FUNC_10(VAR_17, VAR_3, 1);

 FUNC_10(VAR_17, VAR_13, (VAR_14 |
      VAR_15));
 VAR_22 = FUNC_11(VAR_17, VAR_13, VAR_16);
 VAR_22 &= ~VAR_16;
 FUNC_10(VAR_17, VAR_13, VAR_22);


 FUNC_10(VAR_17, VAR_11, 0x400230);

 FUNC_10(VAR_17, VAR_12, 1);

 FUNC_10(VAR_17, VAR_2, 0x44);

 FUNC_10(VAR_17, VAR_4, 3);

 VAR_21 = FUNC_8(VAR_17, (const struct mt76_fw *)VAR_18->data);

 FUNC_12(VAR_18);

 return VAR_21;

err_inv_fw:
 FUNC_0(VAR_17->dev, "Invalid firmware image\n");
 FUNC_12(VAR_18);
 return -VAR_0;
}
