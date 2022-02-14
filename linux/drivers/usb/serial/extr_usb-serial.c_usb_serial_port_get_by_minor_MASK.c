
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int kref; int disc_mutex; scalar_t__ disconnected; } ;


 struct usb_serial_port* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

struct usb_serial_port *FUNC_4(unsigned VAR_2)
{
 struct usb_serial *VAR_3;
 struct usb_serial_port *VAR_4;

 FUNC_2(&VAR_1);
 VAR_4 = FUNC_0(&VAR_0, VAR_2);
 if (!VAR_4)
  goto exit;

 VAR_3 = VAR_4->serial;
 FUNC_2(&VAR_3->disc_mutex);
 if (VAR_3->disconnected) {
  FUNC_3(&VAR_3->disc_mutex);
  VAR_4 = ((void*)0);
 } else {
  FUNC_1(&VAR_3->kref);
 }
exit:
 FUNC_3(&VAR_1);
 return VAR_4;
}
