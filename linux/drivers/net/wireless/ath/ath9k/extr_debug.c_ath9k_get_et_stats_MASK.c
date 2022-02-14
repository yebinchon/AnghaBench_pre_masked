
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_5__ {TYPE_1__* txstats; } ;
struct TYPE_6__ {TYPE_2__ stats; } ;
struct ath_softc {TYPE_3__ debug; } ;
struct TYPE_4__ {scalar_t__ tx_bytes_all; scalar_t__ tx_pkts_all; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int * VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;

void FUNC_4(struct ieee80211_hw *VAR_34,
   struct ieee80211_vif *VAR_35,
   struct ethtool_stats *VAR_36, u64 *VAR_37)
{
 struct ath_softc *VAR_38 = VAR_34->priv;
 int VAR_39 = 0;

 VAR_37[VAR_39++] = (VAR_38->debug.stats.txstats[FUNC_2(VAR_4)].tx_pkts_all +
       VAR_38->debug.stats.txstats[FUNC_2(VAR_5)].tx_pkts_all +
       VAR_38->debug.stats.txstats[FUNC_2(VAR_6)].tx_pkts_all +
       VAR_38->debug.stats.txstats[FUNC_2(VAR_7)].tx_pkts_all);
 VAR_37[VAR_39++] = (VAR_38->debug.stats.txstats[FUNC_2(VAR_4)].tx_bytes_all +
       VAR_38->debug.stats.txstats[FUNC_2(VAR_5)].tx_bytes_all +
       VAR_38->debug.stats.txstats[FUNC_2(VAR_6)].tx_bytes_all +
       VAR_38->debug.stats.txstats[FUNC_2(VAR_7)].tx_bytes_all);
 FUNC_1(VAR_28);
 FUNC_1(VAR_27);

 FUNC_0(VAR_31);
 FUNC_0(VAR_30);
 FUNC_0(VAR_26);
 FUNC_0(VAR_13);
 FUNC_0(VAR_32);
 FUNC_0(VAR_8);
 FUNC_0(VAR_10);
 FUNC_0(VAR_9);
 FUNC_0(VAR_11);
 FUNC_0(VAR_12);
 FUNC_0(VAR_20);
 FUNC_0(VAR_33);
 FUNC_0(VAR_29);
 FUNC_0(VAR_19);
 FUNC_0(VAR_15);
 FUNC_0(VAR_18);

 FUNC_1(VAR_14);
 FUNC_1(VAR_17);
 FUNC_1(VAR_22);
 FUNC_1(VAR_21);
 FUNC_1(VAR_25);
 FUNC_1(VAR_24);
 FUNC_1(VAR_16);

 FUNC_1(VAR_23[VAR_2]);
 FUNC_1(VAR_23[VAR_1]);
 FUNC_1(VAR_23[VAR_0]);

 FUNC_3(VAR_39 != VAR_3);
}
