
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {int flags; struct ath6kl* ar; } ;
struct ath6kl {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct ath6kl_vif *VAR_3)
{
 struct ath6kl *VAR_4 = VAR_3->ar;

 if (!FUNC_2(VAR_2, &VAR_4->flag)) {
  FUNC_1("wmi is not ready\n");
  return 0;
 }

 if (!FUNC_2(VAR_1, &VAR_3->flags)) {
  FUNC_0(VAR_0, "wlan disabled\n");
  return 0;
 }

 return 1;
}
