
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int macRev; int macVersion; } ;
struct ath9k_ani_default {void* cycpwrThr1Ext; void* cycpwrThr1; void* firstepLow; void* firstep; void* m2ThreshLowExt; void* m1ThreshLowExt; void* m2ThreshExt; void* m1ThreshExt; void* m2CountThrLow; void* m2ThreshLow; void* m1ThreshLow; void* m2CountThr; void* m2Thresh; void* m1Thresh; } ;
struct ar5416AniState {int ofdmWeakSigDetect; int mrcCCK; int firstepLevel; int spurImmunityLevel; struct ath9k_ani_default iniDef; } ;
struct ath_hw {int opmode; TYPE_1__ hw_version; struct ar5416AniState ani; struct ath9k_channel* curchan; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int channel; } ;


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
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 void* FUNC_2 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_24)
{
 struct ar5416AniState *VAR_25;
 struct ath_common *VAR_26 = FUNC_3(VAR_24);
 struct ath9k_channel *VAR_27 = VAR_24->curchan;
 struct ath9k_ani_default *VAR_28;
 u32 VAR_29;

 VAR_25 = &VAR_24->ani;
 VAR_28 = &VAR_25->iniDef;

 FUNC_4(VAR_26, VAR_0, "ver %d.%d opmode %u chan %d Mhz\n",
  VAR_24->hw_version.macVersion,
  VAR_24->hw_version.macRev,
  VAR_24->opmode,
  VAR_27->channel);

 VAR_29 = FUNC_1(VAR_24, VAR_7);
 VAR_28->m1Thresh = FUNC_0(VAR_29, VAR_17);
 VAR_28->m2Thresh = FUNC_0(VAR_29, VAR_19);
 VAR_28->m2CountThr = FUNC_0(VAR_29, VAR_18);

 VAR_29 = FUNC_1(VAR_24, VAR_13);
 VAR_28->m1ThreshLow = FUNC_0(VAR_29, VAR_14);
 VAR_28->m2ThreshLow = FUNC_0(VAR_29, VAR_16);
 VAR_28->m2CountThrLow = FUNC_0(VAR_29, VAR_15);

 VAR_29 = FUNC_1(VAR_24, VAR_8);
 VAR_28->m1ThreshExt = FUNC_0(VAR_29, VAR_9);
 VAR_28->m2ThreshExt = FUNC_0(VAR_29, VAR_11);
 VAR_28->m1ThreshLowExt = FUNC_0(VAR_29, VAR_10);
 VAR_28->m2ThreshLowExt = FUNC_0(VAR_29, VAR_12);
 VAR_28->firstep = FUNC_2(VAR_24,
      VAR_3,
      VAR_4);
 VAR_28->firstepLow = FUNC_2(VAR_24,
         VAR_5,
         VAR_6);
 VAR_28->cycpwrThr1 = FUNC_2(VAR_24,
         VAR_20,
         VAR_21);
 VAR_28->cycpwrThr1Ext = FUNC_2(VAR_24,
            VAR_1,
            VAR_2);


 VAR_25->spurImmunityLevel = VAR_23;
 VAR_25->firstepLevel = VAR_22;
 VAR_25->ofdmWeakSigDetect = 1;
 VAR_25->mrcCCK = 1;
}
