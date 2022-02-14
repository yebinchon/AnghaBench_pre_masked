
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int sc_ah; } ;
struct ath_common {int op_flags; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1,
    struct ieee80211_vif *VAR_2,
    const u8 *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_1->priv;
 struct ath_common *VAR_5 = FUNC_0(VAR_4->sc_ah);
 FUNC_1(VAR_0, &VAR_5->op_flags);
}
