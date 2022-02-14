
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_device {int i2c_mutex; TYPE_1__* udev; struct cxusb_state* priv; } ;
struct cxusb_state {int* gpio_write_refresh; } ;
struct TYPE_5__ {int dev; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dvb_usb_device*,int ,int *,int ,int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_10(struct dvb_usb_device *VAR_2, bool VAR_3)
{
 struct cxusb_state *VAR_4 = VAR_2->priv;
 int VAR_5;
 u8 VAR_6;
 unsigned int VAR_7;





 FUNC_4(&VAR_2->i2c_mutex);

 if (VAR_3) {
  VAR_5 = FUNC_8(VAR_2->udev, 0, 6);
  if (VAR_5 != 0) {
   FUNC_2(&VAR_2->udev->dev,
    "digital interface selection failed (%d)\n",
    VAR_5);
   goto ret_unlock;
  }
 } else {
  VAR_5 = FUNC_8(VAR_2->udev, 0, 1);
  if (VAR_5 != 0) {
   FUNC_2(&VAR_2->udev->dev,
    "analog interface selection failed (%d)\n",
    VAR_5);
   goto ret_unlock;
  }
 }


 VAR_5 = FUNC_6(VAR_2->udev, FUNC_7(VAR_2->udev, 1));
 if (VAR_5 != 0)
  FUNC_3(&VAR_2->udev->dev,
    "clear halt on IN pipe failed (%d)\n",
    VAR_5);

 VAR_5 = FUNC_6(VAR_2->udev, FUNC_9(VAR_2->udev, 1));
 if (VAR_5 != 0)
  FUNC_3(&VAR_2->udev->dev,
    "clear halt on OUT pipe failed (%d)\n",
    VAR_5);

 VAR_5 = FUNC_1(VAR_2, VAR_3 ? VAR_1 : VAR_0,
        ((void*)0), 0, &VAR_6, 1);
 if (VAR_5 != 0) {
  FUNC_2(&VAR_2->udev->dev, "mode switch failed (%d)\n",
   VAR_5);
  goto ret_unlock;
 }


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->gpio_write_refresh); VAR_7++)
  VAR_4->gpio_write_refresh[VAR_7] = 1;

ret_unlock:
 FUNC_5(&VAR_2->i2c_mutex);

 return VAR_5;
}
