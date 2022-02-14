
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl {int htc_target; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath6kl*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ath6kl*) ;
 int FUNC_3 (struct ath6kl*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct ath6kl *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, "hw stop\n");

 FUNC_4(VAR_1->htc_target);

 FUNC_3(VAR_1);

 FUNC_0(VAR_1);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  FUNC_5("failed to power off hif: %d\n", VAR_2);

 return 0;
}
