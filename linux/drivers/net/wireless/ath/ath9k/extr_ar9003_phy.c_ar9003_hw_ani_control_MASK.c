
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_5__ {int ast_ani_cckhigh; int ast_ani_ccklow; int ast_ani_spurdown; int ast_ani_spurup; int ast_ani_stepdown; int ast_ani_stepup; int ast_ani_ofdmoff; int ast_ani_ofdmon; } ;
struct TYPE_4__ {int rx_chainmask; } ;
struct TYPE_6__ {int m1ThreshLow; int m2ThreshLow; int m1Thresh; int m2Thresh; int m2CountThr; int m2CountThrLow; int m1ThreshLowExt; int m2ThreshLowExt; int m1ThreshExt; int m2ThreshExt; int firstep; int firstepLow; int cycpwrThr1; int cycpwrThr1Ext; } ;
struct ar5416AniState {size_t ofdmWeakSigDetect; size_t firstepLevel; size_t spurImmunityLevel; int mrcCCK; int cckPhyErrCount; int ofdmPhyErrCount; int listenTime; TYPE_3__ iniDef; } ;
struct ath_hw {int ani_function; TYPE_2__ stats; TYPE_1__ caps; struct ar5416AniState ani; struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int channel; } ;
typedef int s32 ;
typedef enum ath9k_ani_cmd { ____Placeholder_ath9k_ani_cmd } ath9k_ani_cmd ;


 int VAR_0 ;
 size_t FUNC_0 (int*) ;
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
 int VAR_25 ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;

 size_t VAR_26 ;


 size_t VAR_27 ;

 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_3 (struct ath_hw*,int ,int ) ;
 int FUNC_4 (struct ath_hw*,int ,int ,int) ;
 int FUNC_5 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_common*,int ,char*,size_t,...) ;
 int* VAR_32 ;
 int* VAR_33 ;
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

__attribute__((used)) static bool FUNC_8(struct ath_hw *VAR_44,
      enum ath9k_ani_cmd VAR_45, int VAR_46)
{
 struct ath_common *VAR_47 = FUNC_6(VAR_44);
 struct ath9k_channel *VAR_48 = VAR_44->curchan;
 struct ar5416AniState *VAR_49 = &VAR_44->ani;
 int VAR_50, VAR_51;
 int VAR_52, VAR_53;
 int VAR_54, VAR_55;
 int VAR_56, VAR_57;
 int VAR_58, VAR_59;
 s32 VAR_60, VAR_61;

