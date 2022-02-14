
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct otg_fsm {int state_changed; TYPE_1__* otg; int a_suspend_req_inf; int a_bus_req; int a_bus_suspend; } ;
typedef enum usb_otg_state { ____Placeholder_usb_otg_state } usb_otg_state ;
struct TYPE_4__ {int otg_port; } ;
struct TYPE_3__ {int state; TYPE_2__* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct otg_fsm*,int ) ;
 int FUNC_2 (struct otg_fsm*,int ) ;
 int FUNC_3 (struct otg_fsm*,int) ;
 int FUNC_4 (struct otg_fsm*,int) ;
 int FUNC_5 (struct otg_fsm*,int) ;
 int FUNC_6 (struct otg_fsm*,int) ;
 int FUNC_7 (struct otg_fsm*,int ) ;
 int FUNC_8 (struct otg_fsm*) ;
 int FUNC_9 (struct otg_fsm*) ;
 int FUNC_10 (struct otg_fsm*) ;
 int FUNC_11 (struct otg_fsm*) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct otg_fsm *VAR_12, enum usb_otg_state VAR_13)
{
 if (VAR_12->otg->state == VAR_13)
  return 0;
 FUNC_0("Set state: %s\n", FUNC_13(VAR_13));
 FUNC_4(VAR_12, VAR_12->otg->state);
 switch (VAR_13) {
 case 131:
  FUNC_3(VAR_12, 0);
  FUNC_2(VAR_12, 0);
  FUNC_5(VAR_12, 0);
  FUNC_6(VAR_12, 0);




  FUNC_9(VAR_12);
  FUNC_7(VAR_12, VAR_11);
  FUNC_1(VAR_12, VAR_7);
  break;
 case 129:
  FUNC_11(VAR_12);
  FUNC_6(VAR_12, 0);
  FUNC_7(VAR_12, VAR_11);
  FUNC_1(VAR_12, VAR_8);
  break;
 case 130:
  FUNC_2(VAR_12, 0);
  FUNC_6(VAR_12, 0);
  FUNC_7(VAR_12, VAR_9);
  FUNC_5(VAR_12, 1);
  break;
 case 128:
  FUNC_2(VAR_12, 0);
  FUNC_5(VAR_12, 0);
  FUNC_6(VAR_12, 0);
  FUNC_7(VAR_12, VAR_10);
  FUNC_1(VAR_12, VAR_6);
  VAR_12->a_bus_suspend = 0;
  break;
 case 132:
  FUNC_2(VAR_12, 0);
  FUNC_5(VAR_12, 0);
  FUNC_6(VAR_12, 1);
  FUNC_7(VAR_12, VAR_10);
  FUNC_12(VAR_12->otg->host,
    VAR_12->otg->host->otg_port);
  FUNC_10(VAR_12);
  break;
 case 139:
  FUNC_3(VAR_12, 0);
  FUNC_2(VAR_12, 0);
  FUNC_5(VAR_12, 0);
  FUNC_6(VAR_12, 0);
  FUNC_8(VAR_12);
  FUNC_7(VAR_12, VAR_10);
  break;
 case 133:
  FUNC_3(VAR_12, 1);
  FUNC_5(VAR_12, 0);
  FUNC_6(VAR_12, 0);
  FUNC_7(VAR_12, VAR_10);
  FUNC_1(VAR_12, VAR_5);
  break;
 case 135:
  FUNC_3(VAR_12, 1);
  FUNC_5(VAR_12, 0);
  FUNC_6(VAR_12, 0);
  FUNC_7(VAR_12, VAR_10);
  FUNC_1(VAR_12, VAR_2);
  break;
 case 140:
  FUNC_3(VAR_12, 1);
  FUNC_5(VAR_12, 0);
  FUNC_6(VAR_12, 1);
  FUNC_7(VAR_12, VAR_10);




  if (!VAR_12->a_bus_req || VAR_12->a_suspend_req_inf)
   FUNC_1(VAR_12, VAR_3);
  FUNC_10(VAR_12);
  break;
 case 137:
  FUNC_3(VAR_12, 1);
  FUNC_5(VAR_12, 0);
  FUNC_6(VAR_12, 0);
  FUNC_7(VAR_12, VAR_10);
  FUNC_1(VAR_12, VAR_0);

  break;
 case 138:
  FUNC_6(VAR_12, 0);
  FUNC_7(VAR_12, VAR_9);
  FUNC_3(VAR_12, 1);
  FUNC_5(VAR_12, 1);
  FUNC_1(VAR_12, VAR_1);
  break;
 case 134:
  FUNC_3(VAR_12, 0);
  FUNC_5(VAR_12, 0);
  FUNC_6(VAR_12, 0);
  FUNC_7(VAR_12, VAR_10);
  FUNC_1(VAR_12, VAR_4);
  break;
 case 136:
  FUNC_3(VAR_12, 0);
  FUNC_5(VAR_12, 0);
  FUNC_6(VAR_12, 0);
  FUNC_7(VAR_12, VAR_11);
  break;
 default:
  break;
 }

 VAR_12->otg->state = VAR_13;
 VAR_12->state_changed = 1;
 return 0;
}
