
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int flags; int addr; int* buf; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_mutex; TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int,int*,int) ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int*,int*,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_3, struct i2c_msg VAR_4[],
 int VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = 0;
 u8 VAR_8[64], VAR_9[64];

 if (FUNC_4(&VAR_6->i2c_mutex) < 0)
  return -VAR_0;

 if (VAR_5 > 2) {
  FUNC_0(&VAR_6->udev->dev,
  "too many i2c messages[%d], max 2.", VAR_5);
  VAR_7 = -VAR_1;
  goto i2c_error;
 }

 if (VAR_5 == 1) {
  if (VAR_4[0].len > 60) {
   FUNC_0(&VAR_6->udev->dev,
   "too many i2c bytes[%d], max 60.",
   VAR_4[0].len);
   VAR_7 = -VAR_1;
   goto i2c_error;
  }
  if (VAR_4[0].flags & VAR_2) {

   VAR_9[0] = 0x09;
   VAR_9[1] = 0;
   VAR_9[2] = VAR_4[0].len;
   VAR_9[3] = VAR_4[0].addr;
   VAR_7 = FUNC_1(VAR_6, VAR_9, 4,
     VAR_8, VAR_4[0].len + 1);
   if (!VAR_7)
    FUNC_3(VAR_4[0].buf, &VAR_8[1], VAR_4[0].len);
  } else {

   VAR_9[0] = 0x08;
   VAR_9[1] = VAR_4[0].addr;
   VAR_9[2] = VAR_4[0].len;
   FUNC_3(&VAR_9[3], VAR_4[0].buf, VAR_4[0].len);
   VAR_7 = FUNC_1(VAR_6, VAR_9,
     VAR_4[0].len + 3, VAR_8, 1);
  }
 } else {
  if ((VAR_4[0].len > 60) || (VAR_4[1].len > 60)) {
   FUNC_0(&VAR_6->udev->dev,
   "too many i2c bytes[w-%d][r-%d], max 60.",
   VAR_4[0].len, VAR_4[1].len);
   VAR_7 = -VAR_1;
   goto i2c_error;
  }

  VAR_9[0] = 0x09;
  VAR_9[1] = VAR_4[0].len;
  VAR_9[2] = VAR_4[1].len;
  VAR_9[3] = VAR_4[0].addr;
  FUNC_3(&VAR_9[4], VAR_4[0].buf, VAR_4[0].len);
  VAR_7 = FUNC_1(VAR_6, VAR_9,
   VAR_4[0].len + 4, VAR_8, VAR_4[1].len + 1);
  if (!VAR_7)
   FUNC_3(VAR_4[1].buf, &VAR_8[1], VAR_4[1].len);
 }
i2c_error:
 FUNC_5(&VAR_6->i2c_mutex);
 return (VAR_7) ? VAR_7 : VAR_5;
}
