
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct rate_info {int flags; int nss; int mcs; int bw; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct TYPE_12__ {TYPE_3__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_4__ def; } ;
struct TYPE_13__ {int legacy; int mcs; int nss; int bw; TYPE_7__* rates; int flags; } ;
struct TYPE_14__ {TYPE_5__ status; int flags; } ;
struct ath10k_sta {TYPE_6__ tx_info; TYPE_5__ txrate; int last_tx_bitrate; TYPE_2__* arvif; } ;
struct ath10k_per_peer_tx_stats {scalar_t__ succ_pkts; int ratecode; int flags; } ;
struct ath10k {int hw; int data_lock; } ;
typedef scalar_t__ s8 ;
struct TYPE_15__ {int idx; int flags; int count; } ;
struct TYPE_11__ {int band; } ;
struct TYPE_10__ {TYPE_1__* vif; } ;
struct TYPE_9__ {int chanctx_conf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
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




 int FUNC_7 (struct ath10k*,struct ath10k_sta*,struct ath10k_per_peer_tx_stats*,scalar_t__) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct ath10k*) ;
 scalar_t__ FUNC_10 (struct ath10k*,int) ;
 int FUNC_11 (struct ath10k*,char*,int,...) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_7__*,int,int) ;
 int FUNC_14 (int ,struct ieee80211_sta*,TYPE_6__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_5__*,int ,int) ;
 struct ieee80211_chanctx_conf* FUNC_17 (int ) ;

__attribute__((used)) static void
FUNC_18(struct ath10k *VAR_11,
    struct ieee80211_sta *VAR_12,
    struct ath10k_per_peer_tx_stats *VAR_13)
{
 struct ath10k_sta *VAR_14 = (struct ath10k_sta *)VAR_12->drv_priv;
 struct ieee80211_chanctx_conf *VAR_15 = ((void*)0);
 u8 VAR_16 = 0, VAR_17;
 s8 VAR_18 = 0;
 bool VAR_19;
 struct rate_info VAR_20;

 FUNC_15(&VAR_11->data_lock);

 VAR_20.flags = FUNC_6(VAR_13->ratecode);
 VAR_20.bw = FUNC_1(VAR_13->flags);
 VAR_20.nss = FUNC_5(VAR_13->ratecode);
 VAR_20.mcs = FUNC_4(VAR_13->ratecode);
 VAR_17 = FUNC_2(VAR_13->flags);
 VAR_19 = FUNC_0(VAR_13->flags);




 if (VAR_19)
  return;

 if (VAR_20.flags == 128 && VAR_20.mcs > 9) {
  FUNC_11(VAR_11, "Invalid VHT mcs %hhd peer stats", VAR_20.mcs);
  return;
 }

 if (VAR_20.flags == 130 &&
     (VAR_20.mcs > 7 || VAR_20.nss < 1)) {
  FUNC_11(VAR_11, "Invalid HT mcs %hhd nss %hhd peer stats",
       VAR_20.mcs, VAR_20.nss);
  return;
 }

 FUNC_16(&VAR_14->txrate, 0, sizeof(VAR_14->txrate));
 FUNC_16(&VAR_14->tx_info.status, 0, sizeof(VAR_14->tx_info.status));
 if (VAR_20.flags == 131 ||
     VAR_20.flags == 129) {
  VAR_16 = FUNC_3(VAR_13->ratecode);

  if (VAR_16 == 6 && VAR_20.flags == 131)
   VAR_16 = 5;
  VAR_18 = FUNC_10(VAR_11, VAR_16);
  if (VAR_18 < 0)
   return;
  VAR_14->txrate.legacy = VAR_16;
 } else if (VAR_20.flags == 130) {
  VAR_14->txrate.flags = VAR_8;
  VAR_14->txrate.mcs = VAR_20.mcs + 8 * (VAR_20.nss - 1);
 } else {
  VAR_14->txrate.flags = VAR_10;
  VAR_14->txrate.mcs = VAR_20.mcs;
 }

 switch (VAR_20.flags) {
 case 129:
  if (VAR_14->arvif && VAR_14->arvif->vif)
   VAR_15 = FUNC_17(VAR_14->arvif->vif->chanctx_conf);
  if (VAR_15 && VAR_15->def.chan->band == VAR_7)
   VAR_14->tx_info.status.rates[0].idx = VAR_18 - 4;
  break;
 case 131:
  VAR_14->tx_info.status.rates[0].idx = VAR_18;
  if (VAR_17)
   VAR_14->tx_info.status.rates[0].flags |=
    (VAR_4 |
     VAR_3);
  break;
 case 130:
  VAR_14->tx_info.status.rates[0].idx =
    VAR_20.mcs + ((VAR_20.nss - 1) * 8);
  if (VAR_17)
   VAR_14->tx_info.status.rates[0].flags |=
     VAR_3;
  VAR_14->tx_info.status.rates[0].flags |= VAR_2;
  break;
 case 128:
  FUNC_13(&VAR_14->tx_info.status.rates[0],
           VAR_20.mcs, VAR_20.nss);
  if (VAR_17)
   VAR_14->tx_info.status.rates[0].flags |=
      VAR_3;
  VAR_14->tx_info.status.rates[0].flags |= VAR_5;
  break;
 }

 VAR_14->txrate.nss = VAR_20.nss;
 VAR_14->txrate.bw = FUNC_8(VAR_20.bw);
 VAR_14->last_tx_bitrate = FUNC_12(&VAR_14->txrate);
 if (VAR_17)
  VAR_14->txrate.flags |= VAR_9;

 switch (VAR_14->txrate.bw) {
 case 133:
  VAR_14->tx_info.status.rates[0].flags |=
    VAR_0;
  break;
 case 132:
  VAR_14->tx_info.status.rates[0].flags |=
    VAR_1;
  break;
 }

 if (VAR_13->succ_pkts) {
  VAR_14->tx_info.flags = VAR_6;
  VAR_14->tx_info.status.rates[0].count = 1;
  FUNC_14(VAR_11->hw, VAR_12, &VAR_14->tx_info);
 }

 if (FUNC_9(VAR_11))
  FUNC_7(VAR_11, VAR_14, VAR_13,
          VAR_18);
}
