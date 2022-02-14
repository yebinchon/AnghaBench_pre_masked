
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pm8001_hba_info {TYPE_1__* pdev; int controller_fatal_error; } ;
struct TYPE_2__ {scalar_t__ subsystem_vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int FUNC_2 (struct pm8001_hba_info*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (struct pm8001_hba_info*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct pm8001_hba_info*) ;
 int FUNC_6 (struct pm8001_hba_info*,int ,int ) ;
 int FUNC_7 (struct pm8001_hba_info*,int ,int ,int ) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(struct pm8001_hba_info *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18, VAR_19;


 if (!VAR_15->controller_fatal_error) {

  if (FUNC_5(VAR_15) != 0) {
   VAR_16 = FUNC_6(VAR_15, 0, VAR_3);
   FUNC_0(VAR_15, FUNC_8(
    "MPI state is not ready scratch1 :0x%x\n",
    VAR_16));
   return -1;
  }
 }

 VAR_16 = FUNC_6(VAR_15, 0, VAR_11);
 FUNC_1(VAR_15,
  FUNC_8("reset register before write : 0x%x\n", VAR_16));

 FUNC_7(VAR_15, 0, VAR_11, VAR_12);
 FUNC_4(500);

 VAR_16 = FUNC_6(VAR_15, 0, VAR_11);
 FUNC_1(VAR_15,
 FUNC_8("reset register after write 0x%x\n", VAR_16));

 if ((VAR_16 & VAR_14) ==
   VAR_13) {
  FUNC_2(VAR_15,
   FUNC_8(" soft reset successful [regval: 0x%x]\n",
     VAR_16));
 } else {
  FUNC_2(VAR_15,
   FUNC_8(" soft reset failed [regval: 0x%x]\n",
     VAR_16));


  VAR_17 =
   FUNC_6(VAR_15, 0, VAR_3) &
   VAR_10;

  if (VAR_17 == VAR_8) {
   FUNC_2(VAR_15, FUNC_8(
    "Bootloader state - HDA mode SEEPROM\n"));
  } else if (VAR_17 ==
    VAR_7) {
   FUNC_2(VAR_15, FUNC_8(
    "Bootloader state - HDA mode Bootstrap Pin\n"));
  } else if (VAR_17 ==
    VAR_9) {
   FUNC_2(VAR_15, FUNC_8(
    "Bootloader state - HDA mode soft reset\n"));
  } else if (VAR_17 ==
     VAR_6) {
   FUNC_2(VAR_15, FUNC_8(
    "Bootloader state-HDA mode critical error\n"));
  }
  return -VAR_0;
 }


 if (-1 == FUNC_3(VAR_15)) {
  FUNC_0(VAR_15,
   FUNC_8("Firmware is not ready!\n"));

  if (VAR_15->pdev->subsystem_vendor !=
   VAR_4 &&
   VAR_15->pdev->subsystem_vendor !=
   VAR_5 &&
   VAR_15->pdev->subsystem_vendor != 0) {
   VAR_18 = FUNC_6(VAR_15, 0,
     VAR_1);
   VAR_19 = FUNC_6(VAR_15, 0,
     VAR_2);
   if (!VAR_18 && !VAR_19) {
    FUNC_0(VAR_15,
     FUNC_8("iButton Feature is"
     " not Available!!!\n"));
    return -VAR_0;
   }
   if (VAR_18 == 0xdeadbeef && VAR_19 == 0xdeadbeef) {
    FUNC_0(VAR_15,
     FUNC_8("CRC Check for iButton"
     " Feature Failed!!!\n"));
    return -VAR_0;
   }
  }
 }
 FUNC_1(VAR_15,
  FUNC_8("SPCv soft reset Complete\n"));
 return 0;
}
