
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5416AniState {scalar_t__ ofdmNoiseImmunityLevel; scalar_t__ cckNoiseImmunityLevel; scalar_t__ ofdmsTurn; } ;
struct ath_hw {struct ar5416AniState ani; } ;


 int FUNC_0 (struct ath_hw*,scalar_t__,int) ;
 int FUNC_1 (struct ath_hw*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct ath_hw *VAR_0)
{
 struct ar5416AniState *VAR_1 = &VAR_0->ani;


 if (VAR_1->ofdmNoiseImmunityLevel > 0 &&
     (VAR_1->ofdmsTurn || VAR_1->cckNoiseImmunityLevel == 0)) {
  FUNC_1(VAR_0, VAR_1->ofdmNoiseImmunityLevel - 1,
          0);
  return;
 }


 if (VAR_1->cckNoiseImmunityLevel > 0)
  FUNC_0(VAR_0, VAR_1->cckNoiseImmunityLevel - 1,
         0);
}
