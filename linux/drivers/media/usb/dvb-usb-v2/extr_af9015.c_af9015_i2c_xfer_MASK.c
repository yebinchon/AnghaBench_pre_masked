
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef void* u16 ;
struct usb_interface {int dev; } ;
struct req_t {scalar_t__ i2c_addr; size_t mbox; size_t addr_len; size_t data_len; size_t* data; void* addr; void* cmd; } ;
struct i2c_msg {int len; int flags; int* buf; scalar_t__ addr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct af9015_state {scalar_t__* af9013_i2c_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (struct dvb_usb_device*,struct req_t*) ;
 struct af9015_state* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *,char*,int) ;
 struct dvb_usb_device* FUNC_3 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_7, struct i2c_msg VAR_8[],
      int VAR_9)
{
 struct dvb_usb_device *VAR_10 = FUNC_3(VAR_7);
 struct af9015_state *VAR_11 = FUNC_1(VAR_10);
 struct usb_interface *VAR_12 = VAR_10->intf;
 int VAR_13;
 u16 VAR_14;
 u8 VAR_15, VAR_16;
 struct req_t VAR_17;
 if (VAR_8[0].len == 0 || VAR_8[0].flags & VAR_2) {
  VAR_14 = 0x0000;
  VAR_15 = 0;
  VAR_16 = 0;
 } else if (VAR_8[0].len == 1) {
  VAR_14 = VAR_8[0].buf[0];
  VAR_15 = 0;
  VAR_16 = 1;
 } else if (VAR_8[0].len == 2) {
  VAR_14 = VAR_8[0].buf[0] << 8 | VAR_8[0].buf[1] << 0;
  VAR_15 = 0;
  VAR_16 = 2;
 } else {
  VAR_14 = VAR_8[0].buf[0] << 8 | VAR_8[0].buf[1] << 0;
  VAR_15 = VAR_8[0].buf[2];
  VAR_16 = 3;
 }

 if (VAR_9 == 1 && !(VAR_8[0].flags & VAR_2)) {

  if (VAR_8[0].len > 21) {
   VAR_13 = -VAR_1;
   goto err;
  }
  if (VAR_8[0].addr == VAR_11->af9013_i2c_addr[0])
   VAR_17.cmd = VAR_6;
  else
   VAR_17.cmd = VAR_5;
  VAR_17.i2c_addr = VAR_8[0].addr;
  VAR_17.addr = VAR_14;
  VAR_17.mbox = VAR_15;
  VAR_17.addr_len = VAR_16;
  VAR_17.data_len = VAR_8[0].len - VAR_16;
  VAR_17.data = &VAR_8[0].buf[VAR_16];
  VAR_13 = FUNC_0(VAR_10, &VAR_17);
 } else if (VAR_9 == 2 && !(VAR_8[0].flags & VAR_2) &&
     (VAR_8[1].flags & VAR_2)) {

  if (VAR_8[0].len > 3 || VAR_8[1].len > 61) {
   VAR_13 = -VAR_1;
   goto err;
  }
  if (VAR_8[0].addr == VAR_11->af9013_i2c_addr[0])
   VAR_17.cmd = VAR_4;
  else
   VAR_17.cmd = VAR_3;
  VAR_17.i2c_addr = VAR_8[0].addr;
  VAR_17.addr = VAR_14;
  VAR_17.mbox = VAR_15;
  VAR_17.addr_len = VAR_16;
  VAR_17.data_len = VAR_8[1].len;
  VAR_17.data = &VAR_8[1].buf[0];
  VAR_13 = FUNC_0(VAR_10, &VAR_17);
 } else if (VAR_9 == 1 && (VAR_8[0].flags & VAR_2)) {

  if (VAR_8[0].len > 61) {
   VAR_13 = -VAR_1;
   goto err;
  }
  if (VAR_8[0].addr == VAR_11->af9013_i2c_addr[0]) {
   VAR_13 = -VAR_0;
   goto err;
  }
  VAR_17.cmd = VAR_3;
  VAR_17.i2c_addr = VAR_8[0].addr;
  VAR_17.addr = VAR_14;
  VAR_17.mbox = VAR_15;
  VAR_17.addr_len = VAR_16;
  VAR_17.data_len = VAR_8[0].len;
  VAR_17.data = &VAR_8[0].buf[0];
  VAR_13 = FUNC_0(VAR_10, &VAR_17);
 } else {
  VAR_13 = -VAR_1;
  FUNC_2(&VAR_12->dev, "unknown msg, num %u\n", VAR_9);
 }
 if (VAR_13)
  goto err;

 return VAR_9;
err:
 FUNC_2(&VAR_12->dev, "failed %d\n", VAR_13);
 return VAR_13;
}
