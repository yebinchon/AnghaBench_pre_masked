
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int oper_irq_mode; int pdev; } ;
struct ath10k {int dummy; } ;



 int FUNC_0 (struct ath10k*) ;
 struct ath10k_pci* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_0)
{
 struct ath10k_pci *VAR_1 = FUNC_1(VAR_0);

 switch (VAR_1->oper_irq_mode) {
 case 128:
  FUNC_0(VAR_0);
  break;
 default:
  FUNC_2(VAR_1->pdev);
  break;
 }

 return 0;
}
