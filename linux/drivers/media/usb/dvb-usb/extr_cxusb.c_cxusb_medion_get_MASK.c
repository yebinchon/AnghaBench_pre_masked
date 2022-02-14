
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_device {TYPE_1__* udev; struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {scalar_t__ open_type; int open_ctr; int open_lock; } ;
typedef enum cxusb_open_type { ____Placeholder_cxusb_open_type } cxusb_open_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct dvb_usb_device*,int) ;
 int FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (struct dvb_usb_device*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct dvb_usb_device *VAR_6,
       enum cxusb_open_type VAR_7)
{
 struct cxusb_medion_dev *VAR_8 = VAR_6->priv;
 int VAR_9 = 0;

 FUNC_6(&VAR_8->open_lock);

 if (FUNC_0((VAR_8->open_type == VAR_1 ||
       VAR_8->open_type == VAR_2) &&
      VAR_8->open_ctr != 0)) {
  VAR_9 = -VAR_5;
  goto ret_unlock;
 }

 if (VAR_8->open_type == VAR_1) {
  VAR_9 = -VAR_3;
  goto ret_unlock;
 }

 if (VAR_8->open_ctr == 0) {
  if (VAR_8->open_type != VAR_7) {
   FUNC_4("will acquire and switch to %s\n",
     VAR_7 == VAR_0 ?
     "analog" : "digital");

   if (VAR_7 == VAR_0) {
    VAR_9 = FUNC_1(VAR_6, 1);
    if (VAR_9 != 0)
     FUNC_5(&VAR_6->udev->dev,
       "powerup for analog switch failed (%d)\n",
       VAR_9);

    VAR_9 = FUNC_3(VAR_6, 0);
    if (VAR_9 != 0)
     goto ret_unlock;

    VAR_9 = FUNC_2(VAR_6);
    if (VAR_9 != 0)
     goto ret_unlock;
   } else {
    VAR_9 = FUNC_1(VAR_6, 1);
    if (VAR_9 != 0)
     FUNC_5(&VAR_6->udev->dev,
       "powerup for digital switch failed (%d)\n",
       VAR_9);

    VAR_9 = FUNC_3(VAR_6, 1);
    if (VAR_9 != 0)
     goto ret_unlock;
   }

   VAR_8->open_type = VAR_7;
  } else {
   FUNC_4("reacquired idle %s\n",
     VAR_7 == VAR_0 ?
     "analog" : "digital");
  }

  VAR_8->open_ctr = 1;
 } else if (VAR_8->open_type == VAR_7) {
  VAR_8->open_ctr++;
  FUNC_4("acquired %s\n", VAR_7 == VAR_0 ?
    "analog" : "digital");
 } else {
  VAR_9 = -VAR_4;
 }

ret_unlock:
 FUNC_7(&VAR_8->open_lock);

 return VAR_9;
}
