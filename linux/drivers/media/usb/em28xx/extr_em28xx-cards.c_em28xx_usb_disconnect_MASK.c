
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct em28xx {int disconnected; int ref; struct em28xx* dev_next; int name; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct em28xx*) ;
 int VAR_0 ;
 int FUNC_2 (struct em28xx*) ;
 int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (int *,int ) ;
 struct em28xx* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{
 struct em28xx *VAR_2;

 VAR_2 = FUNC_5(VAR_1);
 FUNC_6(VAR_1, ((void*)0));

 if (!VAR_2)
  return;

 if (VAR_2->dev_next) {
  VAR_2->dev_next->disconnected = 1;
  FUNC_0(&VAR_2->intf->dev, "Disconnecting %s\n",
    VAR_2->dev_next->name);
 }

 VAR_2->disconnected = 1;

 FUNC_0(&VAR_2->intf->dev, "Disconnecting %s\n", VAR_2->name);

 FUNC_3(VAR_2);

 FUNC_1(VAR_2);

 if (VAR_2->dev_next)
  FUNC_2(VAR_2->dev_next);
 FUNC_2(VAR_2);

 if (VAR_2->dev_next) {
  FUNC_4(&VAR_2->dev_next->ref, VAR_0);
  VAR_2->dev_next = ((void*)0);
 }
 FUNC_4(&VAR_2->ref, VAR_0);
}
