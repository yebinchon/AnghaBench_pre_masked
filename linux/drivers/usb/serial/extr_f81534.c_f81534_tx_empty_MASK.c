
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct f81534_port_private {int tx_empty; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct f81534_port_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static bool FUNC_2(struct usb_serial_port *VAR_1)
{
 struct f81534_port_private *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, &VAR_2->tx_empty);
}
