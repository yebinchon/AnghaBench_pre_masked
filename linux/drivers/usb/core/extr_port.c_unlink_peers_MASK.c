
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct usb_port {TYPE_1__ dev; struct usb_port* peer; scalar_t__ is_superspeed; } ;


 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static void FUNC_5(struct usb_port *VAR_0, struct usb_port *VAR_1)
{
 struct usb_port *VAR_2, *VAR_3;

 FUNC_0(VAR_1->peer != VAR_0 || VAR_0->peer != VAR_1,
   "%s and %s are not peers?\n",
   FUNC_1(&VAR_0->dev), FUNC_1(&VAR_1->dev));






 if (VAR_0->is_superspeed) {
  VAR_2 = VAR_0;
  VAR_3 = VAR_1;
 } else {
  VAR_2 = VAR_1;
  VAR_3 = VAR_0;
 }

 FUNC_2(&VAR_3->dev);

 FUNC_4(&VAR_0->dev.kobj, "peer");
 VAR_1->peer = ((void*)0);
 FUNC_4(&VAR_1->dev.kobj, "peer");
 VAR_0->peer = ((void*)0);


 FUNC_3(&VAR_2->dev);


 FUNC_3(&VAR_3->dev);
}
