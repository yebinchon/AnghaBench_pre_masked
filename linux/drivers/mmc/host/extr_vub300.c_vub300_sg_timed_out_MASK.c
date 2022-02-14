
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vub300_mmc_host {int usb_timed_out; int command_res_urb; int command_out_urb; int sg_request; } ;
struct timer_list {int dummy; } ;


 struct vub300_mmc_host* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct vub300_mmc_host* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_2)
{
 struct vub300_mmc_host *VAR_3 = FUNC_0(VAR_3, VAR_2,
          VAR_0);
 VAR_3->usb_timed_out = 1;
 FUNC_1(&VAR_3->sg_request);
 FUNC_2(VAR_3->command_out_urb);
 FUNC_2(VAR_3->command_res_urb);
}
