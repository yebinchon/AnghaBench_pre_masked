
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct modal_eep_4k_header {int version; int antdiv_ctl1; int antdiv_ctl2; int ob_0; int ob_1; int ob_2; int ob_3; int ob_4; int db1_0; int db1_1; int db1_2; int db1_3; int db1_4; int db2_0; int db2_1; int db2_2; int db2_3; int db2_4; int txEndToXpaOff; int txFrameToXpaOn; int bb_scale_smrt_antenna; int swSettleHt40; int txFrameToPaOn; int txFrameToDataStart; int thresh62; int txEndToRxOn; int adcDesiredSize; int switchSettling; int antCtrlCommon; } ;
struct base_eep_header_4k {scalar_t__ txGainType; } ;
struct ar5416_eeprom_4k {struct modal_eep_4k_header modalHeader; struct base_eep_header_4k baseEepHeader; } ;
struct TYPE_2__ {struct ar5416_eeprom_4k map4k; } ;
struct ath9k_hw_capabilities {int hw_caps; } ;
struct ath_hw {TYPE_1__ eeprom; struct ath9k_hw_capabilities caps; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int FUNC_2 (int) ;
 int VAR_85 ;
 int FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath9k_channel*) ;
 int FUNC_5 (struct ath_hw*,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int,int) ;
 int FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_hw*,int ,int ,int ) ;
 int FUNC_9 (struct ath_hw*,int ,int) ;
 int FUNC_10 (int,int) ;
 scalar_t__ FUNC_11 (struct ath_hw*) ;
 int FUNC_12 (struct ath_hw*,struct modal_eep_4k_header*,struct ar5416_eeprom_4k*,int) ;
 int FUNC_13 (struct ath_hw*,int ,int ,int ,int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct ath_hw *VAR_86,
      struct ath9k_channel *VAR_87)
{
 struct ath9k_hw_capabilities *VAR_88 = &VAR_86->caps;
 struct modal_eep_4k_header *VAR_89;
 struct ar5416_eeprom_4k *VAR_90 = &VAR_86->eeprom.map4k;
 struct base_eep_header_4k *VAR_91 = &VAR_90->baseEepHeader;
 u8 VAR_92;
 u8 VAR_93[5], VAR_94[5], VAR_95[5];
 u8 VAR_96, VAR_97;
 u8 VAR_98;
 u32 VAR_99;

 VAR_89 = &VAR_90->modalHeader;
 VAR_92 = 23;

 FUNC_9(VAR_86, VAR_75, FUNC_14(VAR_89->antCtrlCommon));


 FUNC_12(VAR_86, VAR_89, VAR_90, VAR_92);


 if (VAR_89->version >= 3) {
  VAR_96 = VAR_89->antdiv_ctl1;
  VAR_97 = VAR_89->antdiv_ctl2;

  VAR_99 = FUNC_5(VAR_86, VAR_65);
  VAR_99 &= (~(VAR_49));

  VAR_99 |= FUNC_10(VAR_96,
        VAR_48);
  VAR_99 |= FUNC_10(VAR_97,
        VAR_46);
  VAR_99 |= FUNC_10((VAR_97 >> 2),
        VAR_51);
  VAR_99 |= FUNC_10((VAR_96 >> 1),
        VAR_45);
  VAR_99 |= FUNC_10((VAR_96 >> 2),
        VAR_50);


  FUNC_9(VAR_86, VAR_65, VAR_99);
  VAR_99 = FUNC_5(VAR_86, VAR_65);
  VAR_99 = FUNC_5(VAR_86, VAR_56);
  VAR_99 &= (~VAR_57);
  VAR_99 |= FUNC_10((VAR_96 >> 3),
        VAR_57);

  FUNC_9(VAR_86, VAR_56, VAR_99);
  VAR_99 = FUNC_5(VAR_86, VAR_56);

  if (VAR_88->hw_caps & VAR_82) {




   VAR_99 = FUNC_5(VAR_86, VAR_65);
   VAR_99 &= (~(VAR_51 |
         VAR_46));

   VAR_99 |= (VAR_83 <<
       VAR_52);
   VAR_99 |= (VAR_84 <<
       VAR_47);
   VAR_99 &= (~(VAR_53));
   VAR_99 |= (0 << VAR_54);
   FUNC_9(VAR_86, VAR_65, VAR_99);
  }
 }

