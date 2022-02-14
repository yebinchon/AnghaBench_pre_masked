
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gasket_interrupt_data {int num_interrupts; TYPE_1__* msix_entries; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int vector; int entry; } ;


 int VAR_0 ;
 int FUNC_0 (struct gasket_interrupt_data*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct gasket_interrupt_data *VAR_3 = VAR_2;
 int VAR_4 = -1;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3->num_interrupts; VAR_5++) {
  if (VAR_3->msix_entries[VAR_5].vector == VAR_1) {
   VAR_4 = VAR_3->msix_entries[VAR_5].entry;
   break;
  }
 }
 if (VAR_4 == -1) {
  FUNC_1("Received unknown irq %d\n", VAR_1);
  return VAR_0;
 }
 FUNC_0(VAR_3, VAR_4);
 return VAR_0;
}
