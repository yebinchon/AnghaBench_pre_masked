
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
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct mt76x02_dev*) ;
 int FUNC_4 (struct mt76x02_dev*,int ,int,int,int) ;
 int FUNC_5 (struct mt76x02_dev*,int,int,int,int) ;
 int FUNC_6 (struct mt76x02_dev*,int) ;
 int FUNC_7 (struct mt76x02_dev*,int ,int) ;
 int FUNC_8 (struct mt76x02_dev*,int ,int *,int) ;
 scalar_t__ FUNC_9 (struct mt76x02_dev*) ;
 int FUNC_10 (struct firmware const*) ;
 int FUNC_11 (struct firmware const**,int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct mt76x02_dev *VAR_11)
{
 const struct firmware *VAR_12 = ((void*)0);
 struct mt76x02_patch_header *VAR_13;
 bool VAR_14 = !FUNC_3(VAR_11);
 int VAR_15, VAR_16 = 0;
 __le32 *VAR_17;
 u32 VAR_18, VAR_19;

 if (VAR_14 && !FUNC_4(VAR_11, VAR_10, 1, 1, 600)) {
  FUNC_1(VAR_11->mt76.dev,
   "Could not get hardware semaphore for ROM PATCH\n");
  return -VAR_1;
 }

 if (FUNC_9(VAR_11) >= VAR_3) {
  VAR_18 = FUNC_0(0);
  VAR_19 = VAR_4;
 } else {
  VAR_18 = FUNC_0(1);
  VAR_19 = VAR_5;
 }

 if (VAR_14 && (FUNC_6(VAR_11, VAR_19) & VAR_18)) {
  FUNC_2(VAR_11->mt76.dev, "ROM patch already applied\n");
  goto out;
 }

 VAR_16 = FUNC_11(&VAR_12, VAR_2, VAR_11->mt76.dev);
 if (VAR_16)
  goto out;

 if (!VAR_12 || !VAR_12->data || VAR_12->size <= sizeof(*VAR_13)) {
  VAR_16 = -VAR_0;
  FUNC_1(VAR_11->mt76.dev, "Failed to load firmware\n");
  goto out;
 }

 VAR_13 = (struct mt76x02_patch_header *)VAR_12->data;
 FUNC_2(VAR_11->mt76.dev, "ROM patch build: %.15s\n", VAR_13->build_time);

 FUNC_7(VAR_11, VAR_7, VAR_9);

 VAR_17 = (__le32 *)(VAR_12->data + sizeof(*VAR_13));
 VAR_15 = VAR_12->size - sizeof(*VAR_13);
 FUNC_8(VAR_11, VAR_8, VAR_17, VAR_15);

 FUNC_7(VAR_11, VAR_7, 0);


 FUNC_7(VAR_11, VAR_6, 4);

 if (!FUNC_5(VAR_11, VAR_19, VAR_18, VAR_18, 2000)) {
  FUNC_1(VAR_11->mt76.dev, "Failed to load ROM patch\n");
  VAR_16 = -VAR_1;
 }

out:

 if (VAR_14)
  FUNC_7(VAR_11, VAR_10, 1);
 FUNC_10(VAR_12);
 return VAR_16;
}
