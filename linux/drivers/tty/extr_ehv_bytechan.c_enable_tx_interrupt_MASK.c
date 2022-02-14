
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehv_bc_data {int tx_irq_enabled; int tx_irq; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ehv_bc_data *VAR_0)
{
 if (!VAR_0->tx_irq_enabled) {
  FUNC_0(VAR_0->tx_irq);
  VAR_0->tx_irq_enabled = 1;
 }
}
