
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
struct ar5416AniState {size_t cckNoiseImmunityLevel; size_t ofdmNoiseImmunityLevel; scalar_t__ firstepLevel; scalar_t__ mrcCCK; } ;
struct ath_hw {scalar_t__ opmode; struct ar5416AniState ani; } ;
struct ath_common {int dummy; } ;
struct ani_ofdm_level_entry {scalar_t__ fir_step_level; } ;
struct ani_cck_level_entry {scalar_t__ fir_step_level; scalar_t__ mrc_cck_on; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (struct ath_hw*,int ,scalar_t__) ;
 struct ath_common* FUNC_7 (struct ath_hw*) ;
 int FUNC_8 (struct ath_common*,int ,char*,size_t,size_t,scalar_t__,scalar_t__,int ) ;
 struct ani_cck_level_entry* VAR_8 ;
 struct ani_ofdm_level_entry* VAR_9 ;

__attribute__((used)) static void FUNC_9(struct ath_hw *VAR_10, u_int8_t VAR_11,
     bool VAR_12)
{
 struct ar5416AniState *VAR_13 = &VAR_10->ani;
 struct ath_common *VAR_14 = FUNC_7(VAR_10);
 const struct ani_ofdm_level_entry *VAR_15;
 const struct ani_cck_level_entry *VAR_16;

 FUNC_8(VAR_14, VAR_0, "**** ccklevel %d=>%d, rssi=%d[lo=%d hi=%d]\n",
  VAR_13->cckNoiseImmunityLevel, VAR_11,
  FUNC_5(VAR_10), VAR_6,
  VAR_5);

 if (FUNC_0(VAR_10) && VAR_11 < VAR_1)
  VAR_11 = VAR_1;

 if (VAR_10->opmode == VAR_7 &&
     FUNC_5(VAR_10) <= VAR_6 &&
     VAR_11 > VAR_2)
  VAR_11 = VAR_2;

 if (!VAR_12)
  VAR_13->cckNoiseImmunityLevel = VAR_11;

 VAR_15 = &VAR_9[VAR_13->ofdmNoiseImmunityLevel];
 VAR_16 = &VAR_8[VAR_13->cckNoiseImmunityLevel];

 if (VAR_13->firstepLevel != VAR_16->fir_step_level &&
     VAR_16->fir_step_level >= VAR_15->fir_step_level)
  FUNC_6(VAR_10,
         VAR_3,
         VAR_16->fir_step_level);


 if (!FUNC_1(VAR_10) || FUNC_2(VAR_10) ||
     FUNC_4(VAR_10) || FUNC_3(VAR_10))
  return;

 if (VAR_13->mrcCCK != VAR_16->mrc_cck_on)
  FUNC_6(VAR_10,
         VAR_4,
         VAR_16->mrc_cck_on);
}
