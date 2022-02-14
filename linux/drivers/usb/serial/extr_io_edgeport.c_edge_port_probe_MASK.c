
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct edgeport_port {struct usb_serial_port* port; int ep_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct edgeport_port* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial_port*,struct edgeport_port*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_2)
{
 struct edgeport_port *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_3->ep_lock);
 VAR_3->port = VAR_2;

 FUNC_2(VAR_2, VAR_3);

 return 0;
}
