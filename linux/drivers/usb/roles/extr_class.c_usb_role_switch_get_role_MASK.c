
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct usb_role_switch {int (* get ) (int ) ;int role; int lock; TYPE_1__ dev; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 scalar_t__ FUNC_0 (struct usb_role_switch*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

enum usb_role FUNC_4(struct usb_role_switch *VAR_1)
{
 enum usb_role VAR_2;

 if (FUNC_0(VAR_1))
  return VAR_0;

 FUNC_1(&VAR_1->lock);

 if (VAR_1->get)
  VAR_2 = VAR_1->get(VAR_1->dev.parent);
 else
  VAR_2 = VAR_1->role;

 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
