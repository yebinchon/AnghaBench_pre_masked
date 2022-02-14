
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int imask; } ;
struct ath_beacon_config {int dummy; } ;
struct ath9k_beacon_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_hw*,struct ath_beacon_config*,struct ath9k_beacon_state*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,struct ath9k_beacon_state*) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_2,
        struct ath_beacon_config *VAR_3)
{
 struct ath9k_beacon_state VAR_4;

 if (FUNC_0(VAR_2, VAR_3, &VAR_4) == -VAR_1)
  return;

 FUNC_1(VAR_2);
 FUNC_4(VAR_2, &VAR_4);
 VAR_2->imask |= VAR_0;

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
}
