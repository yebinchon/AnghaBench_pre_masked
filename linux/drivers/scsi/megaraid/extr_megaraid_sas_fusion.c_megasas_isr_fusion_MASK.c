
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct megasas_irq_context {int MSIxIndex; scalar_t__ irq_poll_scheduled; struct megasas_instance* instance; } ;
struct megasas_instance {TYPE_1__* instancet; int reset_flags; int msix_vectors; scalar_t__ mask_interrupts; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* clear_intr ) (struct megasas_instance*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct megasas_instance*,int ,struct megasas_irq_context*) ;
 int FUNC_1 (struct megasas_instance*) ;
 int FUNC_2 (struct megasas_instance*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct megasas_irq_context *VAR_5 = VAR_4;
 struct megasas_instance *VAR_6 = VAR_5->instance;
 u32 VAR_7;

 if (VAR_6->mask_interrupts)
  return VAR_1;






 if (!VAR_6->msix_vectors) {
  VAR_7 = VAR_6->instancet->clear_intr(VAR_6);
  if (!VAR_7)
   return VAR_1;
 }


 if (FUNC_3(VAR_2, &VAR_6->reset_flags)) {
  VAR_6->instancet->clear_intr(VAR_6);
  return VAR_0;
 }

 return FUNC_0(VAR_6, VAR_5->MSIxIndex, VAR_5)
   ? VAR_0 : VAR_1;
}
