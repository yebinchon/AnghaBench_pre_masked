
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si2168_config {int ts_clock_gapped; int if_port; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct si2157_config {int ts_clock_gapped; int if_port; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct i2c_adapter {int dummy; } ;
struct dvbsky_state {void* i2c_client_demod; void* i2c_client_tuner; } ;
struct dvb_usb_device {struct i2c_adapter i2c_adap; } ;
struct dvb_usb_adapter {int ** fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct dvbsky_state* FUNC_1 (struct dvb_usb_adapter*) ;
 void* FUNC_2 (char*,int *,struct i2c_adapter*,int,struct si2168_config*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_2)
{
 struct dvbsky_state *VAR_3 = FUNC_1(VAR_2);
 struct dvb_usb_device *VAR_4 = FUNC_0(VAR_2);
 struct i2c_adapter *VAR_5;
 struct si2168_config VAR_6 = {};
 struct si2157_config VAR_7 = {};


 VAR_6.i2c_adapter = &VAR_5;
 VAR_6.fe = VAR_2->fe[0];
 VAR_6.ts_mode = VAR_1;
 VAR_6.ts_clock_gapped = 1;

 VAR_3->i2c_client_demod = FUNC_2("si2168", ((void*)0),
         &VAR_4->i2c_adap,
         0x64, &VAR_6);
 if (!VAR_3->i2c_client_demod)
  return -VAR_0;


 VAR_7.fe = VAR_2->fe[0];
 VAR_7.if_port = 1;

 VAR_3->i2c_client_tuner = FUNC_2("si2157", ((void*)0),
         VAR_5,
         0x60, &VAR_7);
 if (!VAR_3->i2c_client_tuner) {
  FUNC_3(VAR_3->i2c_client_demod);
  return -VAR_0;
 }

 return 0;
}
