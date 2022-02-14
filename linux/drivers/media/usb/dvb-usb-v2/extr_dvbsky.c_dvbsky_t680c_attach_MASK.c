
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp2_config {int if_port; int ci_control; struct dvb_usb_device* priv; int * dvb_adap; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct si2168_config {int if_port; int ci_control; struct dvb_usb_device* priv; int * dvb_adap; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct si2157_config {int if_port; int ci_control; struct dvb_usb_device* priv; int * dvb_adap; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct i2c_adapter {int dummy; } ;
struct dvbsky_state {void* i2c_client_demod; void* i2c_client_tuner; void* i2c_client_ci; } ;
struct dvb_usb_device {struct i2c_adapter i2c_adap; } ;
struct dvb_usb_adapter {int dvb_adap; int ** fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct dvbsky_state* FUNC_1 (struct dvb_usb_adapter*) ;
 void* FUNC_2 (char*,int *,struct i2c_adapter*,int,struct sp2_config*) ;
 int FUNC_3 (void*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_3)
{
 struct dvbsky_state *VAR_4 = FUNC_1(VAR_3);
 struct dvb_usb_device *VAR_5 = FUNC_0(VAR_3);
 struct i2c_adapter *VAR_6;
 struct si2168_config VAR_7 = {};
 struct si2157_config VAR_8 = {};
 struct sp2_config VAR_9 = {};


 VAR_7.i2c_adapter = &VAR_6;
 VAR_7.fe = VAR_3->fe[0];
 VAR_7.ts_mode = VAR_1;

 VAR_4->i2c_client_demod = FUNC_2("si2168", ((void*)0),
         &VAR_5->i2c_adap,
         0x64, &VAR_7);
 if (!VAR_4->i2c_client_demod)
  return -VAR_0;


 VAR_8.fe = VAR_3->fe[0];
 VAR_8.if_port = 1;

 VAR_4->i2c_client_tuner = FUNC_2("si2157", ((void*)0),
         VAR_6,
         0x60, &VAR_8);
 if (!VAR_4->i2c_client_tuner) {
  FUNC_3(VAR_4->i2c_client_demod);
  return -VAR_0;
 }


 VAR_9.dvb_adap = &VAR_3->dvb_adap;
 VAR_9.priv = VAR_5;
 VAR_9.ci_control = VAR_2;

 VAR_4->i2c_client_ci = FUNC_2("sp2", ((void*)0),
      &VAR_5->i2c_adap,
      0x40, &VAR_9);

 if (!VAR_4->i2c_client_ci) {
  FUNC_3(VAR_4->i2c_client_tuner);
  FUNC_3(VAR_4->i2c_client_demod);
  return -VAR_0;
 }

 return 0;
}
