
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl {int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath6kl*) ;
 scalar_t__ FUNC_1 (struct ath6kl*) ;
 int FUNC_2 (struct ath6kl*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct ath6kl *VAR_2)
{
 FUNC_4(VAR_1, &VAR_2->flag);

 FUNC_2(VAR_2);

 if (FUNC_1(VAR_2)) {
  FUNC_3(VAR_0, "Failed to stop during fw error recovery\n");
  return;
 }

 if (FUNC_0(VAR_2)) {
  FUNC_3(VAR_0, "Failed to restart during fw error recovery\n");
  return;
 }
}
