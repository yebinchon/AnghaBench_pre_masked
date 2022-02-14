
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int (* global_suspend_mode_is_broken ) (struct uhci_hcd*) ;} ;


 int FUNC_0 (struct uhci_hcd*) ;

__attribute__((used)) static int FUNC_1(struct uhci_hcd *VAR_0)
{
 return VAR_0->global_suspend_mode_is_broken ?
  VAR_0->global_suspend_mode_is_broken(VAR_0) : 0;
}
