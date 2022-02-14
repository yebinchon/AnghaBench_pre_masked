
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mt76x02_fw_header {int ilm_len; int dlm_len; int build_time; int build_ver; int fw_ver; } ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;
struct firmware {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct mt76x02_dev*,int ,int,int,int) ;
 int FUNC_7 (struct mt76x02_dev*,int ,int,int,int) ;
 int FUNC_8 (struct mt76x02_dev*,int ,int) ;
 int FUNC_9 (struct mt76x02_dev*,int,int const*,int) ;
 int FUNC_10 (struct mt76x02_dev*,struct mt76x02_fw_header const*) ;
 int FUNC_11 (struct firmware const*) ;
 int FUNC_12 (struct firmware const**,char const*,int ) ;

__attribute__((used)) static int FUNC_13(struct mt76x02_dev *VAR_13)
{
 bool VAR_14 = FUNC_5(&VAR_13->mt76) != 0x7610;
 u32 VAR_15, VAR_16, VAR_17, VAR_18 = 0;
 const struct mt76x02_fw_header *VAR_19;
 const struct firmware *VAR_20;
 const char *VAR_21;
 const u8 *VAR_22;
 int VAR_23, VAR_24;

 if (VAR_14)
  VAR_21 = VAR_3;
 else
  VAR_21 = VAR_2;

 VAR_24 = FUNC_12(&VAR_20, VAR_21, VAR_13->mt76.dev);
 if (VAR_24)
  return VAR_24;

 if (!VAR_20 || !VAR_20->data || VAR_20->size < sizeof(*VAR_19)) {
  VAR_24 = -VAR_0;
  goto out;
 }

 VAR_19 = (const struct mt76x02_fw_header *)VAR_20->data;

 VAR_23 = sizeof(*VAR_19);
 VAR_23 += FUNC_4(VAR_19->ilm_len);
 VAR_23 += FUNC_4(VAR_19->dlm_len);

 if (VAR_20->size != VAR_23) {
  VAR_24 = -VAR_0;
  goto out;
 }

 VAR_22 = VAR_20->data + sizeof(*VAR_19);

 VAR_15 = FUNC_3(VAR_19->fw_ver);
 FUNC_2(VAR_13->mt76.dev, "Firmware Version: %d.%d.%02d\n",
   (VAR_15 >> 12) & 0xf, (VAR_15 >> 8) & 0xf, VAR_15 & 0xf);

 VAR_15 = FUNC_3(VAR_19->fw_ver);
 FUNC_0(VAR_13->mt76.dev,
  "Firmware Version: %d.%d.%02d Build: %x Build time: %.16s\n",
  (VAR_15 >> 12) & 0xf, (VAR_15 >> 8) & 0xf, VAR_15 & 0xf,
  FUNC_3(VAR_19->build_ver), VAR_19->build_time);

 if (VAR_14 && !FUNC_6(VAR_13, VAR_12, 1, 1, 600)) {
  FUNC_1(VAR_13->mt76.dev,
   "Could not get hardware semaphore for loading fw\n");
  VAR_24 = -VAR_1;
  goto out;
 }


 FUNC_8(VAR_13, VAR_10, 0);
 VAR_16 = FUNC_4(VAR_19->ilm_len);
 if (VAR_14) {
  VAR_16 -= VAR_9;
  VAR_18 = VAR_9;
 }
 FUNC_0(VAR_13->mt76.dev, "loading FW - ILM %u\n", VAR_16);
 FUNC_9(VAR_13, VAR_6 + VAR_18, VAR_22 + VAR_18,
       VAR_16);


 if (VAR_14) {
  FUNC_0(VAR_13->mt76.dev, "loading FW - IVB %u\n",
   VAR_9);
  FUNC_9(VAR_13, VAR_8, VAR_22, VAR_9);
 }


 FUNC_8(VAR_13, VAR_10, VAR_5);
 VAR_17 = FUNC_4(VAR_19->dlm_len);
 FUNC_0(VAR_13->mt76.dev, "loading FW - DLM %u\n", VAR_17);
 FUNC_9(VAR_13, VAR_6,
       VAR_22 + FUNC_4(VAR_19->ilm_len), VAR_17);


 FUNC_8(VAR_13, VAR_10, 0);
 if (VAR_14)
  FUNC_8(VAR_13, VAR_7, 0x3);
 else
  FUNC_8(VAR_13, VAR_11, 0x300);

 if (!FUNC_7(VAR_13, VAR_4, 1, 1, 1000)) {
  FUNC_1(VAR_13->mt76.dev, "Firmware failed to start\n");
  VAR_24 = -VAR_1;
  goto out;
 }

 FUNC_10(VAR_13, VAR_19);
 FUNC_0(VAR_13->mt76.dev, "Firmware running!\n");

out:
 if (VAR_14)
  FUNC_8(VAR_13, VAR_12, 0x1);
 FUNC_11(VAR_20);

 return VAR_24;
}
