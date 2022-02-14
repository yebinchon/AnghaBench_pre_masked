
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_common {int dummy; } ;
struct ath_beacon_config {int dummy; } ;
struct ath9k_htc_priv {TYPE_1__* ah; struct ath_beacon_config cur_beacon_conf; } ;
struct TYPE_2__ {int opmode; } ;


 int VAR_0 ;




 int FUNC_0 (struct ath9k_htc_priv*,struct ath_beacon_config*) ;
 int FUNC_1 (struct ath9k_htc_priv*,struct ath_beacon_config*) ;
 int FUNC_2 (struct ath9k_htc_priv*,struct ath_beacon_config*) ;
 struct ath_common* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;

void FUNC_5(struct ath9k_htc_priv *VAR_1)
{
 struct ath_common *VAR_2 = FUNC_3(VAR_1->ah);
 struct ath_beacon_config *VAR_3 = &VAR_1->cur_beacon_conf;

 switch (VAR_1->ah->opmode) {
 case 128:
  FUNC_2(VAR_1, VAR_3);
  break;
 case 131:
  FUNC_0(VAR_1, VAR_3);
  break;
 case 129:
 case 130:
  FUNC_1(VAR_1, VAR_3);
  break;
 default:
  FUNC_4(VAR_2, VAR_0, "Unsupported beaconing mode\n");
  return;
 }
}
