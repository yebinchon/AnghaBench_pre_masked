
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_frame_hdr {int dummy; } ;
struct ieee80211_hw {int queues; int max_listen_interval; int vif_data_size; int sta_data_size; int extra_tx_headroom; TYPE_2__* wiphy; } ;
struct htc_frame_hdr {int dummy; } ;
struct base_eep_header {int txMask; int rxMask; } ;
struct TYPE_3__ {int hw_caps; } ;
struct ath_hw {TYPE_1__ caps; } ;
struct ath_common {int macaddr; int * sbands; } ;
struct ath9k_htc_vif {int dummy; } ;
struct ath9k_htc_sta {int dummy; } ;
struct ath9k_htc_priv {struct ath_hw* ah; } ;
struct TYPE_4__ {int interface_modes; int n_iface_combinations; int flags; int available_antennas_tx; int available_antennas_rx; int ** bands; int * iface_combinations; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
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
 int FUNC_1 (struct ieee80211_hw*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (struct ath_hw*) ;
 struct base_eep_header* FUNC_3 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 scalar_t__ VAR_28 ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int VAR_29 ;
 int FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_7(struct ath9k_htc_priv *VAR_30,
          struct ieee80211_hw *VAR_31)
{
 struct ath_hw *VAR_32 = VAR_30->ah;
 struct ath_common *VAR_33 = FUNC_4(VAR_30->ah);
 struct base_eep_header *VAR_34;

 FUNC_5(VAR_31, VAR_5);
 FUNC_5(VAR_31, VAR_6);
 FUNC_5(VAR_31, VAR_18);
 FUNC_5(VAR_31, VAR_17);
 FUNC_5(VAR_31, VAR_19);
 FUNC_5(VAR_31, VAR_4);
 FUNC_5(VAR_31, VAR_21);
 FUNC_5(VAR_31, VAR_20);
 FUNC_5(VAR_31, VAR_0);
 FUNC_5(VAR_31, VAR_3);

 if (VAR_28)
  FUNC_5(VAR_31, VAR_22);

 VAR_31->wiphy->interface_modes =
  FUNC_0(VAR_16) |
  FUNC_0(VAR_10) |
  FUNC_0(VAR_11) |
  FUNC_0(VAR_15) |
  FUNC_0(VAR_14) |
  FUNC_0(VAR_12) |
  FUNC_0(VAR_13);

 VAR_31->wiphy->iface_combinations = &VAR_29;
 VAR_31->wiphy->n_iface_combinations = 1;

 VAR_31->wiphy->flags &= ~VAR_26;

 VAR_31->wiphy->flags |= VAR_25 |
       VAR_24 |
       VAR_23;

 VAR_31->wiphy->flags |= VAR_27;

 VAR_31->queues = 4;
 VAR_31->max_listen_interval = 1;

 VAR_31->vif_data_size = sizeof(struct ath9k_htc_vif);
 VAR_31->sta_data_size = sizeof(struct ath9k_htc_sta);


 VAR_31->extra_tx_headroom = sizeof(struct tx_frame_hdr) +
  sizeof(struct htc_frame_hdr) + 4;

 if (VAR_30->ah->caps.hw_caps & VAR_1)
  VAR_31->wiphy->bands[VAR_7] =
   &VAR_33->sbands[VAR_7];
 if (VAR_30->ah->caps.hw_caps & VAR_2)
  VAR_31->wiphy->bands[VAR_8] =
   &VAR_33->sbands[VAR_8];

 FUNC_2(VAR_32);

 VAR_34 = FUNC_3(VAR_30);
 if (VAR_34) {
  VAR_31->wiphy->available_antennas_rx = VAR_34->rxMask;
  VAR_31->wiphy->available_antennas_tx = VAR_34->txMask;
 }

 FUNC_1(VAR_31, VAR_33->macaddr);

 FUNC_6(VAR_31->wiphy, VAR_9);
}
