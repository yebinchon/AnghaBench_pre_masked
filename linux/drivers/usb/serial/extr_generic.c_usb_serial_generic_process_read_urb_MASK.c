
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int console; } ;
struct usb_serial_port {TYPE_1__ port; int sysrq; } ;
struct urb {int actual_length; scalar_t__ transfer_buffer; struct usb_serial_port* context; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (struct usb_serial_port*,char) ;

void FUNC_4(struct urb *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->context;
 char *VAR_3 = (char *)VAR_1->transfer_buffer;
 int VAR_4;

 if (!VAR_1->actual_length)
  return;





 if (!VAR_2->port.console || !VAR_2->sysrq) {
  FUNC_2(&VAR_2->port, VAR_3, VAR_1->actual_length);
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_1->actual_length; VAR_4++, VAR_3++) {
   if (!FUNC_3(VAR_2, *VAR_3))
    FUNC_1(&VAR_2->port, *VAR_3, VAR_0);
  }
 }
 FUNC_0(&VAR_2->port);
}
