
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {scalar_t__ bulk_out_size; scalar_t__ bulk_in_size; int port; } ;
struct usb_serial {int num_ports; struct usb_serial_port** port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_serial_port*,int ) ;
 int FUNC_2 (struct usb_serial_port*,int ) ;

int FUNC_3(struct usb_serial *VAR_2)
{
 struct usb_serial_port *VAR_3;
 int VAR_4, VAR_5 = 0, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_ports; VAR_4++) {
  VAR_3 = VAR_2->port[VAR_4];
  if (!FUNC_0(&VAR_3->port))
   continue;

  if (VAR_3->bulk_in_size) {
   VAR_6 = FUNC_1(VAR_3,
        VAR_1);
   if (VAR_6 < 0)
    VAR_5++;
  }

  if (VAR_3->bulk_out_size) {
   VAR_6 = FUNC_2(VAR_3, VAR_1);
   if (VAR_6 < 0)
    VAR_5++;
  }
 }

 return VAR_5 ? -VAR_0 : 0;
}
