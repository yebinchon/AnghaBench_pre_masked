
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_req {int value; int index; int* data; scalar_t__ data_len; int cmd; } ;
struct i2c_msg {int flags; int addr; int* buf; scalar_t__ len; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; TYPE_1__* udev; } ;
typedef int req ;
struct TYPE_4__ {int demod_address; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dvb_usb_device*,struct usb_req*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (int *,char*,int ) ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct usb_req*,int ,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_8,
  struct i2c_msg VAR_9[], int VAR_10)
{
 struct dvb_usb_device *VAR_11 = FUNC_2(VAR_8);
 int VAR_12 = 0, VAR_13 = 0;
 struct usb_req VAR_14;

 if (VAR_10 > 2)
  return -VAR_3;

 FUNC_3(&VAR_14, 0, sizeof(VAR_14));

 if (FUNC_4(&VAR_11->i2c_mutex) < 0)
  return -VAR_2;

 while (VAR_13 < VAR_10) {
  if (VAR_10 > VAR_13 + 1 && (VAR_9[VAR_13+1].flags & VAR_4)) {
   if (VAR_9[VAR_13].addr ==
    VAR_7.demod_address) {
    VAR_14.cmd = VAR_0;
    VAR_14.value = VAR_9[VAR_13].addr >> 1;
    VAR_14.index = VAR_9[VAR_13].buf[0];
    VAR_14.data_len = VAR_9[VAR_13+1].len;
    VAR_14.data = &VAR_9[VAR_13+1].buf[0];
    VAR_12 = FUNC_0(VAR_11, &VAR_14);
   } else {
    FUNC_1(&VAR_11->udev->dev, "%s: I2C read not " "implemented\n",

      VAR_6);
    VAR_12 = -VAR_3;
   }
   VAR_13 += 2;
  } else {
   if (VAR_9[VAR_13].addr ==
    VAR_7.demod_address) {
    VAR_14.cmd = VAR_1;
    VAR_14.value = VAR_9[VAR_13].addr >> 1;
    VAR_14.index = VAR_9[VAR_13].buf[0];
    VAR_14.data_len = VAR_9[VAR_13].len-1;
    VAR_14.data = &VAR_9[VAR_13].buf[1];
    VAR_12 = FUNC_0(VAR_11, &VAR_14);
   } else {
    VAR_14.cmd = VAR_5;
    VAR_14.value = 0x2000 + (VAR_9[VAR_13].addr >> 1);
    VAR_14.index = 0x0000;
    VAR_14.data_len = VAR_9[VAR_13].len;
    VAR_14.data = &VAR_9[VAR_13].buf[0];
    VAR_12 = FUNC_0(VAR_11, &VAR_14);
   }
   VAR_13 += 1;
  }
  if (VAR_12)
   break;
 }

 FUNC_5(&VAR_11->i2c_mutex);
 return VAR_12 ? VAR_12 : VAR_13;
}
