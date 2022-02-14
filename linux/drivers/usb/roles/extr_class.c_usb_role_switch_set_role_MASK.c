
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct usb_role_switch {int (* set ) (int ,int) ;int role; int lock; TYPE_1__ dev; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 scalar_t__ FUNC_0 (struct usb_role_switch*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct usb_role_switch *VAR_0, enum usb_role VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_0))
  return 0;

 FUNC_1(&VAR_0->lock);

 VAR_2 = VAR_0->set(VAR_0->dev.parent, VAR_1);
 if (!VAR_2)
  VAR_0->role = VAR_1;

 FUNC_2(&VAR_0->lock);

 return VAR_2;
}
