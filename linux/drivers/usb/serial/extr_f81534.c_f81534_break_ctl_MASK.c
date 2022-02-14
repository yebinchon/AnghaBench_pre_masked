
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct f81534_port_private {int lcr_mutex; int shadow_lcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct usb_serial_port*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct f81534_port_private* FUNC_4 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_2, int VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_2->driver_data;
 struct f81534_port_private *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;

 FUNC_2(&VAR_5->lcr_mutex);

 if (VAR_3)
  VAR_5->shadow_lcr |= VAR_1;
 else
  VAR_5->shadow_lcr &= ~VAR_1;

 VAR_6 = FUNC_1(VAR_4, VAR_0,
     VAR_5->shadow_lcr);
 if (VAR_6)
  FUNC_0(&VAR_4->dev, "set break failed: %d\n", VAR_6);

 FUNC_3(&VAR_5->lcr_mutex);
}
