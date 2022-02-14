
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int addr; int flags; int len; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; TYPE_2__* udev; } ;
typedef int obuf ;
typedef int ibuf ;
struct TYPE_3__ {int idVendor; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct dvb_usb_device*,int ,int*,int,int*,int) ;
 int FUNC_1 (struct dvb_usb_device*,int) ;
 int FUNC_2 (char*) ;
 struct dvb_usb_device* FUNC_3 (struct i2c_adapter*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int*,int*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int FUNC_9(struct i2c_adapter *VAR_8, struct i2c_msg VAR_9[],
     int VAR_10)
{
 struct dvb_usb_device *VAR_11 = FUNC_3(VAR_8);
 int VAR_12;
 int VAR_13;

 if (FUNC_6(&VAR_11->i2c_mutex) < 0)
  return -VAR_2;

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  if (FUNC_4(VAR_11->udev->descriptor.idVendor) == VAR_7)
   switch (VAR_9[VAR_13].addr) {
   case 0x63:
    FUNC_1(VAR_11, 0);
    break;
   default:
    FUNC_1(VAR_11, 1);
    break;
   }

  if (VAR_9[VAR_13].flags & VAR_5) {

   u8 VAR_14[3], VAR_15[VAR_6];

   if (1 + VAR_9[VAR_13].len > sizeof(VAR_15)) {
    FUNC_8("i2c rd: len=%d is too big!\n",
         VAR_9[VAR_13].len);
    VAR_12 = -VAR_3;
    goto unlock;
   }
   VAR_14[0] = 0;
   VAR_14[1] = VAR_9[VAR_13].len;
   VAR_14[2] = VAR_9[VAR_13].addr;
   if (FUNC_0(VAR_11, VAR_0,
        VAR_14, 3,
        VAR_15, 1 + VAR_9[VAR_13].len) < 0) {
    FUNC_8("i2c read failed");
    break;
   }
   FUNC_5(VAR_9[VAR_13].buf, &VAR_15[1], VAR_9[VAR_13].len);
  } else if (VAR_13 + 1 < VAR_10 && (VAR_9[VAR_13 + 1].flags & VAR_5) &&
      VAR_9[VAR_13].addr == VAR_9[VAR_13 + 1].addr) {

   u8 VAR_16[VAR_6], VAR_17[VAR_6];

   if (3 + VAR_9[VAR_13].len > sizeof(VAR_16)) {
    FUNC_8("i2c wr: len=%d is too big!\n",
         VAR_9[VAR_13].len);
    VAR_12 = -VAR_3;
    goto unlock;
   }
   if (1 + VAR_9[VAR_13 + 1].len > sizeof(VAR_17)) {
    FUNC_8("i2c rd: len=%d is too big!\n",
         VAR_9[VAR_13 + 1].len);
    VAR_12 = -VAR_3;
    goto unlock;
   }
   VAR_16[0] = VAR_9[VAR_13].len;
   VAR_16[1] = VAR_9[VAR_13 + 1].len;
   VAR_16[2] = VAR_9[VAR_13].addr;
   FUNC_5(&VAR_16[3], VAR_9[VAR_13].buf, VAR_9[VAR_13].len);

   if (FUNC_0(VAR_11, VAR_0,
        VAR_16, 3 + VAR_9[VAR_13].len,
        VAR_17, 1 + VAR_9[VAR_13 + 1].len) < 0)
    break;

   if (VAR_17[0] != 0x08)
    FUNC_2("i2c read may have failed\n");

   FUNC_5(VAR_9[VAR_13 + 1].buf, &VAR_17[1], VAR_9[VAR_13 + 1].len);

   VAR_13++;
  } else {

   u8 VAR_18[VAR_6], VAR_19;

   if (2 + VAR_9[VAR_13].len > sizeof(VAR_18)) {
    FUNC_8("i2c wr: len=%d is too big!\n",
         VAR_9[VAR_13].len);
    VAR_12 = -VAR_3;
    goto unlock;
   }
   VAR_18[0] = VAR_9[VAR_13].addr;
   VAR_18[1] = VAR_9[VAR_13].len;
   FUNC_5(&VAR_18[2], VAR_9[VAR_13].buf, VAR_9[VAR_13].len);

   if (FUNC_0(VAR_11, VAR_1, VAR_18,
        2 + VAR_9[VAR_13].len, &VAR_19, 1) < 0)
    break;
   if (VAR_19 != 0x08)
    FUNC_2("i2c write may have failed\n");
  }
 }

 if (VAR_13 == VAR_10)
  VAR_12 = VAR_10;
 else
  VAR_12 = -VAR_4;

unlock:
 FUNC_7(&VAR_11->i2c_mutex);
 return VAR_12;
}
