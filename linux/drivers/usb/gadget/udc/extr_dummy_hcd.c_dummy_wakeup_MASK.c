
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct dummy_hcd {int port_status; scalar_t__ rh_state; int resuming; scalar_t__ re_timeout; TYPE_1__* dum; } ;
struct TYPE_4__ {int rh_timer; } ;
struct TYPE_3__ {int devstatus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_0 (struct dummy_hcd*) ;
 struct dummy_hcd* FUNC_1 (struct usb_gadget*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_9)
{
 struct dummy_hcd *VAR_10;

 VAR_10 = FUNC_1(VAR_9);
 if (!(VAR_10->dum->devstatus & ((1 << VAR_4)
    | (1 << VAR_5))))
  return -VAR_1;
 if ((VAR_10->port_status & VAR_6) == 0)
  return -VAR_3;
 if ((VAR_10->port_status & VAR_7) == 0 &&
    VAR_10->rh_state != VAR_0)
  return -VAR_2;




 VAR_10->resuming = 1;
 VAR_10->re_timeout = VAR_8 + FUNC_3(20);
 FUNC_2(&FUNC_0(VAR_10)->rh_timer, VAR_10->re_timeout);
 return 0;
}
