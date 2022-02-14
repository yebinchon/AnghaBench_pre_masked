
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_mci_profile_info {int list; } ;
struct ath_mci_profile {int dummy; } ;
struct ath_common {int dummy; } ;


 int FUNC_0 (struct ath_mci_profile*,struct ath_mci_profile_info*) ;
 int FUNC_1 (struct ath_mci_profile_info*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ath_common *VAR_0,
    struct ath_mci_profile *VAR_1,
    struct ath_mci_profile_info *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_2->list);
 FUNC_1(VAR_2);
}
