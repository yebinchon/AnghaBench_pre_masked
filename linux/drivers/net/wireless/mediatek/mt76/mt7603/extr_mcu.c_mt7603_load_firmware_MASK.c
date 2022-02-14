
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mt7603_fw_trailer {char* fw_ver; char* build_date; int dl_len; } ;
struct TYPE_6__ {int dev; TYPE_2__* hw; } ;
struct mt7603_dev {int mcu_running; TYPE_3__ mt76; } ;
struct firmware {int data; int size; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {int fw_version; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (struct mt7603_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mt7603_dev*,int ,int) ;
 int FUNC_7 (struct mt7603_dev*,int,int) ;
 int FUNC_8 (struct mt7603_dev*,int ) ;
 int FUNC_9 (struct mt7603_dev*,int) ;
 int FUNC_10 (struct mt7603_dev*,int ,int) ;
 int FUNC_11 (struct mt7603_dev*,int ,int,int,int) ;
 int FUNC_12 (struct mt7603_dev*,int ,int,int) ;
 int FUNC_13 (struct mt7603_dev*,int ) ;
 int FUNC_14 (struct mt7603_dev*,int ,int) ;
 int FUNC_15 (struct mt7603_dev*,int,int) ;
 scalar_t__ FUNC_16 (struct mt7603_dev*) ;
 int FUNC_17 (struct firmware const*) ;
 int FUNC_18 (struct firmware const**,char const*,int ) ;
 int FUNC_19 (int ,int,char*,char*,char*) ;
 int FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct mt7603_dev *VAR_13)
{
 const struct firmware *VAR_14;
 const struct mt7603_fw_trailer *VAR_15;
 const char *VAR_16;
 int VAR_17;
 u32 VAR_18, VAR_19;
 int VAR_20;

 if (FUNC_4(VAR_13)) {
  if (FUNC_16(VAR_13) == VAR_8)
   VAR_16 = VAR_6;
  else
   VAR_16 = VAR_7;
 } else {
  if (FUNC_16(VAR_13) < VAR_5)
   VAR_16 = VAR_3;
  else
   VAR_16 = VAR_4;
 }

 VAR_20 = FUNC_18(&VAR_14, VAR_16, VAR_13->mt76.dev);
 if (VAR_20)
  return VAR_20;

 if (!VAR_14 || !VAR_14->data || VAR_14->size < sizeof(*VAR_15)) {
  FUNC_2(VAR_13->mt76.dev, "Invalid firmware\n");
  VAR_20 = -VAR_0;
  goto out;
 }

 VAR_15 = (const struct mt7603_fw_trailer *)(VAR_14->data + VAR_14->size -
       sizeof(*VAR_15));

 FUNC_3(VAR_13->mt76.dev, "Firmware Version: %.10s\n", VAR_15->fw_ver);
 FUNC_3(VAR_13->mt76.dev, "Build Time: %.15s\n", VAR_15->build_date);

 VAR_18 = FUNC_9(VAR_13, 0x50012498);
 FUNC_15(VAR_13, VAR_18, 0x5);
 FUNC_15(VAR_13, VAR_18, 0x5);
 FUNC_20(1);


 FUNC_12(VAR_13, VAR_9, VAR_11,
   VAR_10 | FUNC_1(VAR_11, 5));

 VAR_19 = FUNC_13(VAR_13, VAR_12);
 if (VAR_19 & FUNC_0(1)) {
  FUNC_3(VAR_13->mt76.dev, "Firmware already running...\n");
  goto running;
 }

 if (!FUNC_11(VAR_13, VAR_12, FUNC_0(0) | FUNC_0(1), FUNC_0(0), 500)) {
  FUNC_2(VAR_13->mt76.dev, "Timeout waiting for ROM code to become ready\n");
  VAR_20 = -VAR_1;
  goto out;
 }

 VAR_17 = FUNC_5(VAR_15->dl_len) + 4;
 VAR_20 = FUNC_6(VAR_13, VAR_2, VAR_17);
 if (VAR_20) {
  FUNC_2(VAR_13->mt76.dev, "Download request failed\n");
  goto out;
 }

 VAR_20 = FUNC_7(VAR_13, VAR_14->data, VAR_17);
 if (VAR_20) {
  FUNC_2(VAR_13->mt76.dev, "Failed to send firmware to device\n");
  goto out;
 }

 VAR_20 = FUNC_8(VAR_13, VAR_2);
 if (VAR_20) {
  FUNC_2(VAR_13->mt76.dev, "Failed to start firmware\n");
  goto out;
 }

 if (!FUNC_11(VAR_13, VAR_12, FUNC_0(1), FUNC_0(1), 500)) {
  FUNC_2(VAR_13->mt76.dev, "Timeout waiting for firmware to initialize\n");
  VAR_20 = -VAR_1;
  goto out;
 }

running:
 FUNC_10(VAR_13, VAR_9, VAR_11 | VAR_10);

 FUNC_14(VAR_13, VAR_9, FUNC_0(8));
 FUNC_10(VAR_13, VAR_9, FUNC_0(8));

 VAR_13->mcu_running = 1;
 FUNC_19(VAR_13->mt76.hw->wiphy->fw_version,
   sizeof(VAR_13->mt76.hw->wiphy->fw_version),
   "%.10s-%.15s", VAR_15->fw_ver, VAR_15->build_date);
 FUNC_3(VAR_13->mt76.dev, "firmware init done\n");

out:
 FUNC_17(VAR_14);

 return VAR_20;
}
