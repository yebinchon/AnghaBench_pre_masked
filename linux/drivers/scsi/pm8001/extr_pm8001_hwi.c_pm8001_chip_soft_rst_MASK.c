
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int lock; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (struct pm8001_hba_info*) ;
 int FUNC_3 (struct pm8001_hba_info*,int ) ;
 int FUNC_4 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_5 (struct pm8001_hba_info*,int,int ,int) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (struct pm8001_hba_info*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int
FUNC_11(struct pm8001_hba_info *VAR_33)
{
 u32 VAR_34, VAR_35;
 u32 VAR_36;
 u32 VAR_37, VAR_38, VAR_39;
 u32 VAR_40 = 0x252acbcd;
 unsigned long VAR_41;


 if (FUNC_7(VAR_33) != 0) {
  FUNC_0(VAR_33, FUNC_6("FW is not ready\n"));
  return -1;
 }




 FUNC_8(&VAR_33->lock, VAR_41);
 if (-1 == FUNC_3(VAR_33, VAR_8)) {
  FUNC_9(&VAR_33->lock, VAR_41);
  FUNC_0(VAR_33,
   FUNC_6("Shift Bar4 to 0x%x failed\n",
   VAR_8));
  return -1;
 }
 VAR_34 = FUNC_4(VAR_33, 2, VAR_11);
 FUNC_1(VAR_33,
  FUNC_6("MBIC - NMI Enable VPE0 (IOP)= 0x%x\n", VAR_34));
 FUNC_5(VAR_33, 2, VAR_11, 0x0);

 if (-1 == FUNC_3(VAR_33, VAR_9)) {
  FUNC_9(&VAR_33->lock, VAR_41);
  FUNC_0(VAR_33,
   FUNC_6("Shift Bar4 to 0x%x failed\n",
   VAR_9));
  return -1;
 }
 VAR_34 = FUNC_4(VAR_33, 2, VAR_10);
 FUNC_1(VAR_33,
  FUNC_6("MBIC - NMI Enable VPE0 (AAP1)= 0x%x\n", VAR_34));
 FUNC_5(VAR_33, 2, VAR_10, 0x0);

 VAR_34 = FUNC_4(VAR_33, 1, VAR_24);
 FUNC_1(VAR_33,
  FUNC_6("PCIE -Event Interrupt Enable = 0x%x\n", VAR_34));
 FUNC_5(VAR_33, 1, VAR_24, 0x0);

 VAR_34 = FUNC_4(VAR_33, 1, VAR_23);
 FUNC_1(VAR_33,
  FUNC_6("PCIE - Event Interrupt  = 0x%x\n", VAR_34));
 FUNC_5(VAR_33, 1, VAR_23, VAR_34);

 VAR_34 = FUNC_4(VAR_33, 1, VAR_22);
 FUNC_1(VAR_33,
  FUNC_6("PCIE -Error Interrupt Enable = 0x%x\n", VAR_34));
 FUNC_5(VAR_33, 1, VAR_22, 0x0);

 VAR_34 = FUNC_4(VAR_33, 1, VAR_21);
 FUNC_1(VAR_33,
  FUNC_6("PCIE - Error Interrupt = 0x%x\n", VAR_34));
 FUNC_5(VAR_33, 1, VAR_21, VAR_34);


 VAR_34 = FUNC_4(VAR_33, 0, VAR_16)
  & VAR_25;
 VAR_35 = VAR_34 ^ VAR_25;



 FUNC_5(VAR_33, 0, VAR_12, VAR_40);



 if (-1 == FUNC_3(VAR_33, VAR_2)) {
  FUNC_9(&VAR_33->lock, VAR_41);
  FUNC_0(VAR_33,
   FUNC_6("Shift Bar4 to 0x%x failed\n",
   VAR_2));
  return -1;
 }
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x0(0x00007b88)-GSM Configuration and"
  " Reset = 0x%x\n",
  FUNC_4(VAR_33, 2, VAR_3)));


 VAR_34 = FUNC_4(VAR_33, 2, VAR_3);
 VAR_34 &= ~(0x00003b00);

 FUNC_5(VAR_33, 2, VAR_3, VAR_34);
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x0 (0x00007b88 ==> 0x00004088) - GSM "
  "Configuration and Reset is set to = 0x%x\n",
  FUNC_4(VAR_33, 2, VAR_3)));



 VAR_37 = FUNC_4(VAR_33, 2, VAR_5);
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x700038 - Read Address Parity Check "
  "Enable = 0x%x\n", VAR_37));
 FUNC_5(VAR_33, 2, VAR_5, 0x0);
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x700038 - Read Address Parity Check Enable"
  "is set to = 0x%x\n",
  FUNC_4(VAR_33, 2, VAR_5)));


 VAR_38 = FUNC_4(VAR_33, 2, VAR_6);
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x700040 - Write Address Parity Check"
  " Enable = 0x%x\n", VAR_38));
 FUNC_5(VAR_33, 2, VAR_6, 0x0);
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x700040 - Write Address Parity Check "
  "Enable is set to = 0x%x\n",
  FUNC_4(VAR_33, 2, VAR_6)));


 VAR_39 = FUNC_4(VAR_33, 2, VAR_7);
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x300048 - Write Data Parity Check"
  " Enable = 0x%x\n", VAR_39));
 FUNC_5(VAR_33, 2, VAR_7, 0x0);
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x300048 - Write Data Parity Check Enable"
  "is set to = 0x%x\n",
 FUNC_4(VAR_33, 2, VAR_7)));


 FUNC_10(10);

 if (-1 == FUNC_3(VAR_33, VAR_0)) {
  FUNC_9(&VAR_33->lock, VAR_41);
  FUNC_1(VAR_33,
    FUNC_6("Shift Bar4 to 0x%x failed\n",
    VAR_0));
  return -1;
 }
 VAR_34 = FUNC_4(VAR_33, 2, VAR_1);
 FUNC_1(VAR_33,
   FUNC_6("GPIO Output Control Register:"
   " = 0x%x\n", VAR_34));

 VAR_34 &= 0xFFFFFFFC;
 FUNC_5(VAR_33, 2, VAR_1, VAR_34);



 if (-1 == FUNC_3(VAR_33, VAR_32)) {
  FUNC_9(&VAR_33->lock, VAR_41);
  FUNC_0(VAR_33,
   FUNC_6("SPC Shift Bar4 to 0x%x failed\n",
   VAR_32));
  return -1;
 }
 VAR_34 = FUNC_4(VAR_33, 2, VAR_26);
 FUNC_1(VAR_33,
  FUNC_6("Top Register before resetting IOP/AAP1"
  ":= 0x%x\n", VAR_34));
 VAR_34 &= ~(VAR_30 | VAR_29);
 FUNC_5(VAR_33, 2, VAR_26, VAR_34);


 VAR_34 = FUNC_4(VAR_33, 2, VAR_26);
 FUNC_1(VAR_33,
  FUNC_6("Top Register before resetting BDMA/OSSP"
  ": = 0x%x\n", VAR_34));
 VAR_34 &= ~(VAR_27 | VAR_28);
 FUNC_5(VAR_33, 2, VAR_26, VAR_34);


 FUNC_10(10);


 VAR_34 = FUNC_4(VAR_33, 2, VAR_26);
 FUNC_1(VAR_33,
  FUNC_6("Top Register before bringing up BDMA/OSSP"
  ":= 0x%x\n", VAR_34));
 VAR_34 |= (VAR_27 | VAR_28);
 FUNC_5(VAR_33, 2, VAR_26, VAR_34);


 FUNC_10(10);



 if (-1 == FUNC_3(VAR_33, VAR_2)) {
  FUNC_9(&VAR_33->lock, VAR_41);
  FUNC_0(VAR_33,
   FUNC_6("SPC Shift Bar4 to 0x%x failed\n",
   VAR_2));
  return -1;
 }
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x0 (0x00007b88)-GSM Configuration and "
  "Reset = 0x%x\n", FUNC_4(VAR_33, 2, VAR_3)));
 VAR_34 = FUNC_4(VAR_33, 2, VAR_3);
 VAR_34 |= (VAR_4);
 FUNC_5(VAR_33, 2, VAR_3, VAR_34);
 FUNC_1(VAR_33,
  FUNC_6("GSM (0x00004088 ==> 0x00007b88) - GSM"
  " Configuration and Reset is set to = 0x%x\n",
  FUNC_4(VAR_33, 2, VAR_3)));


 VAR_34 = FUNC_4(VAR_33, 2, VAR_5);

 FUNC_1(VAR_33,
  FUNC_6("GSM 0x700038 - Read Address Parity Check Enable"
  " = 0x%x\n", VAR_34));
 FUNC_5(VAR_33, 2, VAR_5, VAR_37);
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x700038 - Read Address Parity"
  " Check Enable is set to = 0x%x\n",
  FUNC_4(VAR_33, 2, VAR_5)));

 VAR_34 = FUNC_4(VAR_33, 2, VAR_6);
 FUNC_5(VAR_33, 2, VAR_6, VAR_38);
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x700040 - Write Address Parity Check"
  " Enable is set to = 0x%x\n",
  FUNC_4(VAR_33, 2, VAR_6)));

 VAR_34 = FUNC_4(VAR_33, 2, VAR_7);
 FUNC_5(VAR_33, 2, VAR_7, VAR_39);
 FUNC_1(VAR_33,
  FUNC_6("GSM 0x700048 - Write Data Parity Check Enable"
  "is set to = 0x%x\n",
  FUNC_4(VAR_33, 2, VAR_7)));



 if (-1 == FUNC_3(VAR_33, VAR_32)) {
  FUNC_9(&VAR_33->lock, VAR_41);
  FUNC_0(VAR_33,
   FUNC_6("Shift Bar4 to 0x%x failed\n",
   VAR_32));
  return -1;
 }
 VAR_34 = FUNC_4(VAR_33, 2, VAR_26);
 VAR_34 |= (VAR_30 | VAR_29);
 FUNC_5(VAR_33, 2, VAR_26, VAR_34);


 FUNC_10(10);

 if (VAR_40 == VAR_31) {


  VAR_36 = 2 * 1000 * 1000;
  do {
   FUNC_10(1);
   VAR_34 = FUNC_4(VAR_33, 0, VAR_16) &
    VAR_25;
  } while ((VAR_34 != VAR_35) && (--VAR_36));

  if (!VAR_36) {
   VAR_34 = FUNC_4(VAR_33, 0,
    VAR_16);
   FUNC_0(VAR_33,
    FUNC_6("TIMEOUT : ToggleVal 0x%x,"
    "MSGU_SCRATCH_PAD1 = 0x%x\n",
    VAR_35, VAR_34));
   FUNC_0(VAR_33,
    FUNC_6("SCRATCH_PAD0 value = 0x%x\n",
    FUNC_4(VAR_33, 0,
    VAR_15)));
   FUNC_0(VAR_33,
    FUNC_6("SCRATCH_PAD2 value = 0x%x\n",
    FUNC_4(VAR_33, 0,
    VAR_17)));
   FUNC_0(VAR_33,
    FUNC_6("SCRATCH_PAD3 value = 0x%x\n",
    FUNC_4(VAR_33, 0,
    VAR_18)));
   FUNC_9(&VAR_33->lock, VAR_41);
   return -1;
  }


  FUNC_5(VAR_33, 0, VAR_13, VAR_19);
  FUNC_5(VAR_33, 0, VAR_14, VAR_20);




  if (FUNC_2(VAR_33) == -1) {
   VAR_34 = FUNC_4(VAR_33, 0, VAR_16);

   FUNC_1(VAR_33,
    FUNC_6("FW not ready SCRATCH_PAD1"
    " = 0x%x\n", VAR_34));
   VAR_34 = FUNC_4(VAR_33, 0, VAR_17);

   FUNC_1(VAR_33,
    FUNC_6("FW not ready SCRATCH_PAD2"
    " = 0x%x\n", VAR_34));
   FUNC_1(VAR_33,
    FUNC_6("SCRATCH_PAD0 value = 0x%x\n",
    FUNC_4(VAR_33, 0,
    VAR_15)));
   FUNC_1(VAR_33,
    FUNC_6("SCRATCH_PAD3 value = 0x%x\n",
    FUNC_4(VAR_33, 0,
    VAR_18)));
   FUNC_9(&VAR_33->lock, VAR_41);
   return -1;
  }
 }
 FUNC_3(VAR_33, 0);
 FUNC_9(&VAR_33->lock, VAR_41);

 FUNC_1(VAR_33,
  FUNC_6("SPC soft reset Complete\n"));
 return 0;
}
