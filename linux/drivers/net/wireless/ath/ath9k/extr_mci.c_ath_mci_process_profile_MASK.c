
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_mci_profile {int dummy; } ;
struct ath_btcoex {struct ath_mci_profile mci; } ;
struct ath_softc {struct ath_btcoex btcoex; int sc_ah; } ;
struct ath_mci_profile_info {scalar_t__ type; scalar_t__ start; } ;
struct ath_common {int dummy; } ;


 int FUNC_0 (struct ath_mci_profile*,struct ath_mci_profile_info*) ;
 int FUNC_1 (struct ath_mci_profile*,struct ath_mci_profile_info*) ;
 struct ath_common* FUNC_2 (int ) ;
 int FUNC_3 (struct ath_common*,struct ath_mci_profile*,struct ath_mci_profile_info*) ;
 int FUNC_4 (struct ath_common*,struct ath_mci_profile*,struct ath_mci_profile_info*) ;
 struct ath_mci_profile_info* FUNC_5 (struct ath_mci_profile*,struct ath_mci_profile_info*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (struct ath_mci_profile_info*,struct ath_mci_profile_info*,int) ;

__attribute__((used)) static u8 FUNC_8(struct ath_softc *VAR_0,
      struct ath_mci_profile_info *VAR_1)
{
 struct ath_common *VAR_2 = FUNC_2(VAR_0->sc_ah);
 struct ath_btcoex *VAR_3 = &VAR_0->btcoex;
 struct ath_mci_profile *VAR_4 = &VAR_3->mci;
 struct ath_mci_profile_info *VAR_5 = ((void*)0);

 VAR_5 = FUNC_5(VAR_4, VAR_1);
 if (VAR_5) {
  if (VAR_5->type != VAR_1->type) {
   FUNC_0(VAR_4, VAR_5);
   FUNC_1(VAR_4, VAR_1);
  }
  FUNC_7(VAR_5, VAR_1, 10);
 }

 if (VAR_1->start) {
  if (!VAR_5 && !FUNC_3(VAR_2, VAR_4, VAR_1))
   return 0;
 } else
  FUNC_4(VAR_2, VAR_4, VAR_5);

 FUNC_6(VAR_0);
 return 1;
}
