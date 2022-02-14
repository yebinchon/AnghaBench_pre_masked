
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int mutex; int sc_pcu_lock; int wow_intr_before_sleep; struct ath_hw* sc_ah; } ;
struct ath_hw {int imask; } ;
struct ath_common {int op_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (struct ath_common*,int ,char*,int ) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct ieee80211_hw *VAR_2)
{
 struct ath_softc *VAR_3 = VAR_2->priv;
 struct ath_hw *VAR_4 = VAR_3->sc_ah;
 struct ath_common *VAR_5 = FUNC_0(VAR_4);
 u8 VAR_6;

 FUNC_11(&VAR_3->mutex);

 FUNC_6(VAR_3);

 FUNC_13(&VAR_3->sc_pcu_lock);

 FUNC_1(VAR_4);
 VAR_4->imask = VAR_3->wow_intr_before_sleep;
 FUNC_3(VAR_4);
 FUNC_2(VAR_4);

 FUNC_14(&VAR_3->sc_pcu_lock);

 VAR_6 = FUNC_4(VAR_4);
 FUNC_8(VAR_5, VAR_1, "Resume with WoW status: 0x%x\n", VAR_6);

 FUNC_9(VAR_3);
 FUNC_7(VAR_3);

 FUNC_10(VAR_0, &VAR_5->op_flags);

 FUNC_5(VAR_3);
 FUNC_12(&VAR_3->mutex);

 return 0;
}
