
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int ast_ani_spurdown; int ast_ani_spurup; int ast_ani_stepdown; int ast_ani_stepup; int ast_ani_ofdmoff; int ast_ani_ofdmon; } ;
struct TYPE_3__ {int m1ThreshLow; int m2ThreshLow; int m1Thresh; int m2Thresh; int m2CountThr; int m2CountThrLow; int m1ThreshLowExt; int m2ThreshLowExt; int m1ThreshExt; int m2ThreshExt; int cycpwrThr1Ext; int cycpwrThr1; int firstepLow; int firstep; } ;
struct ar5416AniState {int ofdmWeakSigDetect; int firstepLevel; int spurImmunityLevel; int cckPhyErrCount; int ofdmPhyErrCount; int listenTime; scalar_t__ mrcCCK; TYPE_1__ iniDef; } ;
struct ath_hw {int ani_function; TYPE_2__ stats; struct ar5416AniState ani; struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int channel; } ;
typedef int s32 ;
typedef enum ath9k_ani_cmd { ____Placeholder_ath9k_ani_cmd } ath9k_ani_cmd ;


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

 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ,int) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 int FUNC_3 (int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_common*,int ,char*,int,...) ;
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

__attribute__((used)) static bool FUNC_6(struct ath_hw *VAR_35,
          enum ath9k_ani_cmd VAR_36,
          int VAR_37)
{
 struct ath_common *VAR_38 = FUNC_4(VAR_35);
 struct ath9k_channel *VAR_39 = VAR_35->curchan;
 struct ar5416AniState *VAR_40 = &VAR_35->ani;
 s32 VAR_41;

 switch (VAR_36 & VAR_35->ani_function) {
 case 129:{







  u32 VAR_42 = VAR_37 ? 1 : 0;




  int VAR_43 = VAR_42 ?
   VAR_40->iniDef.m1ThreshLow : VAR_27;
  int VAR_44 = VAR_42 ?
   VAR_40->iniDef.m2ThreshLow : VAR_33;
  int VAR_45 = VAR_42 ?
   VAR_40->iniDef.m1Thresh : VAR_28;
  int VAR_46 = VAR_42 ?
   VAR_40->iniDef.m2Thresh : VAR_34;
  int VAR_47 = VAR_42 ?
   VAR_40->iniDef.m2CountThr : VAR_30;
  int VAR_48 = VAR_42 ?
   VAR_40->iniDef.m2CountThrLow : VAR_29;
  int VAR_49 = VAR_42 ?
   VAR_40->iniDef.m1ThreshLowExt : VAR_26;
  int VAR_50 = VAR_42 ?
   VAR_40->iniDef.m2ThreshLowExt : VAR_32;
  int VAR_51 = VAR_42 ?
   VAR_40->iniDef.m1ThreshExt : VAR_25;
  int VAR_52 = VAR_42 ?
   VAR_40->iniDef.m2ThreshExt : VAR_31;

  FUNC_1(VAR_35, VAR_13,
         VAR_14,
         VAR_43);
  FUNC_1(VAR_35, VAR_13,
         VAR_16,
         VAR_44);
  FUNC_1(VAR_35, VAR_7,
         VAR_18, VAR_45);
  FUNC_1(VAR_35, VAR_7,
         VAR_20, VAR_46);
  FUNC_1(VAR_35, VAR_7,
         VAR_19, VAR_47);
  FUNC_1(VAR_35, VAR_13,
         VAR_15,
         VAR_48);

  FUNC_1(VAR_35, VAR_8,
         VAR_10, VAR_49);
  FUNC_1(VAR_35, VAR_8,
         VAR_12, VAR_50);
  FUNC_1(VAR_35, VAR_8,
         VAR_9, VAR_51);
  FUNC_1(VAR_35, VAR_8,
         VAR_11, VAR_52);

  if (VAR_42)
   FUNC_2(VAR_35, VAR_13,
        VAR_17);
  else
   FUNC_0(VAR_35, VAR_13,
        VAR_17);

  if (VAR_42 != VAR_40->ofdmWeakSigDetect) {
   FUNC_5(VAR_38, VAR_0,
    "** ch %d: ofdm weak signal: %s=>%s\n",
    VAR_39->channel,
    VAR_40->ofdmWeakSigDetect ?
    "on" : "off",
    VAR_42 ? "on" : "off");
   if (VAR_42)
    VAR_35->stats.ast_ani_ofdmon++;
   else
    VAR_35->stats.ast_ani_ofdmoff++;
   VAR_40->ofdmWeakSigDetect = VAR_42;
  }
  break;
 }
 case 131:{
  u32 VAR_53 = VAR_37;

  VAR_41 = VAR_53 * 2;
  FUNC_1(VAR_35, VAR_3,
         VAR_4, VAR_41);
  FUNC_1(VAR_35, VAR_6,
         VAR_5, VAR_41);

  if (VAR_53 != VAR_40->firstepLevel) {
   FUNC_5(VAR_38, VAR_0,
    "** ch %d: level %d=>%d[def:%d] firstep[level]=%d ini=%d\n",
    VAR_39->channel,
    VAR_40->firstepLevel,
    VAR_53,
    VAR_23,
    VAR_41,
    VAR_40->iniDef.firstep);
   FUNC_5(VAR_38, VAR_0,
    "** ch %d: level %d=>%d[def:%d] firstep_low[level]=%d ini=%d\n",
    VAR_39->channel,
    VAR_40->firstepLevel,
    VAR_53,
    VAR_23,
    VAR_41,
    VAR_40->iniDef.firstepLow);
   if (VAR_53 > VAR_40->firstepLevel)
    VAR_35->stats.ast_ani_stepup++;
   else if (VAR_53 < VAR_40->firstepLevel)
    VAR_35->stats.ast_ani_stepdown++;
   VAR_40->firstepLevel = VAR_53;
  }
  break;
 }
 case 128:{
  u32 VAR_54 = VAR_37;

  VAR_41 = (VAR_54 + 1) * 2;
  FUNC_1(VAR_35, VAR_21,
         VAR_22, VAR_41);

  FUNC_1(VAR_35, VAR_1,
      VAR_2, VAR_41 - 1);

  if (VAR_54 != VAR_40->spurImmunityLevel) {
   FUNC_5(VAR_38, VAR_0,
    "** ch %d: level %d=>%d[def:%d] cycpwrThr1[level]=%d ini=%d\n",
    VAR_39->channel,
    VAR_40->spurImmunityLevel,
    VAR_54,
    VAR_24,
    VAR_41,
    VAR_40->iniDef.cycpwrThr1);
   FUNC_5(VAR_38, VAR_0,
    "** ch %d: level %d=>%d[def:%d] cycpwrThr1Ext[level]=%d ini=%d\n",
    VAR_39->channel,
    VAR_40->spurImmunityLevel,
    VAR_54,
    VAR_24,
    VAR_41,
    VAR_40->iniDef.cycpwrThr1Ext);
   if (VAR_54 > VAR_40->spurImmunityLevel)
    VAR_35->stats.ast_ani_spurup++;
   else if (VAR_54 < VAR_40->spurImmunityLevel)
    VAR_35->stats.ast_ani_spurdown++;
   VAR_40->spurImmunityLevel = VAR_54;
  }
  break;
 }
 case 130:




  FUNC_3(1);
  break;
 default:
  FUNC_5(VAR_38, VAR_0, "invalid cmd %u\n", VAR_36);
  return 0;
 }

 FUNC_5(VAR_38, VAR_0,
  "ANI parameters: SI=%d, ofdmWS=%s FS=%d MRCcck=%s listenTime=%d ofdmErrs=%d cckErrs=%d\n",
  VAR_40->spurImmunityLevel,
  VAR_40->ofdmWeakSigDetect ? "on" : "off",
  VAR_40->firstepLevel,
  VAR_40->mrcCCK ? "on" : "off",
  VAR_40->listenTime,
  VAR_40->ofdmPhyErrCount,
  VAR_40->cckPhyErrCount);
 return 1;
}
