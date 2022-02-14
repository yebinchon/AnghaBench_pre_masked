
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {int name; } ;
struct mwifiex_user_scan_cfg {int scan_chan_gap; TYPE_3__* chan_list; int ssid_list; int num_ssids; int random_mac; } ;
struct TYPE_7__ {int wiphy; int current_bss; } ;
struct mwifiex_private {int scan_aborting; int scan_block; TYPE_4__* vs_ie; struct cfg80211_scan_request* scan_request; TYPE_5__* adapter; TYPE_2__ wdev; } ;
struct ieee_types_header {scalar_t__ len; } ;
struct ieee80211_channel {int flags; int band; int hw_value; } ;
struct cfg80211_scan_request {int flags; int ie_len; scalar_t__ ie; int n_ssids; struct ieee80211_channel** channels; int n_channels; int ssids; int mac_addr; int mac_addr_mask; TYPE_1__* wdev; } ;
struct TYPE_10__ {int scan_chan_gap_time; scalar_t__ scan_chan_gap_enabled; } ;
struct TYPE_9__ {scalar_t__ mask; int ie; } ;
struct TYPE_8__ {scalar_t__ scan_time; int scan_type; int radio_type; int chan_number; } ;
struct TYPE_6__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct mwifiex_user_scan_cfg*) ;
 struct mwifiex_user_scan_cfg* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct ieee_types_header*,scalar_t__) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_5__*,int ,char*,...) ;
 scalar_t__ FUNC_9 (struct mwifiex_private*) ;
 struct mwifiex_private* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct mwifiex_private*,struct mwifiex_user_scan_cfg*) ;
 int FUNC_12 (struct mwifiex_private*) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_13(struct wiphy *VAR_17,
        struct cfg80211_scan_request *VAR_18)
{
 struct net_device *VAR_19 = VAR_18->wdev->netdev;
 struct mwifiex_private *VAR_20 = FUNC_10(VAR_19);
 int VAR_21, VAR_22, VAR_23;
 struct ieee80211_channel *VAR_24;
 struct ieee_types_header *VAR_25;
 struct mwifiex_user_scan_cfg *VAR_26;
 u8 VAR_27[VAR_4];

 FUNC_8(VAR_20->adapter, VAR_0,
      "info: received scan request on %s\n", VAR_19->name);




 if (VAR_20->scan_request || VAR_20->scan_aborting) {
  FUNC_8(VAR_20->adapter, VAR_15,
       "cmd: Scan already in process..\n");
  return -VAR_1;
 }

 if (!VAR_20->wdev.current_bss && VAR_20->scan_block)
  VAR_20->scan_block = 0;

 if (!FUNC_12(VAR_20))
  FUNC_0(VAR_20->wdev.wiphy, 0);

 VAR_26 = FUNC_4(sizeof(*VAR_26), VAR_5);
 if (!VAR_26)
  return -VAR_2;

 VAR_20->scan_request = VAR_18;

 if (VAR_18->flags & VAR_14) {
  FUNC_2(VAR_27, VAR_18->mac_addr,
         VAR_18->mac_addr_mask);
  FUNC_1(VAR_18->mac_addr, VAR_27);
  FUNC_1(VAR_26->random_mac, VAR_27);
 }

 VAR_26->num_ssids = VAR_18->n_ssids;
 VAR_26->ssid_list = VAR_18->ssids;

 if (VAR_18->ie && VAR_18->ie_len) {
  VAR_22 = 0;
  for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
   if (VAR_20->vs_ie[VAR_21].mask != VAR_12)
    continue;
   VAR_20->vs_ie[VAR_21].mask = VAR_13;
   VAR_25 = (struct ieee_types_header *)(VAR_18->ie + VAR_22);
   FUNC_5(&VAR_20->vs_ie[VAR_21].ie, VAR_25, sizeof(*VAR_25) + VAR_25->len);
   VAR_22 += sizeof(*VAR_25) + VAR_25->len;

   if (VAR_22 >= VAR_18->ie_len)
    break;
  }
 }

 for (VAR_21 = 0; VAR_21 < FUNC_7(VAR_16, VAR_18->n_channels,
         VAR_11); VAR_21++) {
  VAR_24 = VAR_18->channels[VAR_21];
  VAR_26->chan_list[VAR_21].chan_number = VAR_24->hw_value;
  VAR_26->chan_list[VAR_21].radio_type = VAR_24->band;

  if ((VAR_24->flags & VAR_6) || !VAR_18->n_ssids)
   VAR_26->chan_list[VAR_21].scan_type =
      VAR_10;
  else
   VAR_26->chan_list[VAR_21].scan_type =
      VAR_9;

  VAR_26->chan_list[VAR_21].scan_time = 0;
 }

 if (VAR_20->adapter->scan_chan_gap_enabled &&
     FUNC_9(VAR_20))
  VAR_26->scan_chan_gap =
           VAR_20->adapter->scan_chan_gap_time;

 VAR_23 = FUNC_11(VAR_20, VAR_26);
 FUNC_3(VAR_26);
 if (VAR_23) {
  FUNC_8(VAR_20->adapter, VAR_3,
       "scan failed: %d\n", VAR_23);
  VAR_20->scan_aborting = 0;
  VAR_20->scan_request = ((void*)0);
  return VAR_23;
 }

 if (VAR_18->ie && VAR_18->ie_len) {
  for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++) {
   if (VAR_20->vs_ie[VAR_21].mask == VAR_13) {
    VAR_20->vs_ie[VAR_21].mask = VAR_12;
    FUNC_6(&VAR_20->vs_ie[VAR_21].ie, 0,
           VAR_7);
   }
  }
 }
 return 0;
}
