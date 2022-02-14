
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct ohci_hcd {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ohci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct ohci_hcd*,char*) ;
 int FUNC_2 (struct ohci_hcd*,char*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_2)
{
 struct ohci_hcd *VAR_3 = FUNC_0 (VAR_2);
 FUNC_2 (VAR_3, "unsupported big endian Toshiba quirk\n");
 return -VAR_0;

}
