
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_sdio {int func; int irq_wq; int irq_handling; } ;
struct ath6kl {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ath6kl*) ;
 struct ath6kl_sdio* FUNC_2 (struct ath6kl*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ath6kl *VAR_0)
{
 struct ath6kl_sdio *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_4(VAR_1->func);

 if (FUNC_3(&VAR_1->irq_handling)) {
  FUNC_5(VAR_1->func);

  VAR_2 = FUNC_7(VAR_1->irq_wq,
            FUNC_1(VAR_0));
  if (VAR_2)
   return;

  FUNC_4(VAR_1->func);
 }

 VAR_2 = FUNC_6(VAR_1->func);
 if (VAR_2)
  FUNC_0("Failed to release sdio irq: %d\n", VAR_2);

 FUNC_5(VAR_1->func);
}
