
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_msg {int flags; scalar_t__ addr; scalar_t__* buf; scalar_t__ len; } ;
struct i2c_adapter {int dummy; } ;
struct ec168_req {scalar_t__ value; scalar_t__ index; scalar_t__* data; scalar_t__ size; int cmd; } ;
struct dvb_usb_device {int i2c_mutex; TYPE_1__* udev; } ;
struct TYPE_4__ {scalar_t__ demod_address; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct dvb_usb_device*,struct ec168_req*) ;
 TYPE_2__ VAR_8 ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_adapter *VAR_9, struct i2c_msg VAR_10[],
 int VAR_11)
{
 struct dvb_usb_device *VAR_12 = FUNC_2(VAR_9);
 struct ec168_req VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 if (VAR_11 > 2)
  return -VAR_1;

 if (FUNC_3(&VAR_12->i2c_mutex) < 0)
  return -VAR_0;

 while (VAR_14 < VAR_11) {
  if (VAR_11 > VAR_14 + 1 && (VAR_10[VAR_14+1].flags & VAR_3)) {
   if (VAR_10[VAR_14].addr == VAR_8.demod_address) {
    VAR_13.cmd = VAR_5;
    VAR_13.value = 0;
    VAR_13.index = 0xff00 + VAR_10[VAR_14].buf[0];
    VAR_13.size = VAR_10[VAR_14+1].len;
    VAR_13.data = &VAR_10[VAR_14+1].buf[0];
    VAR_15 = FUNC_1(VAR_12, &VAR_13);
    VAR_14 += 2;
   } else {
    FUNC_0(&VAR_12->udev->dev, "%s: I2C read not " "implemented\n",

      VAR_4);
    VAR_15 = -VAR_2;
    VAR_14 += 2;
   }
  } else {
   if (VAR_10[VAR_14].addr == VAR_8.demod_address) {
    VAR_13.cmd = VAR_6;
    VAR_13.value = VAR_10[VAR_14].buf[1];
    VAR_13.index = 0xff00 + VAR_10[VAR_14].buf[0];
    VAR_13.size = 0;
    VAR_13.data = ((void*)0);
    VAR_15 = FUNC_1(VAR_12, &VAR_13);
    VAR_14 += 1;
   } else {
    VAR_13.cmd = VAR_7;
    VAR_13.value = VAR_10[VAR_14].buf[0];
    VAR_13.index = 0x0100 + VAR_10[VAR_14].addr;
    VAR_13.size = VAR_10[VAR_14].len-1;
    VAR_13.data = &VAR_10[VAR_14].buf[1];
    VAR_15 = FUNC_1(VAR_12, &VAR_13);
    VAR_14 += 1;
   }
  }
  if (VAR_15)
   goto error;

 }
 VAR_15 = VAR_14;

error:
 FUNC_4(&VAR_12->i2c_mutex);
 return VAR_15;
}
