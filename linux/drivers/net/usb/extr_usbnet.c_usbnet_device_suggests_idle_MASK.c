
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* intf; int flags; } ;
struct TYPE_2__ {int needs_remote_wakeup; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct usbnet *VAR_1)
{
 if (!FUNC_0(VAR_0, &VAR_1->flags)) {
  VAR_1->intf->needs_remote_wakeup = 1;
  FUNC_1(VAR_1->intf);
 }
}
