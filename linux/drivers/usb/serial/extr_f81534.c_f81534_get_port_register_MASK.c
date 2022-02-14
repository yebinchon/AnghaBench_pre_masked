
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct usb_serial_port {int serial; } ;
struct f81534_port_private {int phy_num; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int *) ;
 struct f81534_port_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial_port *VAR_1, u16 VAR_2,
     u8 *VAR_3)
{
 struct f81534_port_private *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_1->serial,
   VAR_2 + VAR_4->phy_num * VAR_0, VAR_3);
}
