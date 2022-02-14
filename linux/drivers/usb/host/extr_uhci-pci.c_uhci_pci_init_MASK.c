
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {scalar_t__ rsrc_start; } ;
struct uhci_hcd {unsigned long io_addr; int oc_low; int wait_for_hp; int global_suspend_mode_is_broken; int resume_detect_interrupts_are_broken; int configure_hc; int check_and_reset_hc; int reset_hc; int rh_numports; } ;
struct TYPE_2__ {scalar_t__ vendor; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct uhci_hcd*) ;
 int FUNC_1 (int ,int) ;
 struct uhci_hcd* FUNC_2 (struct usb_hcd*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct uhci_hcd*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_8)
{
 struct uhci_hcd *VAR_9 = FUNC_2(VAR_8);

 VAR_9->io_addr = (unsigned long) VAR_8->rsrc_start;

 VAR_9->rh_numports = FUNC_4(VAR_8);





 if (FUNC_3(FUNC_5(VAR_9))->vendor == VAR_2)
  VAR_9->oc_low = 1;


 if (FUNC_3(FUNC_5(VAR_9))->vendor == VAR_0)
  VAR_9->wait_for_hp = 1;


 if (FUNC_3(FUNC_5(VAR_9))->vendor == VAR_1)
  FUNC_1(FUNC_5(VAR_9), 1);


 VAR_9->reset_hc = VAR_6;
 VAR_9->check_and_reset_hc = VAR_3;
 VAR_9->configure_hc = VAR_4;
 VAR_9->resume_detect_interrupts_are_broken =
  VAR_7;
 VAR_9->global_suspend_mode_is_broken =
  VAR_5;





 FUNC_0(VAR_9);
 return 0;
}
