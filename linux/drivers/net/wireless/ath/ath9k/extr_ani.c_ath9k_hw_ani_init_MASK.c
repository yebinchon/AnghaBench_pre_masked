
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ani_poll_interval; int cck_trig_low; int cck_trig_high; int ofdm_trig_low; int ofdm_trig_high; } ;
struct ar5416AniState {int mrcCCK; int ofdmsTurn; int ofdmWeakSigDetect; int ofdmNoiseImmunityLevel; int cckNoiseImmunityLevel; int firstepLevel; int spurImmunityLevel; } ;
struct ath_hw {TYPE_1__ config; int aniperiod; struct ar5416AniState ani; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
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
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;

void FUNC_5(struct ath_hw *VAR_15)
{
 struct ath_common *VAR_16 = FUNC_3(VAR_15);
 struct ar5416AniState *VAR_17 = &VAR_15->ani;

 FUNC_4(VAR_16, VAR_0, "Initialize ANI\n");

 if (FUNC_0(VAR_15)) {
  VAR_15->config.ofdm_trig_high = VAR_8;
  VAR_15->config.ofdm_trig_low = VAR_10;
  VAR_15->config.cck_trig_high = VAR_2;
  VAR_15->config.cck_trig_low = VAR_4;
 } else {
  VAR_15->config.ofdm_trig_high = VAR_9;
  VAR_15->config.ofdm_trig_low = VAR_11;
  VAR_15->config.cck_trig_high = VAR_3;
  VAR_15->config.cck_trig_low = VAR_5;
 }

 VAR_17->spurImmunityLevel = VAR_14;
 VAR_17->firstepLevel = VAR_6;
 VAR_17->mrcCCK = FUNC_0(VAR_15) ? 1 : 0;
 VAR_17->ofdmsTurn = 1;
 VAR_17->ofdmWeakSigDetect = 1;
 VAR_17->cckNoiseImmunityLevel = VAR_1;
 VAR_17->ofdmNoiseImmunityLevel = VAR_7;





 VAR_15->aniperiod = VAR_12;
 VAR_15->config.ani_poll_interval = VAR_13;

 FUNC_1(VAR_15);
 FUNC_2(VAR_15);
}
