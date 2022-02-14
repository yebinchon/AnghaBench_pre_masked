
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath9k_htc_priv {TYPE_1__* ah; scalar_t__ num_mbss_vif; scalar_t__ num_ap_vif; scalar_t__ num_ibss_vif; } ;
struct TYPE_2__ {int opmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct ath9k_htc_priv *VAR_4)
{
 if (VAR_4->num_ibss_vif)
  VAR_4->ah->opmode = VAR_0;
 else if (VAR_4->num_ap_vif)
  VAR_4->ah->opmode = VAR_1;
 else if (VAR_4->num_mbss_vif)
  VAR_4->ah->opmode = VAR_2;
 else
  VAR_4->ah->opmode = VAR_3;

 FUNC_0(VAR_4->ah);
}
