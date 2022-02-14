
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int bw; scalar_t__ nss; int mcs; scalar_t__ legacy; } ;
struct station_info {int filled; TYPE_2__ txrate; int rx_duration; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {int flags; int bw; scalar_t__ nss; int mcs; scalar_t__ legacy; } ;
struct ath10k_sta {TYPE_3__ txrate; int rx_duration; TYPE_1__* arvif; } ;
struct ath10k {int dummy; } ;
struct TYPE_4__ {struct ath10k* ar; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_2,
      struct ieee80211_vif *VAR_3,
      struct ieee80211_sta *VAR_4,
      struct station_info *VAR_5)
{
 struct ath10k_sta *VAR_6 = (struct ath10k_sta *)VAR_4->drv_priv;
 struct ath10k *VAR_7 = VAR_6->arvif->ar;

 if (!FUNC_1(VAR_7))
  return;

 VAR_5->rx_duration = VAR_6->rx_duration;
 VAR_5->filled |= FUNC_0(VAR_0);

 if (!VAR_6->txrate.legacy && !VAR_6->txrate.nss)
  return;

 if (VAR_6->txrate.legacy) {
  VAR_5->txrate.legacy = VAR_6->txrate.legacy;
 } else {
  VAR_5->txrate.mcs = VAR_6->txrate.mcs;
  VAR_5->txrate.nss = VAR_6->txrate.nss;
  VAR_5->txrate.bw = VAR_6->txrate.bw;
 }
 VAR_5->txrate.flags = VAR_6->txrate.flags;
 VAR_5->filled |= FUNC_0(VAR_1);
}
