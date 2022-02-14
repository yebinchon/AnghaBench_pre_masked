
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int dump_work; } ;
struct ath10k {int workqueue; } ;


 struct ath10k_pci* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_0)
{
 struct ath10k_pci *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0->workqueue, &VAR_1->dump_work);
}
