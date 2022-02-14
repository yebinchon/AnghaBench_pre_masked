
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_beacon_config {int dummy; } ;
struct ath9k_htc_priv {int ah; } ;
struct ath9k_beacon_state {int dummy; } ;
typedef enum ath9k_int { ____Placeholder_ath9k_int } ath9k_int ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct ath_beacon_config*,struct ath9k_beacon_state*) ;
 int FUNC_3 (int ,struct ath9k_beacon_state*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ath9k_htc_priv *VAR_4,
     struct ath_beacon_config *VAR_5)
{
 struct ath9k_beacon_state VAR_6;
 enum ath9k_int VAR_7 = 0;
 __be32 VAR_8 = 0;
 int VAR_9 __attribute__ ((unused));
 u8 VAR_10;

 if (FUNC_2(VAR_4->ah, VAR_5, &VAR_6) == -VAR_1)
  return;

 FUNC_0(VAR_2);
 FUNC_3(VAR_4->ah, &VAR_6);
 VAR_7 |= VAR_0;
 VAR_8 = FUNC_4(VAR_7);
 FUNC_1(VAR_3, &VAR_8);
}
