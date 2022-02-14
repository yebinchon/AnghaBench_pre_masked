
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_hcd {scalar_t__ hcca; } ;


 int FUNC_0 (struct ohci_hcd*,char*,...) ;
 int FUNC_1 (struct ohci_hcd*,int,int *,int *) ;
 int FUNC_2 (struct ohci_hcd*,int *,int *) ;
 int FUNC_3 (struct ohci_hcd*) ;

__attribute__((used)) static void FUNC_4(struct ohci_hcd *VAR_0)
{
 FUNC_0 (VAR_0, "OHCI controller state\n");


 FUNC_2 (VAR_0, ((void*)0), ((void*)0));
 if (VAR_0->hcca)
  FUNC_0 (VAR_0,
   "hcca frame #%04x\n", FUNC_3(VAR_0));
 FUNC_1 (VAR_0, 1, ((void*)0), ((void*)0));
}
