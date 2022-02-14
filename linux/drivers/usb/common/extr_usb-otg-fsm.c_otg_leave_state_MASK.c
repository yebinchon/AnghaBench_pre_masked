
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct otg_fsm {int a_wait_vfall_tmout; TYPE_2__* otg; int a_bidl_adis_tmout; int a_suspend_req_inf; int a_aidl_bdis_tmout; int a_wait_bcon_tmout; int a_wait_vrise_tmout; int adp_prb; int b_ase0_brst_tmout; int b_srp_done; int data_pulse; int adp_sns; int b_se0_srp; } ;
typedef enum usb_otg_state { ____Placeholder_usb_otg_state } usb_otg_state ;
struct TYPE_4__ {TYPE_1__* gadget; } ;
struct TYPE_3__ {int host_request_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct otg_fsm*,int ) ;

__attribute__((used)) static void FUNC_1(struct otg_fsm *VAR_8, enum usb_otg_state VAR_9)
{
 switch (VAR_9) {
 case 131:
  FUNC_0(VAR_8, VAR_7);
  VAR_8->b_se0_srp = 0;
  VAR_8->adp_sns = 0;
  VAR_8->adp_prb = 0;
  break;
 case 129:
  VAR_8->data_pulse = 0;
  VAR_8->b_srp_done = 0;
  break;
 case 130:
  if (VAR_8->otg->gadget)
   VAR_8->otg->gadget->host_request_flag = 0;
  break;
 case 128:
  FUNC_0(VAR_8, VAR_6);
  VAR_8->b_ase0_brst_tmout = 0;
  break;
 case 132:
  break;
 case 139:
  VAR_8->adp_prb = 0;
  break;
 case 133:
  FUNC_0(VAR_8, VAR_5);
  VAR_8->a_wait_vrise_tmout = 0;
  break;
 case 135:
  FUNC_0(VAR_8, VAR_2);
  VAR_8->a_wait_bcon_tmout = 0;
  break;
 case 140:
  FUNC_0(VAR_8, VAR_3);
  break;
 case 137:
  FUNC_0(VAR_8, VAR_0);
  VAR_8->a_aidl_bdis_tmout = 0;
  VAR_8->a_suspend_req_inf = 0;
  break;
 case 138:
  FUNC_0(VAR_8, VAR_1);
  VAR_8->a_bidl_adis_tmout = 0;
  if (VAR_8->otg->gadget)
   VAR_8->otg->gadget->host_request_flag = 0;
  break;
 case 134:
  FUNC_0(VAR_8, VAR_4);
  VAR_8->a_wait_vfall_tmout = 0;
  FUNC_0(VAR_8, VAR_5);
  break;
 case 136:
  break;
 default:
  break;
 }
}
