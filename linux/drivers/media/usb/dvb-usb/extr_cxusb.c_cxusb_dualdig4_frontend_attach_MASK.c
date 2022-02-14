
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_usb_adapter {TYPE_5__* dev; TYPE_1__* fe_adap; } ;
struct TYPE_9__ {int * rc_codes; } ;
struct TYPE_10__ {TYPE_2__ core; } ;
struct TYPE_11__ {TYPE_3__ rc; } ;
struct TYPE_12__ {TYPE_4__ props; int i2c_adap; int udev; } ;
struct TYPE_8__ {int fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int,int) ;
 int FUNC_1 (TYPE_5__*,int,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int *,int ,int *,int ) ;
 int FUNC_3 (int *,struct i2c_msg*,int) ;
 int VAR_3 ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct dvb_usb_adapter *VAR_5)
{
 u8 VAR_6[4];
 int VAR_7;
 struct i2c_msg VAR_8 = {
  .addr = 0x6b,
  .flags = VAR_2,
  .buf = VAR_6,
  .len = 4
 };

 if (FUNC_8(VAR_5->dev->udev, 0, 1) < 0)
  FUNC_5("set interface failed");

 FUNC_2(VAR_5->dev, VAR_0, ((void*)0), 0, ((void*)0), 0);


 FUNC_1(VAR_5->dev, 0x04, 0);
 FUNC_0(VAR_5->dev, 0x01, 1);
 FUNC_0(VAR_5->dev, 0x02, 1);

 VAR_5->fe_adap[0].fe =
  FUNC_4(VAR_4,
      &VAR_3,
      &VAR_5->dev->i2c_adap);
 if (!VAR_5->fe_adap[0].fe)
  return -VAR_1;


 for (VAR_7 = 0; VAR_5->dev->props.rc.core.rc_codes && VAR_7 < 5; VAR_7++) {
  FUNC_7(20);
  if (FUNC_3(&VAR_5->dev->i2c_adap, &VAR_8, 1) != 1)
   goto no_IR;
  if (VAR_6[0] == 0 && VAR_6[1] == 0)
   continue;
  if (VAR_6[2] + VAR_6[3] != 0xff) {
no_IR:
   VAR_5->dev->props.rc.core.rc_codes = ((void*)0);
   FUNC_6("No IR receiver detected on this device.");
   break;
  }
 }

 return 0;
}
