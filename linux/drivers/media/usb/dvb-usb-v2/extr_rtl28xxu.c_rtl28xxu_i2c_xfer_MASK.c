
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl28xxu_req {int value; int index; int size; int* data; } ;
struct rtl28xxu_dev {int page; int new_i2c_write; } ;
struct i2c_msg {int flags; int len; int addr; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; struct rtl28xxu_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct dvb_usb_device* FUNC_0 (struct i2c_adapter*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dvb_usb_device*,struct rtl28xxu_req*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_10, struct i2c_msg VAR_11[],
 int VAR_12)
{
 int VAR_13;
 struct dvb_usb_device *VAR_14 = FUNC_0(VAR_10);
 struct rtl28xxu_dev *VAR_15 = VAR_14->priv;
 struct rtl28xxu_req VAR_16;
 if (FUNC_1(&VAR_14->i2c_mutex) < 0)
  return -VAR_6;

 if (VAR_12 == 2 && !(VAR_11[0].flags & VAR_9) &&
  (VAR_11[1].flags & VAR_9)) {
  if (VAR_11[0].len > 24 || VAR_11[1].len > 24) {

   VAR_13 = -VAR_7;
   goto err_mutex_unlock;
  } else if (VAR_11[0].addr == 0x10) {

   if (VAR_11[0].buf[0] == 0x00) {

    VAR_11[1].buf[0] = VAR_15->page;
    VAR_13 = 0;
   } else {
    VAR_16.value = (VAR_11[0].buf[0] << 8) | (VAR_11[0].addr << 1);
    VAR_16.index = VAR_0 | VAR_15->page;
    VAR_16.size = VAR_11[1].len;
    VAR_16.data = &VAR_11[1].buf[0];
    VAR_13 = FUNC_3(VAR_14, &VAR_16);
   }
  } else if (VAR_11[0].len < 2) {

   VAR_16.value = (VAR_11[0].buf[0] << 8) | (VAR_11[0].addr << 1);
   VAR_16.index = VAR_4;
   VAR_16.size = VAR_11[1].len;
   VAR_16.data = &VAR_11[1].buf[0];
   VAR_13 = FUNC_3(VAR_14, &VAR_16);
  } else {

   VAR_16.value = (VAR_11[0].addr << 1);
   VAR_16.index = VAR_3;
   VAR_16.size = VAR_11[0].len;
   VAR_16.data = VAR_11[0].buf;
   VAR_13 = FUNC_3(VAR_14, &VAR_16);
   if (VAR_13)
    goto err_mutex_unlock;

   VAR_16.value = (VAR_11[0].addr << 1);
   VAR_16.index = VAR_2;
   VAR_16.size = VAR_11[1].len;
   VAR_16.data = VAR_11[1].buf;
   VAR_13 = FUNC_3(VAR_14, &VAR_16);
  }
 } else if (VAR_12 == 1 && !(VAR_11[0].flags & VAR_9)) {
  if (VAR_11[0].len > 22) {

   VAR_13 = -VAR_7;
   goto err_mutex_unlock;
  } else if (VAR_11[0].addr == 0x10) {

   if (VAR_11[0].buf[0] == 0x00) {

    VAR_15->page = VAR_11[0].buf[1];
    VAR_13 = 0;
   } else {
    VAR_16.value = (VAR_11[0].buf[0] << 8) |
     (VAR_11[0].addr << 1);
    VAR_16.index = VAR_1 | VAR_15->page;
    VAR_16.size = VAR_11[0].len-1;
    VAR_16.data = &VAR_11[0].buf[1];
    VAR_13 = FUNC_3(VAR_14, &VAR_16);
   }
  } else if ((VAR_11[0].len < 23) && (!VAR_15->new_i2c_write)) {

   VAR_16.value = (VAR_11[0].buf[0] << 8) | (VAR_11[0].addr << 1);
   VAR_16.index = VAR_5;
   VAR_16.size = VAR_11[0].len-1;
   VAR_16.data = &VAR_11[0].buf[1];
   VAR_13 = FUNC_3(VAR_14, &VAR_16);
  } else {

   VAR_16.value = (VAR_11[0].addr << 1);
   VAR_16.index = VAR_3;
   VAR_16.size = VAR_11[0].len;
   VAR_16.data = VAR_11[0].buf;
   VAR_13 = FUNC_3(VAR_14, &VAR_16);
  }
 } else if (VAR_12 == 1 && (VAR_11[0].flags & VAR_9)) {
  VAR_16.value = (VAR_11[0].addr << 1);
  VAR_16.index = VAR_2;
  VAR_16.size = VAR_11[0].len;
  VAR_16.data = VAR_11[0].buf;
  VAR_13 = FUNC_3(VAR_14, &VAR_16);
 } else {
  VAR_13 = -VAR_7;
 }


 if (VAR_13 == -VAR_8)
  VAR_13 = -VAR_6;

err_mutex_unlock:
 FUNC_2(&VAR_14->i2c_mutex);

 return VAR_13 ? VAR_13 : VAR_12;
}
