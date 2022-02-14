
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct ohci_hcd {int dummy; } ;


 struct ohci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct ohci_hcd*,char*) ;
 int FUNC_2 (struct ohci_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_0)
{
 struct ohci_hcd *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1, "can't start\n");
  FUNC_3(VAR_0);
 }
 return VAR_2;
}
