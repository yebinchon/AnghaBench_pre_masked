
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int addr; int* buf; int len; } ;
struct i2c_adapter {int dummy; } ;
struct dw2102_state {int* data; } ;
struct dvb_usb_device {int i2c_mutex; int data_mutex; struct dw2102_state* priv; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int,int ) ;
 int FUNC_1 (char*) ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int*,int*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_3, struct i2c_msg VAR_4[],
        int VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_2(VAR_3);
 struct dw2102_state *VAR_7;

 if (!VAR_6)
  return -VAR_1;

 VAR_7 = VAR_6->priv;

 if (FUNC_4(&VAR_6->i2c_mutex) < 0)
  return -VAR_0;
 if (FUNC_4(&VAR_6->data_mutex) < 0) {
  FUNC_5(&VAR_6->i2c_mutex);
  return -VAR_0;
 }

 switch (VAR_5) {
 case 1:
  switch (VAR_4[0].addr) {
  case 128:
   VAR_7->data[0] = VAR_4[0].buf[0] + 0x36;
   VAR_7->data[1] = 3;
   VAR_7->data[2] = 0;
   if (FUNC_0(VAR_6, VAR_7->data, 3,
     VAR_7->data, 0, 0) < 0)
    FUNC_1("i2c transfer failed.");
   break;
  case 129:
   VAR_7->data[0] = 0x10;
   if (FUNC_0(VAR_6, VAR_7->data, 1,
     VAR_7->data, 2, 0) < 0)
    FUNC_1("i2c transfer failed.");
   VAR_4[0].buf[1] = VAR_7->data[0];
   VAR_4[0].buf[0] = VAR_7->data[1];
   break;
  default:
   if (3 + VAR_4[0].len > sizeof(VAR_7->data)) {
    FUNC_6("i2c wr: len=%d is too big!\n",
         VAR_4[0].len);
    VAR_5 = -VAR_2;
    break;
   }


   VAR_7->data[0] = 0x08;
   VAR_7->data[1] = VAR_4[0].addr;
   VAR_7->data[2] = VAR_4[0].len;

   FUNC_3(&VAR_7->data[3], VAR_4[0].buf, VAR_4[0].len);

   if (FUNC_0(VAR_6, VAR_7->data, VAR_4[0].len + 3,
      VAR_7->data, 1, 0) < 0)
    FUNC_1("i2c transfer failed.");

  }
  break;
 case 2:

  if (4 + VAR_4[0].len > sizeof(VAR_7->data)) {
   FUNC_6("i2c rd: len=%d is too big!\n",
        VAR_4[0].len);
   VAR_5 = -VAR_2;
   break;
  }
  if (1 + VAR_4[1].len > sizeof(VAR_7->data)) {
   FUNC_6("i2c rd: len=%d is too big!\n",
        VAR_4[1].len);
   VAR_5 = -VAR_2;
   break;
  }

  VAR_7->data[0] = 0x09;
  VAR_7->data[1] = VAR_4[0].len;
  VAR_7->data[2] = VAR_4[1].len;
  VAR_7->data[3] = VAR_4[0].addr;
  FUNC_3(&VAR_7->data[4], VAR_4[0].buf, VAR_4[0].len);

  if (FUNC_0(VAR_6, VAR_7->data, VAR_4[0].len + 4,
     VAR_7->data, VAR_4[1].len + 1, 0) < 0)
   FUNC_1("i2c transfer failed.");

  FUNC_3(VAR_4[1].buf, &VAR_7->data[1], VAR_4[1].len);
  break;
 default:
  FUNC_6("more than 2 i2c messages at a time is not handled yet.");
  break;
 }
 FUNC_5(&VAR_6->data_mutex);
 FUNC_5(&VAR_6->i2c_mutex);
 return VAR_5;
}
