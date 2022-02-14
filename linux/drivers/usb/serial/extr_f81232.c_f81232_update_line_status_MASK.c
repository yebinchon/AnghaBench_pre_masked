
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct f81232_private {int interrupt_work; } ;


 int FUNC_0 (int *,char*,unsigned char) ;
 int FUNC_1 (int *) ;
 struct f81232_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct usb_serial_port *VAR_0,
          unsigned char *VAR_1,
          size_t VAR_2)
{
 struct f81232_private *VAR_3 = FUNC_2(VAR_0);

 if (!VAR_2)
  return;

 switch (VAR_1[0] & 0x07) {
 case 0x00:
  FUNC_0(&VAR_0->dev, "IIR: MSR Change: %02x\n", VAR_1[0]);
  FUNC_1(&VAR_3->interrupt_work);
  break;
 case 0x02:
  break;
 case 0x04:
  break;
 case 0x06:

  FUNC_0(&VAR_0->dev, "IIR: LSR Change: %02x\n", VAR_1[0]);
  break;
 }
}
