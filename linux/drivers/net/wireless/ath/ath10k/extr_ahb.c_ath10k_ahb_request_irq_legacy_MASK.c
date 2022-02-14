
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int oper_irq_mode; } ;
struct ath10k_ahb {int irq; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath10k_ahb* FUNC_0 (struct ath10k*) ;
 struct ath10k_pci* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int ,int) ;
 int FUNC_3 (int ,int ,int ,char*,struct ath10k*) ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_3)
{
 struct ath10k_pci *VAR_4 = FUNC_1(VAR_3);
 struct ath10k_ahb *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5->irq,
     VAR_2,
     VAR_1, "ath10k_ahb", VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_3, "failed to request legacy irq %d: %d\n",
       VAR_5->irq, VAR_6);
  return VAR_6;
 }
 VAR_4->oper_irq_mode = VAR_0;

 return 0;
}
