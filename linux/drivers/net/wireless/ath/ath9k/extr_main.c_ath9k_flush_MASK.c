
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int mutex; int sc_ah; } ;
struct ath_common {int op_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int,int,int) ;
 struct ath_common* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2,
   u32 VAR_3, bool VAR_4)
{
 struct ath_softc *VAR_5 = VAR_1->priv;
 struct ath_common *VAR_6 = FUNC_1(VAR_5->sc_ah);

 if (FUNC_2()) {
  if (!FUNC_5(VAR_0, &VAR_6->op_flags))
   goto flush;
  FUNC_0(VAR_1, VAR_3, VAR_4, 1, 1);
  return;
 }
flush:
 FUNC_3(&VAR_5->mutex);
 FUNC_0(VAR_1, VAR_3, VAR_4, 1, 0);
 FUNC_4(&VAR_5->mutex);
}
