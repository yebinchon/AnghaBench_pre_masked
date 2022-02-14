
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hfa384x {scalar_t__* port_enabled; int commsqual_timer; int state; int link_status; int rx_urb; TYPE_1__* wlandev; } ;
struct TYPE_2__ {int hwremoved; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hfa384x*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

int FUNC_4(struct hfa384x *VAR_3)
{
 int VAR_4;

 FUNC_2();




 if (!VAR_3->wlandev->hwremoved) {

  FUNC_1(VAR_3);


  FUNC_3(&VAR_3->rx_urb);
 }

 VAR_3->link_status = VAR_0;
 VAR_3->state = VAR_2;

 FUNC_0(&VAR_3->commsqual_timer);


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3->port_enabled[VAR_4] = 0;

 return 0;
}
