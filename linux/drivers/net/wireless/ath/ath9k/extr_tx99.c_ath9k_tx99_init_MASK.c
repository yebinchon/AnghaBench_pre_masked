
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int txctl ;
struct ieee80211_hw {int dummy; } ;
struct ath_tx_control {int txq; } ;
struct TYPE_2__ {int * txq_map; } ;
struct ath_softc {int tx99_state; int tx99_power; int tx99_skb; TYPE_1__ tx; struct ath_hw* sc_ah; struct ieee80211_hw* hw; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int op_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_softc*) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*,int ,struct ath_tx_control*) ;
 int FUNC_6 (struct ath_common*,int ,char*,...) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (struct ath_common*,char*) ;
 int FUNC_9 (struct ath_softc*,int *) ;
 int FUNC_10 (struct ath_softc*) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int FUNC_12 (struct ath_tx_control*,int ,int) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct ath_softc *VAR_6)
{
 struct ieee80211_hw *VAR_7 = VAR_6->hw;
 struct ath_hw *VAR_8 = VAR_6->sc_ah;
 struct ath_common *VAR_9 = FUNC_1(VAR_8);
 struct ath_tx_control VAR_10;
 int VAR_11;

 if (FUNC_13(VAR_0, &VAR_9->op_flags)) {
  FUNC_8(VAR_9,
   "driver is in invalid state unable to use TX99");
  return -VAR_1;
 }

 VAR_6->tx99_skb = FUNC_0(VAR_6);
 if (!VAR_6->tx99_skb)
  return -VAR_2;

 FUNC_12(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.txq = VAR_6->tx.txq_map[VAR_3];

 FUNC_9(VAR_6, ((void*)0));

 FUNC_4(VAR_6);

 FUNC_2(VAR_8);
 FUNC_7(VAR_6);
 FUNC_10(VAR_6);

 VAR_6->tx99_state = 1;

 FUNC_11(VAR_7);

 if (VAR_6->tx99_power == VAR_4 + 1)
  VAR_6->tx99_power = VAR_4;

 FUNC_3(VAR_8, VAR_6->tx99_power);
 VAR_11 = FUNC_5(VAR_6, VAR_6->tx99_skb, &VAR_10);
 if (VAR_11) {
  FUNC_6(VAR_9, VAR_5, "Failed to xmit TX99 skb\n");
  return VAR_11;
 }

 FUNC_6(VAR_9, VAR_5, "TX99 xmit started using %d ( %ddBm)\n",
  VAR_6->tx99_power,
  VAR_6->tx99_power / 2);



 return 0;
}
