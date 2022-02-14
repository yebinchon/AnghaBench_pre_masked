
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int oper_irq_mode; } ;
struct ath10k {int dummy; } ;




 int VAR_0 ;
 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_1)
{
 struct ath10k_pci *VAR_2 = FUNC_0(VAR_1);

 switch (VAR_2->oper_irq_mode) {
 case 129:
  return FUNC_1(VAR_1);
 case 128:
  return FUNC_2(VAR_1);
 default:
  return -VAR_0;
 }
}
