
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_snoc {TYPE_1__* ce_irqs; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int irq_line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,int) ;
 struct ath10k_snoc* FUNC_1 (struct ath10k*) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_2, int VAR_3)
{
 struct ath10k_snoc *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->ce_irqs[VAR_5].irq_line == VAR_3)
   return VAR_5;
 }
 FUNC_0(VAR_2, "No matching CE id for irq %d\n", VAR_3);

 return -VAR_1;
}
