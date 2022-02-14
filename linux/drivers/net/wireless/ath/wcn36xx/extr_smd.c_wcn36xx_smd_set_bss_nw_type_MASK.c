
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wcn36xx_hal_config_bss_params {int nw_type; } ;
struct wcn36xx {int dummy; } ;
struct TYPE_2__ {scalar_t__ ht_supported; } ;
struct ieee80211_sta {int* supp_rates; TYPE_1__ ht_cap; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct wcn36xx*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct wcn36xx *VAR_6,
  struct ieee80211_sta *VAR_7,
  struct wcn36xx_hal_config_bss_params *VAR_8)
{
 if (VAR_1 == FUNC_0(VAR_6))
  VAR_8->nw_type = VAR_2;
 else if (VAR_7 && VAR_7->ht_cap.ht_supported)
  VAR_8->nw_type = VAR_5;
 else if (VAR_7 && (VAR_7->supp_rates[VAR_0] & 0x7f))
  VAR_8->nw_type = VAR_4;
 else
  VAR_8->nw_type = VAR_3;
}
