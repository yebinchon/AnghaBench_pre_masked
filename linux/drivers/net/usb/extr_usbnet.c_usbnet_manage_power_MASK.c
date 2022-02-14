
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* intf; } ;
struct TYPE_2__ {int needs_remote_wakeup; } ;



int FUNC_0(struct usbnet *VAR_0, int VAR_1)
{
 VAR_0->intf->needs_remote_wakeup = VAR_1;
 return 0;
}
