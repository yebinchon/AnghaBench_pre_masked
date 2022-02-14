
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct uhci_hcd {int big_endian_mmio; int big_endian_desc; int * global_suspend_mode_is_broken; int * resume_detect_interrupts_are_broken; int * configure_hc; int check_and_reset_hc; int reset_hc; int rh_numports; } ;


 int VAR_0 ;
 int FUNC_0 (struct uhci_hcd*) ;
 struct uhci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct usb_hcd*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct uhci_hcd*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_3)
{
 struct uhci_hcd *VAR_4 = FUNC_1(VAR_3);
 if (!(FUNC_3(VAR_4, VAR_0) & 0x80)) {
  VAR_4->big_endian_mmio = 1;
  VAR_4->big_endian_desc = 1;
 }

 VAR_4->rh_numports = FUNC_2(VAR_3);


 VAR_4->reset_hc = VAR_2;
 VAR_4->check_and_reset_hc = VAR_1;

 VAR_4->configure_hc = ((void*)0);
 VAR_4->resume_detect_interrupts_are_broken = ((void*)0);
 VAR_4->global_suspend_mode_is_broken = ((void*)0);


 FUNC_0(VAR_4);
 return 0;
}
