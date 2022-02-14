
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_snoc {TYPE_1__* ce_irqs; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int irq_line; } ;


 int VAR_0 ;
 struct ath10k_snoc* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (int ,struct ath10k*) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_1)
{
 struct ath10k_snoc *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(VAR_2->ce_irqs[VAR_3].irq_line, VAR_1);
}
