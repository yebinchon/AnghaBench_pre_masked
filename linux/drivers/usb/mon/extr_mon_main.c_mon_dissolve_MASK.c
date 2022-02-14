
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int * mon_bus; scalar_t__ monitored; } ;
struct mon_bus {int * u_bus; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct mon_bus *VAR_0, struct usb_bus *VAR_1)
{

 if (VAR_1->monitored) {
  VAR_1->monitored = 0;
  FUNC_0();
 }

 VAR_1->mon_bus = ((void*)0);
 VAR_0->u_bus = ((void*)0);
 FUNC_0();


}
