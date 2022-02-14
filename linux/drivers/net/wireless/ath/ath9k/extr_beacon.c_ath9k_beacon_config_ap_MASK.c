
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
struct ath_beacon_config {int intval; int nexttbtt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,struct ath_beacon_config*,int ) ;

__attribute__((used)) static void FUNC_2(struct ath_softc *VAR_1,
       struct ath_beacon_config *VAR_2)
{
 struct ath_hw *VAR_3 = VAR_1->sc_ah;

 FUNC_1(VAR_3, VAR_2, VAR_0);
 FUNC_0(VAR_1, VAR_2->nexttbtt, VAR_2->intval);
}
