
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port; } ;
struct urb {unsigned char* transfer_buffer; int actual_length; struct usb_serial_port* context; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->context;
 unsigned char *VAR_3 = VAR_1->transfer_buffer;

 if (!VAR_1->actual_length)
  return;





 if (*VAR_3 & 0x0f)
  VAR_0 = *VAR_3 & 0x0f;

 if (VAR_1->actual_length == 1)
  return;

 FUNC_1(&VAR_2->port, VAR_3 + 1, VAR_1->actual_length - 1);
 FUNC_0(&VAR_2->port);
}
