
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct ohci_hcd {int nec_work; int flags; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct ohci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ohci_hcd*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_2)
{
 struct ohci_hcd *VAR_3 = FUNC_1 (VAR_2);

 VAR_3->flags |= VAR_0;
 FUNC_0(&VAR_3->nec_work, VAR_1);
 FUNC_2 (VAR_3, "enabled NEC chipset lost interrupt quirk\n");

 return 0;
}
