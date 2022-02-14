
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vub300_mmc_host {int usb_timed_out; int command_res_urb; int command_out_urb; scalar_t__ usb_transport_fail; int irqpoll_complete; int inactivity_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vub300_mmc_host*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct vub300_mmc_host*) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct vub300_mmc_host *VAR_2)
{

 unsigned long VAR_3;
 FUNC_2(&VAR_2->inactivity_timer, VAR_1 + VAR_0);
 FUNC_1(&VAR_2->irqpoll_complete);
 FUNC_4(VAR_2);
 VAR_3 = FUNC_6(&VAR_2->irqpoll_complete,
       FUNC_3(500));
 if (VAR_2->usb_transport_fail) {

 } else if (VAR_3 == 0) {
  VAR_2->usb_timed_out = 1;
  FUNC_5(VAR_2->command_out_urb);
  FUNC_5(VAR_2->command_res_urb);
 } else {
  FUNC_0(VAR_2);
 }
}
