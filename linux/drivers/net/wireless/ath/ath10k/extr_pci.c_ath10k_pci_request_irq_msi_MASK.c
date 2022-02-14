
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_pci {TYPE_1__* pdev; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,char*,int ,int) ;
 int FUNC_2 (int ,int ,int ,char*,struct ath10k*) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_2)
{
 struct ath10k_pci *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->pdev->irq,
     VAR_1,
     VAR_0, "ath10k_pci", VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_2, "failed to request MSI irq %d: %d\n",
       VAR_3->pdev->irq, VAR_4);
  return VAR_4;
 }

 return 0;
}
