
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {scalar_t__ (* check_and_reset_hc ) (struct uhci_hcd*) ;} ;


 int FUNC_0 (struct uhci_hcd*) ;
 scalar_t__ FUNC_1 (struct uhci_hcd*) ;

__attribute__((used)) static void FUNC_2(struct uhci_hcd *VAR_0)
{
 if (VAR_0->check_and_reset_hc(VAR_0))
  FUNC_0(VAR_0);
}
