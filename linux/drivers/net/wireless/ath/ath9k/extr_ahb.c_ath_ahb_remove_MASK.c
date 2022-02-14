
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int hw; int irq; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (int ,struct ath_softc*) ;
 int FUNC_2 (int ) ;
 struct ieee80211_hw* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ieee80211_hw *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1) {
  struct ath_softc *VAR_2 = VAR_1->priv;

  FUNC_0(VAR_2);
  FUNC_1(VAR_2->irq, VAR_2);
  FUNC_2(VAR_2->hw);
 }

 return 0;
}
