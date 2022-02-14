
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port; } ;
struct usb_serial {int num_ports; struct usb_serial_port** port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_serial_port*,int ) ;
 int FUNC_2 (struct usb_serial_port*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_serial *VAR_2)
{
 struct usb_serial_port *VAR_3;
 int VAR_4 = 0;
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  VAR_3 = VAR_2->port[VAR_5];

  VAR_6 = FUNC_1(VAR_3, VAR_1);
  if (VAR_6 < 0)
   VAR_4++;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->num_ports; VAR_5++) {
  VAR_3 = VAR_2->port[VAR_5];
  if (!FUNC_0(&VAR_3->port))
   continue;

  VAR_6 = FUNC_2(VAR_3, VAR_1);
  if (VAR_6 < 0)
   VAR_4++;
 }

 return VAR_4 ? -VAR_0 : 0;
}
