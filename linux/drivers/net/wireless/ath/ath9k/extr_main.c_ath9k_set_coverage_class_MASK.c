
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int mutex; struct ath_hw* sc_ah; } ;
struct TYPE_2__ {int enabled; } ;
struct ath_hw {TYPE_1__ dynack; scalar_t__ coverage_class; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int ) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_1,
         s16 VAR_2)
{
 struct ath_softc *VAR_3 = VAR_1->priv;
 struct ath_hw *VAR_4 = VAR_3->sc_ah;

 if (FUNC_0(VAR_0))
  return;

 FUNC_7(&VAR_3->mutex);

 if (VAR_2 >= 0) {
  VAR_4->coverage_class = VAR_2;
  if (VAR_4->dynack.enabled) {
   u32 VAR_5;

   VAR_4->dynack.enabled = 0;
   VAR_5 = FUNC_6(VAR_3);
   FUNC_3(VAR_4, VAR_5);
  }
  FUNC_5(VAR_3);
  FUNC_2(VAR_4);
  FUNC_4(VAR_3);
 } else if (!VAR_4->dynack.enabled) {
  FUNC_1(VAR_3);
 }

 FUNC_8(&VAR_3->mutex);
}