 if (VAR_89->version >= 2) {
  VAR_93[0] = VAR_89->ob_0;
  VAR_93[1] = VAR_89->ob_1;
  VAR_93[2] = VAR_89->ob_2;
  VAR_93[3] = VAR_89->ob_3;
  VAR_93[4] = VAR_89->ob_4;

  VAR_94[0] = VAR_89->db1_0;
  VAR_94[1] = VAR_89->db1_1;
  VAR_94[2] = VAR_89->db1_2;
  VAR_94[3] = VAR_89->db1_3;
  VAR_94[4] = VAR_89->db1_4;

  VAR_95[0] = VAR_89->db2_0;
  VAR_95[1] = VAR_89->db2_1;
  VAR_95[2] = VAR_89->db2_2;
  VAR_95[3] = VAR_89->db2_3;
  VAR_95[4] = VAR_89->db2_4;
 } else if (VAR_89->version == 1) {
  VAR_93[0] = VAR_89->ob_0;
  VAR_93[1] = VAR_93[2] = VAR_93[3] = VAR_93[4] = VAR_89->ob_1;
  VAR_94[0] = VAR_89->db1_0;
  VAR_94[1] = VAR_94[2] = VAR_94[3] = VAR_94[4] = VAR_89->db1_1;
  VAR_95[0] = VAR_89->db2_0;
  VAR_95[1] = VAR_95[2] = VAR_95[3] = VAR_95[4] = VAR_89->db2_1;
 } else {
  int VAR_100;

  for (VAR_100 = 0; VAR_100 < 5; VAR_100++) {
   VAR_93[VAR_100] = VAR_89->ob_0;
   VAR_94[VAR_100] = VAR_89->db1_0;
   VAR_95[VAR_100] = VAR_89->db1_0;
  }
 }

 FUNC_3(VAR_86);
 if (FUNC_0(VAR_86)) {
  FUNC_13(VAR_86,
       VAR_13,
       VAR_4,
       VAR_5,
       VAR_93[0]);
  FUNC_13(VAR_86,
       VAR_13,
       VAR_6,
       VAR_7,
       VAR_93[1]);
  FUNC_13(VAR_86,
       VAR_13,
       VAR_8,
       VAR_9,
       VAR_93[2]);
  FUNC_13(VAR_86,
       VAR_13,
       VAR_2,
       VAR_3,
       VAR_94[0]);
  FUNC_13(VAR_86,
       VAR_30,
       VAR_10,
       VAR_11,
       VAR_95[0]);
 } else {
  FUNC_13(VAR_86,
       VAR_13,
       VAR_20,
       VAR_21,
       VAR_93[0]);
  FUNC_13(VAR_86,
       VAR_13,
       VAR_22,
       VAR_23,
       VAR_93[1]);
  FUNC_13(VAR_86,
       VAR_13,
       VAR_24,
       VAR_25,
       VAR_93[2]);
  FUNC_13(VAR_86,
       VAR_13,
       VAR_26,
       VAR_27,
       VAR_93[3]);
  FUNC_13(VAR_86,
       VAR_13,
       VAR_28,
       VAR_29,
       VAR_93[4]);

  FUNC_13(VAR_86,
       VAR_13,
       VAR_14,
       VAR_15,
       VAR_94[0]);
  FUNC_13(VAR_86,
       VAR_13,
       VAR_16,
       VAR_17,
       VAR_94[1]);
  FUNC_13(VAR_86,
       VAR_13,
       VAR_18,
       VAR_19,
       VAR_94[2]);
  FUNC_13(VAR_86,
       VAR_30,
       VAR_31,
       VAR_32,
       VAR_94[3]);
  FUNC_13(VAR_86,
       VAR_30,
       VAR_33,
       VAR_34, VAR_94[4]);

  FUNC_13(VAR_86,
       VAR_30,
       VAR_35,
       VAR_36,
       VAR_95[0]);
  FUNC_13(VAR_86,
       VAR_30,
       VAR_37,
       VAR_38,
       VAR_95[1]);
  FUNC_13(VAR_86,
       VAR_30,
       VAR_39,
       VAR_40,
       VAR_95[2]);
  FUNC_13(VAR_86,
       VAR_30,
       VAR_41,
       VAR_42,
       VAR_95[3]);
  FUNC_13(VAR_86,
       VAR_30,
       VAR_43,
       VAR_44,
       VAR_95[4]);
 }
 FUNC_7(VAR_86);

