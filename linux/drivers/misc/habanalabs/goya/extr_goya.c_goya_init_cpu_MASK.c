
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {int dev; int fw_loading; scalar_t__ pldm; int cpu_enable; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;



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
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct hl_device*) ;
 int FUNC_4 (struct hl_device*) ;
 int FUNC_5 (struct hl_device*,int ) ;
 scalar_t__ FUNC_6 (struct hl_device*,int ) ;
 int FUNC_7 (struct hl_device*,int ,int,int,int,int) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_8(struct hl_device *VAR_13, u32 VAR_14)
{
 struct goya_device *VAR_15 = VAR_13->asic_specific;
 u32 VAR_16;
 int VAR_17;

 if (!VAR_13->cpu_enable)
  return 0;

 if (VAR_15->hw_cap_initialized & VAR_7)
  return 0;





 if (FUNC_6(VAR_13, VAR_3) == VAR_10) {
  FUNC_1(VAR_13->dev,
   "failed to map DDR bar to DRAM base address\n");
  return -VAR_4;
 }

 if (VAR_13->pldm) {
  VAR_17 = FUNC_3(VAR_13);
  if (VAR_17)
   return VAR_17;

  goto out;
 }


 VAR_17 = FUNC_7(
  VAR_13,
  VAR_12,
  VAR_16,
  (VAR_16 == VAR_0) ||
  (VAR_16 == VAR_2),
  10000,
  VAR_14);

 if (VAR_17) {
  FUNC_1(VAR_13->dev, "Error in ARM u-boot!");
  switch (VAR_16) {
  case 129:
   FUNC_1(VAR_13->dev,
    "ARM status %d - BTL did NOT run\n", VAR_16);
   break;
  case 130:
   FUNC_1(VAR_13->dev,
    "ARM status %d - Inside WFE loop\n", VAR_16);
   break;
  case 134:
   FUNC_1(VAR_13->dev,
    "ARM status %d - Stuck in BTL\n", VAR_16);
   break;
  case 133:
   FUNC_1(VAR_13->dev,
    "ARM status %d - Stuck in Preboot\n", VAR_16);
   break;
  case 132:
   FUNC_1(VAR_13->dev,
    "ARM status %d - Stuck in SPL\n", VAR_16);
   break;
  case 131:
   FUNC_1(VAR_13->dev,
    "ARM status %d - Stuck in u-boot\n", VAR_16);
   break;
  case 135:
   FUNC_1(VAR_13->dev,
    "ARM status %d - DDR initialization failed\n",
    VAR_16);
   break;
  case 128:
   FUNC_1(VAR_13->dev,
    "ARM status %d - u-boot stopped by user\n",
    VAR_16);
   break;
  default:
   FUNC_1(VAR_13->dev,
    "ARM status %d - Invalid status code\n",
    VAR_16);
   break;
  }
  return -VAR_4;
 }


 FUNC_5(VAR_13, VAR_6);
 FUNC_5(VAR_13, VAR_5);

 if (!VAR_13->fw_loading) {
  FUNC_2(VAR_13->dev, "Skip loading FW\n");
  goto out;
 }

 if (VAR_16 == VAR_2)
  goto out;

 VAR_17 = FUNC_4(VAR_13);
 if (VAR_17)
  return VAR_17;

 FUNC_0(VAR_11, VAR_8);

 VAR_17 = FUNC_7(
  VAR_13,
  VAR_12,
  VAR_16,
  (VAR_16 == VAR_2),
  10000,
  VAR_14);

 if (VAR_17) {
  if (VAR_16 == VAR_1)
   FUNC_1(VAR_13->dev,
    "ARM u-boot reports FIT image is corrupted\n");
  else
   FUNC_1(VAR_13->dev,
    "ARM Linux failed to load, %d\n", VAR_16);
  FUNC_0(VAR_11, VAR_9);
  return -VAR_4;
 }

 FUNC_2(VAR_13->dev, "Successfully loaded firmware to device\n");

out:
 VAR_15->hw_cap_initialized |= VAR_7;

 return 0;
}
