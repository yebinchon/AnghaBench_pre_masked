
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct si2168_config {int ts_clock_inv; int if_port; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct si2157_config {int ts_clock_inv; int if_port; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct i2c_adapter {int dummy; } ;
struct dvbsky_state {void* i2c_client_demod; void* i2c_client_tuner; } ;
struct dvb_usb_device {TYPE_2__* udev; struct i2c_adapter i2c_adap; } ;
struct dvb_usb_adapter {int ** fe; } ;
struct TYPE_3__ {int idProduct; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct dvbsky_state* FUNC_1 (struct dvb_usb_adapter*) ;
 void* FUNC_2 (char*,char*,struct i2c_adapter*,int,struct si2168_config*) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_5)
{
 struct dvbsky_state *VAR_6 = FUNC_1(VAR_5);
 struct dvb_usb_device *VAR_7 = FUNC_0(VAR_5);
 struct i2c_adapter *VAR_8;
 struct si2168_config VAR_9 = {};
 struct si2157_config VAR_10 = {};


 VAR_9.i2c_adapter = &VAR_8;
 VAR_9.fe = VAR_5->fe[0];
 VAR_9.ts_mode = VAR_2;
 if (FUNC_4(VAR_7->udev->descriptor.idProduct) == VAR_4)
  VAR_9.ts_mode |= VAR_1;
 VAR_9.ts_clock_inv = 1;

 VAR_6->i2c_client_demod = FUNC_2("si2168", ((void*)0),
         &VAR_7->i2c_adap,
         0x64, &VAR_9);
 if (!VAR_6->i2c_client_demod)
  return -VAR_0;


 VAR_10.fe = VAR_5->fe[0];
 if (FUNC_4(VAR_7->udev->descriptor.idProduct) == VAR_3) {
  VAR_10.if_port = 1;
  VAR_6->i2c_client_tuner = FUNC_2("si2157", ((void*)0),
          VAR_8,
          0x60,
          &VAR_10);
 } else {
  VAR_10.if_port = 0;
  VAR_6->i2c_client_tuner = FUNC_2("si2157", "si2141",
          VAR_8,
          0x60,
          &VAR_10);
 }
 if (!VAR_6->i2c_client_tuner) {
  FUNC_3(VAR_6->i2c_client_demod);
  return -VAR_0;
 }

 return 0;
}
