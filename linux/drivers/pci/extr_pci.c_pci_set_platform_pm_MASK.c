
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_platform_pm_ops {int need_resume; int set_wakeup; int choose_state; int get_state; int set_state; int is_manageable; } ;


 int VAR_0 ;
 struct pci_platform_pm_ops const* VAR_1 ;

int FUNC_0(const struct pci_platform_pm_ops *VAR_2)
{
 if (!VAR_2->is_manageable || !VAR_2->set_state || !VAR_2->get_state ||
     !VAR_2->choose_state || !VAR_2->set_wakeup || !VAR_2->need_resume)
  return -VAR_0;
 VAR_1 = VAR_2;
 return 0;
}
