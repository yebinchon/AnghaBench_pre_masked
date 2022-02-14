
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {int dev; scalar_t__ pldm; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; int events_stat; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct hl_device*) ;
 int FUNC_5 (struct hl_device*,int ) ;
 int FUNC_6 (struct hl_device*) ;
 int FUNC_7 (struct hl_device*,int ,int,int,int,int) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct hl_device *VAR_27, bool VAR_28)
{
 struct goya_device *VAR_29 = VAR_27->asic_specific;
 u32 VAR_30, VAR_31;

 if (VAR_27->pldm)
  VAR_30 = VAR_5;
 else
  VAR_30 = VAR_6;

 if (VAR_28) {
  FUNC_5(VAR_27, VAR_2);
  FUNC_4(VAR_27);
  FUNC_6(VAR_27);

  FUNC_1(VAR_24, VAR_20);
  FUNC_3(VAR_27->dev,
   "Issued HARD reset command, going to wait %dms\n",
   VAR_30);
 } else {
  FUNC_1(VAR_24, VAR_1);
  FUNC_3(VAR_27->dev,
   "Issued SOFT reset command, going to wait %dms\n",
   VAR_30);
 }






 FUNC_9(VAR_30);

 VAR_31 = FUNC_0(VAR_23);
 if (VAR_31 & VAR_18)
  FUNC_2(VAR_27->dev,
   "Timeout while waiting for device to reset 0x%x\n",
   VAR_31);

 if (!VAR_28) {
  VAR_29->hw_cap_initialized &= ~(VAR_11 | VAR_13 |
      VAR_12 | VAR_15);
  FUNC_1(VAR_21,
    VAR_3);
  return;
 }


 FUNC_1(VAR_22,
  1 << VAR_17);

 FUNC_1(VAR_25,
   0xA << VAR_19);

 VAR_29->hw_cap_initialized &= ~(VAR_7 | VAR_8 |
     VAR_9 | VAR_10 |
     VAR_11 | VAR_13 |
     VAR_14 | VAR_16 |
     VAR_12 | VAR_15);
 FUNC_8(VAR_29->events_stat, 0, sizeof(VAR_29->events_stat));

 if (!VAR_27->pldm) {
  int VAR_32;






  FUNC_3(VAR_27->dev,
   "Going to wait up to %ds for CPU boot loader\n",
   VAR_4 / 1000 / 1000);

  VAR_32 = FUNC_7(
   VAR_27,
   VAR_26,
   VAR_31,
   (VAR_31 == VAR_0),
   10000,
   VAR_4);
  if (VAR_32)
   FUNC_2(VAR_27->dev,
    "failed to wait for CPU boot loader\n");
 }
}
