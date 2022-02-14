
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_port {int dev; struct usb_port* peer; } ;
struct usb_hub {struct usb_port** ports; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_port*,struct usb_port*) ;

void FUNC_2(struct usb_hub *VAR_0, int VAR_1)
{
 struct usb_port *VAR_2 = VAR_0->ports[VAR_1 - 1];
 struct usb_port *VAR_3;

 VAR_3 = VAR_2->peer;
 if (VAR_3)
  FUNC_1(VAR_2, VAR_3);
 FUNC_0(&VAR_2->dev);
}
