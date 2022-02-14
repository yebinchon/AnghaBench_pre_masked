
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct modal_eep_header {int ob; int db; int ob_ch1; int db_ch1; int xpaBiasLvl; int lna_ctl; int switchSettling; int adcDesiredSize; int pgaDesiredSize; int txEndToRxOn; int thresh62; int txFrameToDataStart; int txFrameToPaOn; int swSettleHt40; int miscBits; int txFrameToXpaOn; int txEndToXpaOff; int * iqCalQCh; int * iqCalICh; int * antCtrlChain; int antCtrlCommon; } ;
struct TYPE_4__ {int dacLpMode; int desiredScaleCCK; scalar_t__ dacHiPwrMode_5G; } ;
struct ar5416_eeprom_def {TYPE_2__ baseEepHeader; struct modal_eep_header* modalHeader; } ;
struct TYPE_3__ {struct ar5416_eeprom_def def; } ;
struct ath_hw {int rxchainmask; int txchainmask; TYPE_1__ eeprom; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath9k_channel*) ;
 scalar_t__ FUNC_5 (struct ath9k_channel*) ;
 int VAR_66 ;
 int VAR_67 ;
 int FUNC_6 (struct ath_hw*,scalar_t__) ;
 int FUNC_7 (struct ath_hw*,int ,int ,int) ;
 int FUNC_8 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct ath_hw*,int ,int ,int ,int) ;
 scalar_t__ FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*,struct modal_eep_header*,struct ar5416_eeprom_def*,int,int,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct ath_hw *VAR_68,
       struct ath9k_channel *VAR_69)
{
 struct modal_eep_header *VAR_70;
 struct ar5416_eeprom_def *VAR_71 = &VAR_68->eeprom.def;
 int VAR_72, VAR_73;
 u8 VAR_74;
 u32 VAR_75;

 VAR_70 = &(VAR_71->modalHeader[FUNC_4(VAR_69)]);
 VAR_74 = FUNC_4(VAR_69) ? 23 : 44;
 VAR_75 = FUNC_13(VAR_70->antCtrlCommon);

 FUNC_8(VAR_68, VAR_57, VAR_75 & 0xffff);

 for (VAR_72 = 0; VAR_72 < VAR_4; VAR_72++) {
  if (FUNC_1(VAR_68)) {
   if (VAR_72 >= 2)
    break;
  }

  if ((VAR_68->rxchainmask == 5 || VAR_68->txchainmask == 5) && (VAR_72 != 0))
   VAR_73 = (VAR_72 == 1) ? 0x2000 : 0x1000;
  else
   VAR_73 = VAR_72 * 0x1000;

  FUNC_8(VAR_68, VAR_56 + VAR_73,
     FUNC_13(VAR_70->antCtrlChain[VAR_72]));

  FUNC_8(VAR_68, FUNC_0(0) + VAR_73,
     (FUNC_6(VAR_68, FUNC_0(0) + VAR_73) &
      ~(VAR_59 |
        VAR_58)) |
     FUNC_9(VAR_70->iqCalICh[VAR_72],
        VAR_58) |
     FUNC_9(VAR_70->iqCalQCh[VAR_72],
        VAR_59));

  FUNC_12(VAR_68, VAR_70, VAR_71, VAR_74,
          VAR_73, VAR_72);
 }

