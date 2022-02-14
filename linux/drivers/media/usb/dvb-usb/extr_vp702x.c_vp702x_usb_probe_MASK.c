
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vp702x_device_state {int buf_len; int buf_mutex; int buf; } ;
struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct dvb_usb_device {struct vp702x_device_state* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_interface*,int *,int ,struct dvb_usb_device**,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_5,
  const struct usb_device_id *VAR_6)
{
 struct dvb_usb_device *VAR_7;
 struct vp702x_device_state *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5, &VAR_4,
       VAR_2, &VAR_7, VAR_3);
 if (VAR_9)
  goto out;

 VAR_8 = VAR_7->priv;
 VAR_8->buf_len = 16;
 VAR_8->buf = FUNC_2(VAR_8->buf_len, VAR_1);
 if (!VAR_8->buf) {
  VAR_9 = -VAR_0;
  FUNC_0(VAR_5);
  goto out;
 }
 FUNC_3(&VAR_8->buf_mutex);

out:
 return VAR_9;

}
