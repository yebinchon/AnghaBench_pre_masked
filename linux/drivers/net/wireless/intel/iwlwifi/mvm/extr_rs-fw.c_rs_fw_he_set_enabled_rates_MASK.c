
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct iwl_tlc_config_cmd {void*** ht_rates; } ;
struct ieee80211_supported_band {TYPE_4__* iftype_data; } ;
struct TYPE_5__ {int rx_mcs_80; int rx_mcs_160; } ;
struct ieee80211_sta_he_cap {TYPE_1__ he_mcs_nss_supp; } ;
struct ieee80211_sta {int rx_nss; struct ieee80211_sta_he_cap he_cap; } ;
struct TYPE_6__ {int tx_mcs_160; int tx_mcs_80; } ;
struct TYPE_7__ {TYPE_2__ he_mcs_nss_supp; } ;
struct TYPE_8__ {TYPE_3__ he_cap; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(const struct ieee80211_sta *VAR_4,
      struct ieee80211_supported_band *VAR_5,
      struct iwl_tlc_config_cmd *VAR_6)
{
 const struct ieee80211_sta_he_cap *VAR_7 = &VAR_4->he_cap;
 u16 VAR_8 = FUNC_1(VAR_7->he_mcs_nss_supp.rx_mcs_160);
 u16 VAR_9 = FUNC_1(VAR_7->he_mcs_nss_supp.rx_mcs_80);
 u16 VAR_10 =
  FUNC_1(VAR_5->iftype_data->he_cap.he_mcs_nss_supp.tx_mcs_80);
 u16 VAR_11 =
  FUNC_1(VAR_5->iftype_data->he_cap.he_mcs_nss_supp.tx_mcs_160);
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_4->rx_nss && VAR_12 < VAR_3; VAR_12++) {
  u16 VAR_13 = (VAR_8 >> (2 * VAR_12)) & 0x3;
  u16 VAR_14 = (VAR_9 >> (2 * VAR_12)) & 0x3;
  u16 VAR_15 = (VAR_11 >> (2 * VAR_12)) & 0x3;
  u16 VAR_16 = (VAR_10 >> (2 * VAR_12)) & 0x3;


  if (VAR_14 == VAR_0 ||
      VAR_16 == VAR_0) {
   VAR_14 = VAR_0;
   VAR_16 = VAR_0;
  }
  if (VAR_14 > VAR_16)
   VAR_14 = VAR_16;
  VAR_6->ht_rates[VAR_12][VAR_2] =
   FUNC_0(FUNC_2(VAR_14));


  if (VAR_13 == VAR_0 ||
      VAR_15 == VAR_0) {
   VAR_13 = VAR_0;
   VAR_15 = VAR_0;
  }
  if (VAR_13 > VAR_15)
   VAR_13 = VAR_15;
  VAR_6->ht_rates[VAR_12][VAR_1] =
   FUNC_0(FUNC_2(VAR_13));
 }
}
