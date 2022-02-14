
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_sdio {int irq_handling; } ;
struct ath6kl {int dummy; } ;


 struct ath6kl_sdio* FUNC_0 (struct ath6kl*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct ath6kl *VAR_0)
{
 struct ath6kl_sdio *VAR_1 = FUNC_0(VAR_0);

 return !FUNC_1(&VAR_1->irq_handling);
}
