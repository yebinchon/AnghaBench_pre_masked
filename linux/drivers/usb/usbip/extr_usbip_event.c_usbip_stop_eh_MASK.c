
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_device {unsigned long event; int eh_waitq; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct usbip_device *VAR_1)
{
 unsigned long VAR_2 = VAR_1->event & ~VAR_0;

 if (!(VAR_1->event & VAR_0))
  FUNC_0("usbip_eh stopping but not removed\n");

 if (VAR_2)
  FUNC_0("usbip_eh waiting completion %lx\n", VAR_2);

 FUNC_1(VAR_1->eh_waitq, !(VAR_1->event & ~VAR_0));
 FUNC_0("usbip_eh has stopped\n");
}