 if (FUNC_3(VAR_68)) {
  if (FUNC_4(VAR_69)) {
   FUNC_10(VAR_68, VAR_6,
        VAR_9,
        VAR_10,
        VAR_70->ob);
   FUNC_10(VAR_68, VAR_6,
        VAR_7,
        VAR_8,
        VAR_70->db);
   FUNC_10(VAR_68, VAR_11,
        VAR_14,
        VAR_15,
        VAR_70->ob_ch1);
   FUNC_10(VAR_68, VAR_11,
        VAR_12,
        VAR_13,
        VAR_70->db_ch1);
  } else {
   FUNC_10(VAR_68, VAR_16,
        VAR_19,
        VAR_20,
        VAR_70->ob);
   FUNC_10(VAR_68, VAR_16,
        VAR_17,
        VAR_18,
        VAR_70->db);
   FUNC_10(VAR_68, VAR_21,
        VAR_24,
        VAR_25,
        VAR_70->ob_ch1);
   FUNC_10(VAR_68, VAR_21,
        VAR_22,
        VAR_23,
        VAR_70->db_ch1);
  }
  FUNC_10(VAR_68, VAR_28,
       VAR_31,
       VAR_32,
       VAR_70->xpaBiasLvl);
  FUNC_10(VAR_68, VAR_28,
       VAR_29,
       VAR_30,
       !!(VAR_70->lna_ctl &
          VAR_67));
  FUNC_7(VAR_68, VAR_65, VAR_44,
         !!(VAR_70->lna_ctl & VAR_66));
 }

 FUNC_7(VAR_68, VAR_54, VAR_55,
        VAR_70->switchSettling);
 FUNC_7(VAR_68, VAR_37, VAR_38,
        VAR_70->adcDesiredSize);

 if (!FUNC_3(VAR_68))
  FUNC_7(VAR_68, VAR_37,
         VAR_39,
         VAR_70->pgaDesiredSize);

 FUNC_8(VAR_68, VAR_49,
    FUNC_9(VAR_70->txEndToXpaOff, VAR_52)
    | FUNC_9(VAR_70->txEndToXpaOff,
         VAR_53)
    | FUNC_9(VAR_70->txFrameToXpaOn,
         VAR_50)
    | FUNC_9(VAR_70->txFrameToXpaOn,
         VAR_51));

 FUNC_7(VAR_68, VAR_48, VAR_63,
        VAR_70->txEndToRxOn);

 if (FUNC_3(VAR_68)) {
  FUNC_7(VAR_68, VAR_33, VAR_5,
         VAR_70->thresh62);
  FUNC_7(VAR_68, VAR_41,
         VAR_42,
         VAR_70->thresh62);
 } else {
  FUNC_7(VAR_68, VAR_33, VAR_34,
         VAR_70->thresh62);
  FUNC_7(VAR_68, VAR_40,
         VAR_43,
         VAR_70->thresh62);
 }

 if (FUNC_11(VAR_68) >= VAR_1) {
  FUNC_7(VAR_68, VAR_47,
         VAR_61,
         VAR_70->txFrameToDataStart);
  FUNC_7(VAR_68, VAR_47, VAR_62,
         VAR_70->txFrameToPaOn);
 }

 if (FUNC_11(VAR_68) >= VAR_3) {
  if (FUNC_5(VAR_69))
   FUNC_7(VAR_68, VAR_54,
          VAR_55,
          VAR_70->swSettleHt40);
 }

 if (FUNC_3(VAR_68) &&
     FUNC_11(VAR_68) >= VAR_0)
  FUNC_7(VAR_68, VAR_35,
         VAR_36,
         VAR_70->miscBits);


 if (FUNC_2(VAR_68) &&
     FUNC_11(VAR_68) >= VAR_2) {
  if (FUNC_4(VAR_69))
   FUNC_7(VAR_68, VAR_26, VAR_27,
     VAR_71->baseEepHeader.dacLpMode);
  else if (VAR_71->baseEepHeader.dacHiPwrMode_5G)
   FUNC_7(VAR_68, VAR_26, VAR_27, 0);
  else
   FUNC_7(VAR_68, VAR_26, VAR_27,
          VAR_71->baseEepHeader.dacLpMode);

  FUNC_14(100);

  FUNC_7(VAR_68, VAR_45, VAR_46,
         VAR_70->miscBits >> 2);

  FUNC_7(VAR_68, VAR_64,
         VAR_60,
         VAR_71->baseEepHeader.desiredScaleCCK);
 }
}
