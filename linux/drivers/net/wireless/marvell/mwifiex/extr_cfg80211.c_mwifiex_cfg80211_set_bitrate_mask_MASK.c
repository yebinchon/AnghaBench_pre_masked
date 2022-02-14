
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int band; } ;
struct mwifiex_private {TYPE_1__ curr_bss_params; int media_connected; struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {scalar_t__ hw_dev_mcs_support; scalar_t__ fw_api_ver; } ;
struct cfg80211_bitrate_mask {TYPE_2__* control; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef int bitmap_rates ;
struct TYPE_4__ {int legacy; int* ht_mcs; int* vht_mcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*) ;
 struct mwifiex_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct mwifiex_private*,int ,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_5(struct wiphy *VAR_8,
    struct net_device *VAR_9,
    const u8 *VAR_10,
    const struct cfg80211_bitrate_mask *VAR_11)
{
 struct mwifiex_private *VAR_12 = FUNC_3(VAR_9);
 u16 VAR_13[VAR_5];
 enum nl80211_band VAR_14;
 struct mwifiex_adapter *VAR_15 = VAR_12->adapter;

 if (!VAR_12->media_connected) {
  FUNC_2(VAR_15, VAR_1,
       "Can not set Tx data rate in disconnected state\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_1(VAR_12->curr_bss_params.band);

 FUNC_0(VAR_13, 0, sizeof(VAR_13));


 if (VAR_14 == VAR_7)
  VAR_13[0] = VAR_11->control[VAR_14].legacy & 0x000f;


 if (VAR_14 == VAR_7)
  VAR_13[1] = (VAR_11->control[VAR_14].legacy & 0x0ff0) >> 4;
 else
  VAR_13[1] = VAR_11->control[VAR_14].legacy;


 VAR_13[2] = VAR_11->control[VAR_14].ht_mcs[0];
 if (VAR_15->hw_dev_mcs_support == VAR_2)
  VAR_13[2] |= VAR_11->control[VAR_14].ht_mcs[1] << 8;


 if (VAR_15->fw_api_ver == VAR_6) {
  VAR_13[10] = VAR_11->control[VAR_14].vht_mcs[0];
  if (VAR_15->hw_dev_mcs_support == VAR_2)
   VAR_13[11] = VAR_11->control[VAR_14].vht_mcs[1];
 }

 return FUNC_4(VAR_12, VAR_4,
    VAR_3, 0, VAR_13, 1);
}
