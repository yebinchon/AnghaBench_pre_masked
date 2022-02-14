
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl28xxu_req {int size; int index; int data; int value; } ;
struct rtl28xxu_dev {int buf; } ;
struct dvb_usb_device {TYPE_1__* intf; int usb_mutex; int udev; struct rtl28xxu_dev* priv; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,int ,int,int ,int,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned int,int ,int,int ,int,int ,int,int) ;
 unsigned int FUNC_7 (int ,int ) ;
 unsigned int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct dvb_usb_device *VAR_5, struct rtl28xxu_req *VAR_6)
{
 struct rtl28xxu_dev *VAR_7 = VAR_5->priv;
 int VAR_8;
 unsigned int VAR_9;
 u8 VAR_10;

 FUNC_4(&VAR_5->usb_mutex);

 if (VAR_6->size > sizeof(VAR_7->buf)) {
  FUNC_1(&VAR_5->intf->dev, "too large message %u\n", VAR_6->size);
  VAR_8 = -VAR_1;
  goto err_mutex_unlock;
 }

 if (VAR_6->index & VAR_0) {

  FUNC_3(VAR_7->buf, VAR_6->data, VAR_6->size);
  VAR_10 = (VAR_4 | VAR_3);
  VAR_9 = FUNC_8(VAR_5->udev, 0);
 } else {

  VAR_10 = (VAR_4 | VAR_2);
  VAR_9 = FUNC_7(VAR_5->udev, 0);
 }

 VAR_8 = FUNC_6(VAR_5->udev, VAR_9, 0, VAR_10, VAR_6->value,
   VAR_6->index, VAR_7->buf, VAR_6->size, 1000);
 FUNC_2(VAR_5->udev, 0, VAR_10, VAR_6->value,
   VAR_6->index, VAR_7->buf, VAR_6->size);
 if (VAR_8 < 0)
  goto err_mutex_unlock;


 if (VAR_10 == (VAR_4 | VAR_2))
  FUNC_3(VAR_6->data, VAR_7->buf, VAR_6->size);

 FUNC_5(&VAR_5->usb_mutex);

 return 0;
err_mutex_unlock:
 FUNC_5(&VAR_5->usb_mutex);
 FUNC_0(&VAR_5->intf->dev, "failed=%d\n", VAR_8);
 return VAR_8;
}
