
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int private; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_txq {int dummy; } ;
struct TYPE_4__ {struct ath_txq* cabq; } ;
struct TYPE_3__ {struct ath_txq** txq_map; } ;
struct ath_softc {TYPE_2__ beacon; TYPE_1__ tx; } ;


 int VAR_0 ;
 struct ieee80211_hw* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*,struct ath_txq*,struct seq_file*) ;
 int FUNC_2 (struct seq_file*,char*,char const*) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct ieee80211_hw *VAR_3 = FUNC_0(VAR_1->private);
 struct ath_softc *VAR_4 = VAR_3->priv;
 struct ath_txq *VAR_5;
 int VAR_6;
 static const char *VAR_7[4] = {
  "VO", "VI", "BE", "BK"
 };

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = VAR_4->tx.txq_map[VAR_6];
  FUNC_2(VAR_1, "(%s):  ", VAR_7[VAR_6]);
  FUNC_1(VAR_4, VAR_5, VAR_1);
 }

 FUNC_3(VAR_1, "(CAB): ");
 FUNC_1(VAR_4, VAR_4->beacon.cabq, VAR_1);

 return 0;
}
