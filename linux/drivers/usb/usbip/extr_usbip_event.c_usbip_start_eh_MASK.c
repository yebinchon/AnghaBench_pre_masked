
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_device {scalar_t__ event; int eh_waitq; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct usbip_device *VAR_0)
{
 FUNC_0(&VAR_0->eh_waitq);
 VAR_0->event = 0;
 return 0;
}
