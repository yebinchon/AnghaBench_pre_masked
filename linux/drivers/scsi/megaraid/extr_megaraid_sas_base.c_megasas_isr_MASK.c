
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_irq_context {struct megasas_instance* instance; } ;
struct megasas_instance {int hba_lock; int fw_reset_no_pci_access; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct megasas_instance*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct megasas_irq_context *VAR_4 = VAR_3;
 struct megasas_instance *VAR_5 = VAR_4->instance;
 unsigned long VAR_6;
 irqreturn_t VAR_7;

 if (FUNC_0(&VAR_5->fw_reset_no_pci_access))
  return VAR_1;

 FUNC_2(&VAR_5->hba_lock, VAR_6);
 VAR_7 = FUNC_1(VAR_5, VAR_0);
 FUNC_3(&VAR_5->hba_lock, VAR_6);

 return VAR_7;
}
