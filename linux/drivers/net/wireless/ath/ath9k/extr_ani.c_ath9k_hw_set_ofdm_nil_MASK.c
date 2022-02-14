
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int ofdm_trig_low; int ofdm_trig_high; } ;
struct ar5416AniState {size_t ofdmNoiseImmunityLevel; size_t cckNoiseImmunityLevel; scalar_t__ spurImmunityLevel; scalar_t__ firstepLevel; int ofdmWeakSigDetect; } ;
struct ath_hw {scalar_t__ opmode; TYPE_1__ config; struct ar5416AniState ani; } ;
struct ath_common {int dummy; } ;
struct ani_ofdm_level_entry {scalar_t__ spur_immunity_level; scalar_t__ fir_step_level; int ofdm_weak_signal_on; } ;
struct ani_cck_level_entry {scalar_t__ fir_step_level; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (struct ath_hw*,int ,int) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_common*,int ,char*,size_t,size_t,scalar_t__,int ,scalar_t__) ;
 struct ani_cck_level_entry* VAR_12 ;
 struct ani_ofdm_level_entry* VAR_13 ;

__attribute__((used)) static void FUNC_6(struct ath_hw *VAR_14, u8 VAR_15,
      bool VAR_16)
{
 struct ar5416AniState *VAR_17 = &VAR_14->ani;
 struct ath_common *VAR_18 = FUNC_4(VAR_14);
 const struct ani_ofdm_level_entry *VAR_19;
 const struct ani_cck_level_entry *VAR_20;
 bool VAR_21;

 FUNC_5(VAR_18, VAR_0, "**** ofdmlevel %d=>%d, rssi=%d[lo=%d hi=%d]\n",
  VAR_17->ofdmNoiseImmunityLevel,
  VAR_15, FUNC_2(VAR_14),
  VAR_9,
  VAR_8);

 if (FUNC_0(VAR_14) && VAR_15 < VAR_2)
  VAR_15 = VAR_2;

 if (!VAR_16)
  VAR_17->ofdmNoiseImmunityLevel = VAR_15;

 VAR_19 = &VAR_13[VAR_17->ofdmNoiseImmunityLevel];
 VAR_20 = &VAR_12[VAR_17->cckNoiseImmunityLevel];

 if (VAR_17->spurImmunityLevel != VAR_19->spur_immunity_level)
  FUNC_3(VAR_14,
         VAR_10,
         VAR_19->spur_immunity_level);

 if (VAR_17->firstepLevel != VAR_19->fir_step_level &&
     VAR_19->fir_step_level >= VAR_20->fir_step_level)
  FUNC_3(VAR_14,
         VAR_1,
         VAR_19->fir_step_level);

 VAR_21 = VAR_19->ofdm_weak_signal_on;
 if (VAR_14->opmode == VAR_11 &&
     FUNC_2(VAR_14) <= VAR_8)
  VAR_21 = 1;





 else if (FUNC_1(VAR_14) &&
   VAR_14->opmode != VAR_11)
  VAR_21 = 1;


 else if (!FUNC_1(VAR_14) &&
   VAR_17->ofdmNoiseImmunityLevel >= 8)
  VAR_21 = 0;

 if (VAR_17->ofdmWeakSigDetect != VAR_21)
  FUNC_3(VAR_14, VAR_7,
         VAR_21);

 if (!FUNC_1(VAR_14))
  return;

 if (VAR_17->ofdmNoiseImmunityLevel >= VAR_2) {
  VAR_14->config.ofdm_trig_high = VAR_3;
  VAR_14->config.ofdm_trig_low = VAR_6;
 } else {
  VAR_14->config.ofdm_trig_high = VAR_4;
  VAR_14->config.ofdm_trig_low = VAR_5;
 }
}