 switch (VAR_45 & VAR_44->ani_function) {
 case 129:{







  u32 VAR_62 = VAR_46 ? 1 : 0;

  if (FUNC_1(VAR_44) || FUNC_2(VAR_44))
   goto skip_ws_det;

  VAR_50 = VAR_62 ?
   VAR_49->iniDef.m1ThreshLow : VAR_36;
  VAR_51 = VAR_62 ?
   VAR_49->iniDef.m2ThreshLow : VAR_42;
  VAR_52 = VAR_62 ?
   VAR_49->iniDef.m1Thresh : VAR_37;
  VAR_53 = VAR_62 ?
   VAR_49->iniDef.m2Thresh : VAR_43;
  VAR_54 = VAR_62 ?
   VAR_49->iniDef.m2CountThr : VAR_39;
  VAR_55 = VAR_62 ?
   VAR_49->iniDef.m2CountThrLow : VAR_38;
  VAR_56 = VAR_62 ?
   VAR_49->iniDef.m1ThreshLowExt : VAR_35;
  VAR_57 = VAR_62 ?
   VAR_49->iniDef.m2ThreshLowExt : VAR_41;
  VAR_58 = VAR_62 ?
   VAR_49->iniDef.m1ThreshExt : VAR_34;
  VAR_59 = VAR_62 ?
   VAR_49->iniDef.m2ThreshExt : VAR_40;

  FUNC_4(VAR_44, VAR_16,
         VAR_17,
         VAR_50);
  FUNC_4(VAR_44, VAR_16,
         VAR_19,
         VAR_51);
  FUNC_4(VAR_44, VAR_10,
         VAR_21,
         VAR_52);
  FUNC_4(VAR_44, VAR_10,
         VAR_23,
         VAR_53);
  FUNC_4(VAR_44, VAR_10,
         VAR_22,
         VAR_54);
  FUNC_4(VAR_44, VAR_16,
         VAR_18,
         VAR_55);
  FUNC_4(VAR_44, VAR_11,
         VAR_13,
         VAR_56);
  FUNC_4(VAR_44, VAR_11,
         VAR_15,
         VAR_57);
  FUNC_4(VAR_44, VAR_11,
         VAR_12,
         VAR_58);
  FUNC_4(VAR_44, VAR_11,
         VAR_14,
         VAR_59);
skip_ws_det:
  if (VAR_62)
   FUNC_5(VAR_44, VAR_16,
        VAR_20);
  else
   FUNC_3(VAR_44, VAR_16,
        VAR_20);

  if (VAR_62 != VAR_49->ofdmWeakSigDetect) {
   FUNC_7(VAR_47, VAR_0,
    "** ch %d: ofdm weak signal: %s=>%s\n",
    VAR_48->channel,
    VAR_49->ofdmWeakSigDetect ?
    "on" : "off",
    VAR_62 ? "on" : "off");
   if (VAR_62)
    VAR_44->stats.ast_ani_ofdmon++;
   else
    VAR_44->stats.ast_ani_ofdmoff++;
   VAR_49->ofdmWeakSigDetect = VAR_62;
  }
  break;
 }
 case 131:{
  u32 VAR_63 = VAR_46;

  if (VAR_63 >= FUNC_0(VAR_33)) {
   FUNC_7(VAR_47, VAR_0,
    "ATH9K_ANI_FIRSTEP_LEVEL: level out of range (%u > %zu)\n",
    VAR_63, FUNC_0(VAR_33));
   return 0;
  }





  VAR_60 = VAR_33[VAR_63] -
   VAR_33[VAR_26] +
   VAR_49->iniDef.firstep;
  if (VAR_60 < VAR_29)
   VAR_60 = VAR_29;
  if (VAR_60 > VAR_28)
   VAR_60 = VAR_28;
  FUNC_4(VAR_44, VAR_3,
         VAR_4,
         VAR_60);





  VAR_61 = VAR_33[VAR_63] -
    VAR_33[VAR_26] +
    VAR_49->iniDef.firstepLow;
  if (VAR_61 < VAR_29)
   VAR_61 = VAR_29;
  if (VAR_61 > VAR_28)
   VAR_61 = VAR_28;

  FUNC_4(VAR_44, VAR_5,
         VAR_6, VAR_61);

  if (VAR_63 != VAR_49->firstepLevel) {
   FUNC_7(VAR_47, VAR_0,
    "** ch %d: level %d=>%d[def:%d] firstep[level]=%d ini=%d\n",
    VAR_48->channel,
    VAR_49->firstepLevel,
    VAR_63,
    VAR_26,
    VAR_60,
    VAR_49->iniDef.firstep);
   FUNC_7(VAR_47, VAR_0,
    "** ch %d: level %d=>%d[def:%d] firstep_low[level]=%d ini=%d\n",
    VAR_48->channel,
    VAR_49->firstepLevel,
    VAR_63,
    VAR_26,
    VAR_61,
    VAR_49->iniDef.firstepLow);
   if (VAR_63 > VAR_49->firstepLevel)
    VAR_44->stats.ast_ani_stepup++;
   else if (VAR_63 < VAR_49->firstepLevel)
    VAR_44->stats.ast_ani_stepdown++;
   VAR_49->firstepLevel = VAR_63;
  }
  break;
 }
 case 128:{
  u32 VAR_64 = VAR_46;

  if (VAR_64 >= FUNC_0(VAR_32)) {
   FUNC_7(VAR_47, VAR_0,
    "ATH9K_ANI_SPUR_IMMUNITY_LEVEL: level out of range (%u > %zu)\n",
    VAR_64, FUNC_0(VAR_32));
   return 0;
  }




  VAR_60 = VAR_32[VAR_64] -
   VAR_32[VAR_27] +
   VAR_49->iniDef.cycpwrThr1;
  if (VAR_60 < VAR_31)
   VAR_60 = VAR_31;
  if (VAR_60 > VAR_30)
   VAR_60 = VAR_30;
  FUNC_4(VAR_44, VAR_24,
         VAR_25,
         VAR_60);






  VAR_61 = VAR_32[VAR_64] -
    VAR_32[VAR_27] +
    VAR_49->iniDef.cycpwrThr1Ext;
  if (VAR_61 < VAR_31)
   VAR_61 = VAR_31;
  if (VAR_61 > VAR_30)
   VAR_61 = VAR_30;
  FUNC_4(VAR_44, VAR_1,
         VAR_2, VAR_61);

  if (VAR_64 != VAR_49->spurImmunityLevel) {
   FUNC_7(VAR_47, VAR_0,
    "** ch %d: level %d=>%d[def:%d] cycpwrThr1[level]=%d ini=%d\n",
    VAR_48->channel,
    VAR_49->spurImmunityLevel,
    VAR_64,
    VAR_27,
    VAR_60,
    VAR_49->iniDef.cycpwrThr1);
   FUNC_7(VAR_47, VAR_0,
    "** ch %d: level %d=>%d[def:%d] cycpwrThr1Ext[level]=%d ini=%d\n",
    VAR_48->channel,
    VAR_49->spurImmunityLevel,
    VAR_64,
    VAR_27,
    VAR_61,
    VAR_49->iniDef.cycpwrThr1Ext);
   if (VAR_64 > VAR_49->spurImmunityLevel)
    VAR_44->stats.ast_ani_spurup++;
   else if (VAR_64 < VAR_49->spurImmunityLevel)
    VAR_44->stats.ast_ani_spurdown++;
   VAR_49->spurImmunityLevel = VAR_64;
  }
  break;
 }
 case 130:{




  bool VAR_65 = VAR_46 ? 1 : 0;

  if (VAR_44->caps.rx_chainmask == 1)
   break;

  FUNC_4(VAR_44, VAR_7,
         VAR_8, VAR_65);
  FUNC_4(VAR_44, VAR_7,
         VAR_9, VAR_65);
  if (VAR_65 != VAR_49->mrcCCK) {
   FUNC_7(VAR_47, VAR_0, "** ch %d: MRC CCK: %s=>%s\n",
    VAR_48->channel,
    VAR_49->mrcCCK ? "on" : "off",
    VAR_65 ? "on" : "off");
   if (VAR_65)
    VAR_44->stats.ast_ani_ccklow++;
   else
    VAR_44->stats.ast_ani_cckhigh++;
   VAR_49->mrcCCK = VAR_65;
  }
 break;
 }
 default:
  FUNC_7(VAR_47, VAR_0, "invalid cmd %u\n", VAR_45);
  return 0;
 }

 FUNC_7(VAR_47, VAR_0,
  "ANI parameters: SI=%d, ofdmWS=%s FS=%d MRCcck=%s listenTime=%d ofdmErrs=%d cckErrs=%d\n",
  VAR_49->spurImmunityLevel,
  VAR_49->ofdmWeakSigDetect ? "on" : "off",
  VAR_49->firstepLevel,
  VAR_49->mrcCCK ? "on" : "off",
  VAR_49->listenTime,
  VAR_49->ofdmPhyErrCount,
  VAR_49->cckPhyErrCount);
 return 1;
}
