
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_sdio {int func; } ;
struct ath6kl {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 struct ath6kl_sdio* FUNC_1 (struct ath6kl*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ath6kl *VAR_1)
{
 struct ath6kl_sdio *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_2(VAR_2->func);


 VAR_3 = FUNC_3(VAR_2->func, VAR_0);
 if (VAR_3)
  FUNC_0("Failed to claim sdio irq: %d\n", VAR_3);

 FUNC_4(VAR_2->func);
}