 FUNC_3(VAR_86);
 FUNC_8(VAR_86, VAR_73, VAR_74,
        VAR_89->switchSettling);
 FUNC_8(VAR_86, VAR_61, VAR_62,
        VAR_89->adcDesiredSize);

 FUNC_6(VAR_86, VAR_68,
  FUNC_10(VAR_89->txEndToXpaOff, VAR_71) |
  FUNC_10(VAR_89->txEndToXpaOff, VAR_72) |
  FUNC_10(VAR_89->txFrameToXpaOn, VAR_69) |
  FUNC_10(VAR_89->txFrameToXpaOn, VAR_70), 0);

 FUNC_8(VAR_86, VAR_67, VAR_78,
        VAR_89->txEndToRxOn);

 if (FUNC_1(VAR_86))
  FUNC_8(VAR_86, VAR_67, VAR_78,
         VAR_89->txEndToRxOn);
 FUNC_8(VAR_86, VAR_55, VAR_12,
        VAR_89->thresh62);
 FUNC_8(VAR_86, VAR_63, VAR_64,
        VAR_89->thresh62);

 if (FUNC_11(VAR_86) >= VAR_0) {
  FUNC_8(VAR_86, VAR_66, VAR_76,
         VAR_89->txFrameToDataStart);
  FUNC_8(VAR_86, VAR_66, VAR_77,
         VAR_89->txFrameToPaOn);
 }

 if (FUNC_11(VAR_86) >= VAR_1) {
  if (FUNC_4(VAR_87))
   FUNC_8(VAR_86, VAR_73,
          VAR_74,
          VAR_89->swSettleHt40);
 }

 FUNC_7(VAR_86);

 VAR_98 = (VAR_89->bb_scale_smrt_antenna &
   VAR_85);
 if ((VAR_91->txGainType == 0) && (VAR_98 != 0)) {
  u32 VAR_101, VAR_102, VAR_103;

  VAR_102 = FUNC_2(0)|FUNC_2(5)|FUNC_2(10)|FUNC_2(15)|FUNC_2(20)|FUNC_2(25);
  VAR_101 = VAR_102 * VAR_98;
  VAR_103 = VAR_102 * 0x1f;
  FUNC_3(VAR_86);
  FUNC_6(VAR_86, VAR_80, VAR_101, VAR_103);
  FUNC_6(VAR_86, VAR_79, VAR_101, VAR_103);
  FUNC_6(VAR_86, VAR_59, VAR_101, VAR_103);

  VAR_102 = FUNC_2(0)|FUNC_2(5)|FUNC_2(15);
  VAR_101 = VAR_102 * VAR_98;
  VAR_103 = VAR_102 * 0x1f;
  FUNC_6(VAR_86, VAR_81, VAR_101, VAR_103);

  VAR_102 = FUNC_2(0)|FUNC_2(5);
  VAR_101 = VAR_102 * VAR_98;
  VAR_103 = VAR_102 * 0x1f;
  FUNC_6(VAR_86, VAR_58, VAR_101, VAR_103);
  FUNC_6(VAR_86, VAR_60, VAR_101, VAR_103);
  FUNC_7(VAR_86);
 }
}
