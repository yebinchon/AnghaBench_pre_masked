
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int tx99_state; struct ath_hw* sc_ah; int * tx99_skb; int hw; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ath_softc *VAR_1)
{
 struct ath_hw *VAR_2 = VAR_1->sc_ah;
 struct ath_common *VAR_3 = FUNC_0(VAR_2);

 FUNC_5(VAR_1);
 FUNC_6(VAR_1);

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 FUNC_7(VAR_1->hw);

 FUNC_8(VAR_1->tx99_skb);
 VAR_1->tx99_skb = ((void*)0);
 VAR_1->tx99_state = 0;

 FUNC_3(VAR_1->sc_ah);
 FUNC_4(VAR_3, VAR_0, "TX99 stopped\n");
}
