
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;


 int FUNC_0 (struct xhci_hcd*,char*,...) ;

int FUNC_1(struct xhci_hcd *VAR_0, unsigned int VAR_1)
{
 if (VAR_1 >= 224 && VAR_1 <= 255) {



  FUNC_0(VAR_0, "Vendor defined info completion code %u\n",
    VAR_1);
  FUNC_0(VAR_0, "Treating code as success.\n");
  return 1;
 }
 return 0;
}
