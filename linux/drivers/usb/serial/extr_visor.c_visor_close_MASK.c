
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; int interrupt_in_urb; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ,int,int,int,unsigned char*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_6(struct usb_serial_port *VAR_2)
{
 unsigned char *VAR_3;

 FUNC_5(VAR_2);
 FUNC_3(VAR_2->interrupt_in_urb);

 VAR_3 = FUNC_1(0x12, VAR_0);
 if (!VAR_3)
  return;
 FUNC_2(VAR_2->serial->dev,
      FUNC_4(VAR_2->serial->dev, 0),
      VAR_1, 0xc2,
      0x0000, 0x0000,
      VAR_3, 0x12, 300);
 FUNC_0(VAR_3);
}
