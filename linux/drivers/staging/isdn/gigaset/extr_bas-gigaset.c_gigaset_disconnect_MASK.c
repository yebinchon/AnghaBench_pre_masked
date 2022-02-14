
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {struct bas_cardstate* bas; } ;
struct cardstate {int * dev; scalar_t__ bcs; TYPE_1__ hw; } ;
struct bas_cardstate {int * udev; int * interface; scalar_t__ rcvbuf_size; int * rcvbuf; int int_in_wq; int timer_int_in; int timer_cmd_in; int timer_atrdy; int timer_ctrl; scalar_t__ basstate; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct cardstate*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct cardstate*) ;
 int FUNC_6 (struct cardstate*) ;
 int FUNC_7 (int *) ;
 struct cardstate* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_11(struct usb_interface *VAR_1)
{
 struct cardstate *VAR_2;
 struct bas_cardstate *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_8(VAR_1);

 VAR_3 = VAR_2->hw.bas;

 FUNC_2(VAR_2->dev, "disconnecting Gigaset base\n");


 VAR_3->basstate = 0;


 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  FUNC_4(VAR_2->bcs + VAR_4);


 FUNC_6(VAR_2);


 FUNC_1(&VAR_3->timer_ctrl);
 FUNC_1(&VAR_3->timer_atrdy);
 FUNC_1(&VAR_3->timer_cmd_in);
 FUNC_1(&VAR_3->timer_int_in);
 FUNC_0(&VAR_3->int_in_wq);
 FUNC_3(VAR_2);
 FUNC_10(VAR_1, ((void*)0));
 FUNC_7(VAR_3->rcvbuf);
 VAR_3->rcvbuf = ((void*)0);
 VAR_3->rcvbuf_size = 0;
 FUNC_9(VAR_3->udev);
 VAR_3->interface = ((void*)0);
 VAR_3->udev = ((void*)0);
 VAR_2->dev = ((void*)0);
 FUNC_5(VAR_2);
}
