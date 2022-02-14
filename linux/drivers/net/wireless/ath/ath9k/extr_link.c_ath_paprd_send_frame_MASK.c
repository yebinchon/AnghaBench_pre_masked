
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int txctl ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {TYPE_4__* rates; } ;
struct ieee80211_tx_info {int paprd; TYPE_5__ control; int flags; int band; int txq; } ;
struct ieee80211_hw {int dummy; } ;
struct ath_tx_control {int paprd; TYPE_5__ control; int flags; int band; int txq; } ;
struct TYPE_8__ {TYPE_2__* chan; } ;
struct TYPE_6__ {int * txq_map; } ;
struct ath_softc {int paprd_complete; TYPE_3__ cur_chandef; TYPE_1__ tx; struct ath_hw* sc_ah; struct ieee80211_hw* hw; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
struct TYPE_9__ {int idx; int count; int flags; } ;
struct TYPE_7__ {int band; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,...) ;
 scalar_t__ FUNC_4 (struct ieee80211_hw*,struct sk_buff*,struct ieee80211_tx_info*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ieee80211_tx_info*,int ,int) ;
 int FUNC_8 (int ) ;
 unsigned long FUNC_9 (int *,int ) ;

__attribute__((used)) static bool FUNC_10(struct ath_softc *VAR_5, struct sk_buff *VAR_6, int VAR_7)
{
 struct ieee80211_hw *VAR_8 = VAR_5->hw;
 struct ieee80211_tx_info *VAR_9 = FUNC_1(VAR_6);
 struct ath_hw *VAR_10 = VAR_5->sc_ah;
 struct ath_common *VAR_11 = FUNC_2(VAR_10);
 struct ath_tx_control VAR_12;
 unsigned long VAR_13;

 FUNC_7(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.txq = VAR_5->tx.txq_map[VAR_2];

 FUNC_7(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->band = VAR_5->cur_chandef.chan->band;
 VAR_9->flags |= VAR_3;
 VAR_9->control.rates[0].idx = 0;
 VAR_9->control.rates[0].count = 1;
 VAR_9->control.rates[0].flags = VAR_4;
 VAR_9->control.rates[1].idx = -1;

 FUNC_6(&VAR_5->paprd_complete);
 VAR_12.paprd = FUNC_0(VAR_7);

 if (FUNC_4(VAR_8, VAR_6, &VAR_12) != 0) {
  FUNC_3(VAR_11, VAR_1, "PAPRD TX failed\n");
  FUNC_5(VAR_6);
  return 0;
 }

 VAR_13 = FUNC_9(&VAR_5->paprd_complete,
   FUNC_8(VAR_0));

 if (!VAR_13)
  FUNC_3(VAR_11, VAR_1,
   "Timeout waiting for paprd training on TX chain %d\n",
   VAR_7);

 return !!VAR_13;
}
