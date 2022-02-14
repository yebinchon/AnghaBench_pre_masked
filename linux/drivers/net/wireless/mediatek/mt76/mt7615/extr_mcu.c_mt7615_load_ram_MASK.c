
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7615_fw_trailer {int build_date; int fw_ver; int addr; } ;
struct TYPE_2__ {int dev; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;
struct firmware {int data; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mt7615_dev*,struct mt7615_fw_trailer const*,int,int) ;
 int FUNC_4 (struct mt7615_dev*,int ,int ) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct mt7615_dev *VAR_7)
{
 const struct mt7615_fw_trailer *VAR_8;
 const struct firmware *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_6(&VAR_9, VAR_5, VAR_7->mt76.dev);
 if (VAR_10)
  return VAR_10;

 if (!VAR_9 || !VAR_9->data || VAR_9->size < VAR_6 * sizeof(*VAR_8)) {
  FUNC_0(VAR_7->mt76.dev, "Invalid firmware\n");
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_8 = (const struct mt7615_fw_trailer *)(VAR_9->data + VAR_9->size -
     VAR_6 * sizeof(*VAR_8));

 FUNC_1(VAR_7->mt76.dev, "N9 Firmware Version: %.10s, Build Time: %.15s\n",
   VAR_8->fw_ver, VAR_8->build_date);

 VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9->data, 0);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_4(VAR_7, FUNC_2(VAR_8->addr),
     VAR_2);
 if (VAR_10) {
  FUNC_0(VAR_7->mt76.dev, "Failed to start N9 firmware\n");
  goto out;
 }

 FUNC_5(VAR_9);

 VAR_10 = FUNC_6(&VAR_9, VAR_4, VAR_7->mt76.dev);
 if (VAR_10)
  return VAR_10;

 if (!VAR_9 || !VAR_9->data || VAR_9->size < VAR_0 * sizeof(*VAR_8)) {
  FUNC_0(VAR_7->mt76.dev, "Invalid firmware\n");
  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_8 = (const struct mt7615_fw_trailer *)(VAR_9->data + VAR_9->size -
     VAR_0 * sizeof(*VAR_8));

 FUNC_1(VAR_7->mt76.dev, "CR4 Firmware Version: %.10s, Build Time: %.15s\n",
   VAR_8->fw_ver, VAR_8->build_date);

 VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9->data, 1);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_4(VAR_7, 0, VAR_3);
 if (VAR_10)
  FUNC_0(VAR_7->mt76.dev, "Failed to start CR4 firmware\n");

out:
 FUNC_5(VAR_9);

 return VAR_10;
}
