
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath9k_htc_priv {int rearm_ani; int reconfig_beacon; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ,struct ath9k_htc_priv*) ;

__attribute__((used)) static void FUNC_5(struct ath9k_htc_priv *VAR_2)
{
 VAR_2->rearm_ani = 0;
 VAR_2->reconfig_beacon = 0;

 FUNC_4(
  VAR_2->hw, VAR_0,
  VAR_1, VAR_2);
 if (VAR_2->rearm_ani)
  FUNC_3(VAR_2);

 if (VAR_2->reconfig_beacon) {
  FUNC_2(VAR_2);
  FUNC_0(VAR_2);
  FUNC_1(VAR_2);
 }
}
