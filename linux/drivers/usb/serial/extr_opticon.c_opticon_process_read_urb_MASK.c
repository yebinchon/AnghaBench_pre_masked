
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct urb {unsigned char* transfer_buffer; int actual_length; struct usb_serial_port* context; } ;


 int FUNC_0 (int *,char*,unsigned char const,...) ;
 int FUNC_1 (struct usb_serial_port*,unsigned char const*,size_t) ;
 int FUNC_2 (struct usb_serial_port*,unsigned char const*,size_t) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->context;
 const unsigned char *VAR_2 = VAR_0->transfer_buffer;
 const unsigned char *VAR_3 = VAR_2 + 2;
 size_t VAR_4 = VAR_0->actual_length - 2;

 if (VAR_0->actual_length <= 2) {
  FUNC_0(&VAR_1->dev, "malformed packet received: %d bytes\n",
       VAR_0->actual_length);
  return;
 }
 if ((VAR_2[0] == 0x00) && (VAR_2[1] == 0x00)) {
  FUNC_1(VAR_1, VAR_3, VAR_4);
 } else if ((VAR_2[0] == 0x00) && (VAR_2[1] == 0x01)) {
  FUNC_2(VAR_1, VAR_3, VAR_4);
 } else {
  FUNC_0(&VAR_1->dev, "unknown packet received: %02x %02x\n",
       VAR_2[0], VAR_2[1]);
 }
}
