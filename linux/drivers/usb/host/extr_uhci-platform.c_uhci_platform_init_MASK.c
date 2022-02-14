
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct uhci_hcd {int * global_suspend_mode_is_broken; int * resume_detect_interrupts_are_broken; int * configure_hc; int check_and_reset_hc; int reset_hc; scalar_t__ rh_numports; } ;


 int FUNC_0 (struct uhci_hcd*) ;
 struct uhci_hcd* FUNC_1 (struct usb_hcd*) ;
 scalar_t__ FUNC_2 (struct usb_hcd*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_2)
{
 struct uhci_hcd *VAR_3 = FUNC_1(VAR_2);


 if (!VAR_3->rh_numports)
  VAR_3->rh_numports = FUNC_2(VAR_2);


 VAR_3->reset_hc = VAR_1;
 VAR_3->check_and_reset_hc = VAR_0;


 VAR_3->configure_hc = ((void*)0);
 VAR_3->resume_detect_interrupts_are_broken = ((void*)0);
 VAR_3->global_suspend_mode_is_broken = ((void*)0);


 FUNC_0(VAR_3);
 return 0;
}
