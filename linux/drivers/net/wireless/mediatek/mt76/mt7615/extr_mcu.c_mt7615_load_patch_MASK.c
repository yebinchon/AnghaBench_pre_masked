
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt7615_patch_hdr {int build_date; int hw_sw_ver; } ;
struct TYPE_2__ {int dev; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;
struct firmware {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct mt7615_dev*,int ,int,int ) ;
 int FUNC_4 (struct mt7615_dev*,int) ;
 int FUNC_5 (struct mt7615_dev*,scalar_t__,int) ;
 int FUNC_6 (struct mt7615_dev*) ;
 int FUNC_7 (struct firmware const*) ;
 int FUNC_8 (struct firmware const**,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct mt7615_dev *VAR_5)
{
 const struct mt7615_patch_hdr *VAR_6;
 const struct firmware *VAR_7 = ((void*)0);
 int VAR_8, VAR_9, VAR_10;

 VAR_10 = FUNC_4(VAR_5, 1);
 switch (VAR_10) {
 case 130:
  return 0;
 case 129:
  break;
 default:
  FUNC_1(VAR_5->mt76.dev, "Failed to get patch semaphore\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_8(&VAR_7, VAR_4, VAR_5->mt76.dev);
 if (VAR_9)
  goto out;

 if (!VAR_7 || !VAR_7->data || VAR_7->size < sizeof(*VAR_6)) {
  FUNC_1(VAR_5->mt76.dev, "Invalid firmware\n");
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_6 = (const struct mt7615_patch_hdr *)(VAR_7->data);

 FUNC_2(VAR_5->mt76.dev, "HW/SW Version: 0x%x, Build Time: %.16s\n",
   FUNC_0(VAR_6->hw_sw_ver), VAR_6->build_date);

 VAR_8 = VAR_7->size - sizeof(*VAR_6);

 VAR_9 = FUNC_3(VAR_5, VAR_3, VAR_8,
           VAR_0);
 if (VAR_9) {
  FUNC_1(VAR_5->mt76.dev, "Download request failed\n");
  goto out;
 }

 VAR_9 = FUNC_5(VAR_5, VAR_7->data + sizeof(*VAR_6), VAR_8);
 if (VAR_9) {
  FUNC_1(VAR_5->mt76.dev, "Failed to send firmware to device\n");
  goto out;
 }

 VAR_9 = FUNC_6(VAR_5);
 if (VAR_9)
  FUNC_1(VAR_5->mt76.dev, "Failed to start patch\n");

out:
 FUNC_7(VAR_7);

 VAR_10 = FUNC_4(VAR_5, 0);
 switch (VAR_10) {
 case 128:
  break;
 default:
  VAR_9 = -VAR_1;
  FUNC_1(VAR_5->mt76.dev, "Failed to release patch semaphore\n");
  break;
 }

 return VAR_9;
}
