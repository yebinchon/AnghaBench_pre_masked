
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vl600_state {int current_rx_buf; } ;
struct usbnet {struct vl600_state* driver_priv; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vl600_state*) ;
 void FUNC_2 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static void FUNC_3(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 struct vl600_state *VAR_2 = VAR_0->driver_priv;

 FUNC_0(VAR_2->current_rx_buf);
 FUNC_1(VAR_2);

 return FUNC_2(VAR_0, VAR_1);
}
