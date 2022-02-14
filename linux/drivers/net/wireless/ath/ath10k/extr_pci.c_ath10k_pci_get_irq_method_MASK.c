
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {scalar_t__ oper_irq_mode; } ;
struct ath10k {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ath10k_pci* FUNC_0 (struct ath10k*) ;

__attribute__((used)) static inline const char *FUNC_1(struct ath10k *VAR_1)
{
 struct ath10k_pci *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->oper_irq_mode == VAR_0)
  return "msi";

 return "legacy";
}
