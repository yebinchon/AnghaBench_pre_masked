
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int txchainmask; struct ath9k_hw_cal_data* caldata; } ;
struct ath_common {int dummy; } ;
struct ath9k_hw_cal_data {int cal_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath_hw*,int) ;
 int FUNC_2 (struct ath_hw*,struct ath9k_hw_cal_data*,int) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct ath_softc *VAR_3)
{
 struct ath_hw *VAR_4 = VAR_3->sc_ah;
 struct ath_common *VAR_5 = FUNC_3(VAR_4);
 struct ath9k_hw_cal_data *VAR_6 = VAR_4->caldata;
 int VAR_7;

 if (!VAR_6 || !FUNC_5(VAR_2, &VAR_6->cal_flags)) {
  FUNC_4(VAR_5, VAR_1, "Failed to activate PAPRD\n");
  return;
 }

 FUNC_1(VAR_4, 0);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (!(VAR_4->txchainmask & FUNC_0(VAR_7)))
   continue;

  FUNC_2(VAR_4, VAR_6, VAR_7);
 }

 FUNC_4(VAR_5, VAR_1, "Activating PAPRD\n");
 FUNC_1(VAR_4, 1);
}
