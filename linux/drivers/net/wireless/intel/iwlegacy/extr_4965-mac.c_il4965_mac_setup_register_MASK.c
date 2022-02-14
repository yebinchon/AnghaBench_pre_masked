
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct il_vif_priv {int dummy; } ;
struct il_station_priv {int dummy; } ;
struct il_priv {int mac80211_registered; struct ieee80211_hw* hw; TYPE_2__* bands; TYPE_1__* cfg; } ;
struct ieee80211_hw {char* rate_control_algorithm; int sta_data_size; int vif_data_size; int queues; TYPE_3__* wiphy; int max_listen_interval; } ;
struct TYPE_6__ {int features; int interface_modes; int regulatory_flags; int max_scan_ie_len; TYPE_2__** bands; int max_scan_ssids; int flags; } ;
struct TYPE_5__ {scalar_t__ n_channels; } ;
struct TYPE_4__ {int sku; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_6(struct il_priv *VAR_21, u32 VAR_22)
{
 int VAR_23;
 struct ieee80211_hw *VAR_24 = VAR_21->hw;

 VAR_24->rate_control_algorithm = "iwl-4965-rs";


 FUNC_2(VAR_24, VAR_17);
 FUNC_2(VAR_24, VAR_18);
 FUNC_2(VAR_24, VAR_14);
 FUNC_2(VAR_24, VAR_16);
 FUNC_2(VAR_24, VAR_3);
 FUNC_2(VAR_24, VAR_15);
 FUNC_2(VAR_24, VAR_0);
 if (VAR_21->cfg->sku & VAR_2)
  VAR_24->wiphy->features |= VAR_7 |
           VAR_8;

 VAR_24->sta_data_size = sizeof(struct il_station_priv);
 VAR_24->vif_data_size = sizeof(struct il_vif_priv);

 VAR_24->wiphy->interface_modes =
     FUNC_0(VAR_10) | FUNC_0(VAR_9);

 VAR_24->wiphy->flags |= VAR_19;
 VAR_24->wiphy->regulatory_flags |= VAR_12 |
           VAR_13;





 VAR_24->wiphy->flags &= ~VAR_20;

 VAR_24->wiphy->max_scan_ssids = VAR_11;

 VAR_24->wiphy->max_scan_ie_len = VAR_22 - 24 - 2;


 VAR_24->queues = 4;

 VAR_24->max_listen_interval = VAR_1;

 if (VAR_21->bands[VAR_4].n_channels)
  VAR_21->hw->wiphy->bands[VAR_4] =
      &VAR_21->bands[VAR_4];
 if (VAR_21->bands[VAR_5].n_channels)
  VAR_21->hw->wiphy->bands[VAR_5] =
      &VAR_21->bands[VAR_5];

 FUNC_4(VAR_21);

 FUNC_5(VAR_21->hw->wiphy, VAR_6);

 VAR_23 = FUNC_3(VAR_21->hw);
 if (VAR_23) {
  FUNC_1("Failed to register hw (error %d)\n", VAR_23);
  return VAR_23;
 }
 VAR_21->mac80211_registered = 1;

 return 0;
}
