
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_pci {TYPE_1__* pdev; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int ,struct ath10k*) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_0)
{
 struct ath10k_pci *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->pdev->irq, VAR_0);
}
