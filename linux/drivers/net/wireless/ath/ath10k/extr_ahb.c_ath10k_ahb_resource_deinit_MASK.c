
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ath10k_ahb {int * tcsr_mem; int * gcc_mem; int * mem; TYPE_1__* pdev; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct ath10k*) ;
 struct ath10k_ahb* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ath10k *VAR_0)
{
 struct ath10k_ahb *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2;

 VAR_2 = &VAR_1->pdev->dev;

 if (VAR_1->mem)
  FUNC_3(VAR_2, VAR_1->mem);

 if (VAR_1->gcc_mem)
  FUNC_4(VAR_1->gcc_mem);

 if (VAR_1->tcsr_mem)
  FUNC_4(VAR_1->tcsr_mem);

 VAR_1->mem = ((void*)0);
 VAR_1->gcc_mem = ((void*)0);
 VAR_1->tcsr_mem = ((void*)0);

 FUNC_0(VAR_0);
 FUNC_2(VAR_0);
}
