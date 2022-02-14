
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int hw; struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool FUNC_6(struct ath_softc *VAR_0)
{
 struct ath_hw *VAR_1 = VAR_0->sc_ah;
 bool VAR_2 = 1;

 FUNC_5(VAR_0->hw);
 FUNC_3(VAR_0);
 FUNC_1(VAR_1);

 if (FUNC_0(VAR_1)) {
  VAR_2 &= FUNC_4(VAR_0);
  VAR_2 &= FUNC_2(VAR_0);
 } else {
  VAR_2 &= FUNC_2(VAR_0);
  VAR_2 &= FUNC_4(VAR_0);
 }

 return VAR_2;
}
