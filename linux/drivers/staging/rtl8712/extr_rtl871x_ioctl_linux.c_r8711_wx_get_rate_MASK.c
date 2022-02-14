
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int value; scalar_t__ fixed; } ;
union iwreq_data {TYPE_3__ bitrate; } ;
typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct wlan_bssid_ex {int* rates; scalar_t__ IELength; int * IEs; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {struct wlan_bssid_ex network; } ;
struct mlme_priv {TYPE_1__ cur_network; } ;
struct iw_request_info {int dummy; } ;
struct ieee80211_ht_cap {int cap_info; int supp_mcs_set; } ;
struct TYPE_5__ {unsigned char rf_config; } ;
struct _adapter {TYPE_2__ registrypriv; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mlme_priv*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int ,int) ;
 struct _adapter* FUNC_3 (struct net_device*) ;
 int* FUNC_4 (int *,int ,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_8,
        struct iw_request_info *VAR_9,
        union iwreq_data *VAR_10, char *VAR_11)
{
 struct _adapter *VAR_12 = FUNC_3(VAR_8);
 struct mlme_priv *VAR_13 = &VAR_12->mlmepriv;
 struct wlan_bssid_ex *VAR_14 = &VAR_13->cur_network.network;
 struct ieee80211_ht_cap *VAR_15;
 unsigned char VAR_16 = VAR_12->registrypriv.rf_config;
 int VAR_17;
 u8 *VAR_18;
 u16 VAR_19, VAR_20 = 0, VAR_21 = 0;
 u32 VAR_22 = 0;
 u8 VAR_23 = 0, VAR_24 = 0;
 u16 VAR_25 = 0;

 VAR_17 = 0;
 if (!FUNC_0(VAR_13, VAR_6 | VAR_5))
  return -VAR_0;
 VAR_18 = FUNC_4(&VAR_14->IEs[12], VAR_7, &VAR_22,
    VAR_14->IELength - 12);
 if (VAR_18 && VAR_22 > 0) {
  VAR_21 = 1;
  VAR_15 = (struct ieee80211_ht_cap *)(VAR_18 + 2);
  FUNC_2(&VAR_25, VAR_15->supp_mcs_set, 2);
  VAR_23 = (FUNC_1(VAR_15->cap_info) &
       VAR_3) ? 1 : 0;
  VAR_24 = (FUNC_1(VAR_15->cap_info) &
       (VAR_1 |
       VAR_2)) ? 1 : 0;
 }
 while ((VAR_14->rates[VAR_17] != 0) &&
        (VAR_14->rates[VAR_17] != 0xFF)) {
  VAR_19 = VAR_14->rates[VAR_17] & 0x7F;
  if (VAR_19 > VAR_20)
   VAR_20 = VAR_19;
  VAR_10->bitrate.fixed = 0;
  VAR_10->bitrate.value = VAR_19 * 500000;
  VAR_17++;
 }
 if (VAR_21) {
  if (VAR_25 & 0x8000
      &&
      VAR_16 == VAR_4)
   VAR_20 = (VAR_23) ? ((VAR_24) ? 300 : 270) :
   ((VAR_24) ? 144 : 130);
  else
   VAR_20 = (VAR_23) ? ((VAR_24) ? 150 : 135) :
   ((VAR_24) ? 72 : 65);
  VAR_20 *= 2;
 }
 VAR_10->bitrate.value = VAR_20 * 500000;
 return 0;
}
