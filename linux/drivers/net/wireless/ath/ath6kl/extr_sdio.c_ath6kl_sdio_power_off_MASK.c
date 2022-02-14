
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_sdio {int is_disabled; int func; } ;
struct ath6kl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct ath6kl_sdio* FUNC_1 (struct ath6kl*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ath6kl *VAR_1)
{
 struct ath6kl_sdio *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (VAR_2->is_disabled)
  return 0;

 FUNC_0(VAR_0, "sdio power off\n");


 FUNC_2(VAR_2->func);
 VAR_3 = FUNC_3(VAR_2->func);
 FUNC_4(VAR_2->func);

 if (VAR_3)
  return VAR_3;

 VAR_2->is_disabled = 1;

 return VAR_3;
}
