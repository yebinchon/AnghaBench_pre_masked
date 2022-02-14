
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wcn36xx_hal_config_bss_params {int ht_oper_mode; int lln_non_gf_coexist; scalar_t__ ht20_coexist; scalar_t__ dual_cts_protection; void* lsig_tx_op_protection_full_support; void* tx_channel_width_set; scalar_t__ ht; } ;
struct TYPE_3__ {int ht_operation_mode; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct TYPE_4__ {unsigned long cap; scalar_t__ ht_supported; } ;
struct ieee80211_sta {TYPE_2__ ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_vif *VAR_3,
  struct ieee80211_sta *VAR_4,
  struct wcn36xx_hal_config_bss_params *VAR_5)
{
 if (VAR_4 && VAR_4->ht_cap.ht_supported) {
  unsigned long VAR_6 = VAR_4->ht_cap.cap;
  VAR_5->ht = VAR_4->ht_cap.ht_supported;
  VAR_5->tx_channel_width_set = FUNC_0(VAR_6,
   VAR_1);
  VAR_5->lsig_tx_op_protection_full_support =
   FUNC_0(VAR_6,
      VAR_0);

  VAR_5->ht_oper_mode = VAR_3->bss_conf.ht_operation_mode;
  VAR_5->lln_non_gf_coexist =
   !!(VAR_3->bss_conf.ht_operation_mode &
      VAR_2);

  VAR_5->dual_cts_protection = 0;

  VAR_5->ht20_coexist = 0;
 }
}
