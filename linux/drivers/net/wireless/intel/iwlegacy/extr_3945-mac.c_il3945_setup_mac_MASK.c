
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct il_vif_priv {int dummy; } ;
struct il_priv {int mac80211_registered; struct ieee80211_hw* hw; TYPE_1__* bands; } ;
struct il3945_sta_priv {int dummy; } ;
struct ieee80211_hw {char* rate_control_algorithm; int sta_data_size; int vif_data_size; int queues; TYPE_2__* wiphy; } ;
struct TYPE_4__ {int interface_modes; int regulatory_flags; int max_scan_ie_len; TYPE_1__** bands; int max_scan_ssids; int flags; } ;
struct TYPE_3__ {scalar_t__ n_channels; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_15)
{
 int VAR_16;
 struct ieee80211_hw *VAR_17 = VAR_15->hw;

 VAR_17->rate_control_algorithm = "iwl-3945-rs";
 VAR_17->sta_data_size = sizeof(struct il3945_sta_priv);
 VAR_17->vif_data_size = sizeof(struct il_vif_priv);


 FUNC_2(VAR_17, VAR_11);
 FUNC_2(VAR_17, VAR_12);
 FUNC_2(VAR_17, VAR_9);
 FUNC_2(VAR_17, VAR_10);

 VAR_17->wiphy->interface_modes =
     FUNC_0(VAR_5) | FUNC_0(VAR_4);

 VAR_17->wiphy->flags |= VAR_13;
 VAR_17->wiphy->regulatory_flags |= VAR_7 |
           VAR_8;

 VAR_17->wiphy->flags &= ~VAR_14;

 VAR_17->wiphy->max_scan_ssids = VAR_6;

 VAR_17->wiphy->max_scan_ie_len = VAR_0 - 24 - 2;


 VAR_17->queues = 4;

 if (VAR_15->bands[VAR_1].n_channels)
  VAR_15->hw->wiphy->bands[VAR_1] =
      &VAR_15->bands[VAR_1];

 if (VAR_15->bands[VAR_2].n_channels)
  VAR_15->hw->wiphy->bands[VAR_2] =
      &VAR_15->bands[VAR_2];

 FUNC_4(VAR_15);

 FUNC_5(VAR_15->hw->wiphy, VAR_3);

 VAR_16 = FUNC_3(VAR_15->hw);
 if (VAR_16) {
  FUNC_1("Failed to register hw (error %d)\n", VAR_16);
  return VAR_16;
 }
 VAR_15->mac80211_registered = 1;

 return 0;
}
