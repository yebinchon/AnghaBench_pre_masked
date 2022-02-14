
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mt76x02_fw_header {int ilm_len; int dlm_len; } ;
struct TYPE_2__ {int dev; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int,int,int) ;
 int FUNC_6 (TYPE_1__*,int ,int,int,int ,void*,int) ;
 int FUNC_7 (struct mt76x02_dev*,int *,int,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct mt76x02_dev *VAR_10,
   const struct mt76x02_fw_header *VAR_11)
{
 u8 *VAR_12 = (u8 *)(VAR_11 + 1);
 u32 VAR_13, VAR_14;
 void *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(VAR_12, VAR_6, VAR_2);
 if (!VAR_15)
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_11->ilm_len) - VAR_6;
 FUNC_0(VAR_10->mt76.dev, "loading FW - ILM %u + IVB %u\n",
  VAR_13, VAR_6);
 VAR_16 = FUNC_7(VAR_10, VAR_12 + VAR_6,
     VAR_13, VAR_3,
     VAR_6);
 if (VAR_16)
  goto out;

 VAR_14 = FUNC_4(VAR_11->dlm_len);
 FUNC_0(VAR_10->mt76.dev, "loading FW - DLM %u\n", VAR_14);
 VAR_16 = FUNC_7(VAR_10,
     VAR_12 + FUNC_4(VAR_11->ilm_len),
     VAR_14, VAR_3,
     VAR_5);
 if (VAR_16)
  goto out;

 VAR_16 = FUNC_6(&VAR_10->mt76, VAR_7,
       VAR_8 | VAR_9,
       0x12, 0, VAR_15, VAR_6);
 if (VAR_16 < 0)
  goto out;

 if (!FUNC_5(VAR_10, VAR_4, 1, 1, 1000)) {
  FUNC_1(VAR_10->mt76.dev, "Firmware failed to start\n");
  VAR_16 = -VAR_1;
  goto out;
 }

 FUNC_0(VAR_10->mt76.dev, "Firmware running!\n");

out:
 FUNC_2(VAR_15);

 return VAR_16;
}
