
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct ohci_hcd {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ohci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct ohci_hcd*,char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_3)
{
 struct ohci_hcd *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_3())
  VAR_4->flags |= VAR_0;


 if (FUNC_2()) {
  VAR_4->flags |= VAR_1;
  FUNC_1(VAR_4, "enabled AMD prefetch quirk\n");
 }

 VAR_4->flags |= VAR_2;
 return 0;
}
