
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int ast_ani_cckerrs; int ast_ani_ofdmerrs; int ast_ani_lneg_or_lzero; } ;
struct ar5416AniState {void* ofdmPhyErrCount; void* cckPhyErrCount; int listenTime; } ;
struct ath_hw {TYPE_1__ stats; int ah_mibStats; struct ar5416AniState ani; } ;
struct ath_common {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int *) ;
 int FUNC_4 (struct ath_common*) ;
 scalar_t__ FUNC_5 (struct ath_common*) ;

__attribute__((used)) static bool FUNC_6(struct ath_hw *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_2(VAR_2);
 struct ar5416AniState *VAR_4 = &VAR_2->ani;
 u32 VAR_5, VAR_6;
 int32_t VAR_7;

 FUNC_4(VAR_3);
 VAR_7 = FUNC_5(VAR_3);

 if (VAR_7 <= 0) {
  VAR_2->stats.ast_ani_lneg_or_lzero++;
  FUNC_1(VAR_2);
  return 0;
 }

 VAR_4->listenTime += VAR_7;

 FUNC_3(VAR_2, &VAR_2->ah_mibStats);

 VAR_5 = FUNC_0(VAR_2, VAR_0);
 VAR_6 = FUNC_0(VAR_2, VAR_1);

 VAR_2->stats.ast_ani_ofdmerrs += VAR_5 - VAR_4->ofdmPhyErrCount;
 VAR_4->ofdmPhyErrCount = VAR_5;

 VAR_2->stats.ast_ani_cckerrs += VAR_6 - VAR_4->cckPhyErrCount;
 VAR_4->cckPhyErrCount = VAR_6;

 return 1;
}
