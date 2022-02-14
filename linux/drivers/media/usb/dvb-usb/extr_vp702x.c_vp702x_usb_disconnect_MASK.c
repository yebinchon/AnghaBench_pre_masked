
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vp702x_device_state {int buf_mutex; int buf; } ;
struct usb_interface {int dummy; } ;
struct dvb_usb_device {struct vp702x_device_state* priv; } ;


 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct dvb_usb_device* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_0)
{
 struct dvb_usb_device *VAR_1 = FUNC_4(VAR_0);
 struct vp702x_device_state *VAR_2 = VAR_1->priv;
 FUNC_2(&VAR_2->buf_mutex);
 FUNC_1(VAR_2->buf);
 FUNC_3(&VAR_2->buf_mutex);
 FUNC_0(VAR_0);
}
