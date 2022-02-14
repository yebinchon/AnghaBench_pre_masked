
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ts2020_config {int clk; int i2c_wr_max; int ts_clk; int agc; int lnb_hv_pol; int lnb_en_pol; int get_agc_pwm; TYPE_3__* fe; struct i2c_adapter* (* get_i2c_adapter ) (void*) ;TYPE_3__* (* get_dvb_frontend ) (void*) ;scalar_t__ ts_clk_pol; int ts_mode; scalar_t__ clk_out; } ;
struct m88ds3103_platform_data {int clk; int i2c_wr_max; int ts_clk; int agc; int lnb_hv_pol; int lnb_en_pol; int get_agc_pwm; TYPE_3__* fe; struct i2c_adapter* (* get_i2c_adapter ) (void*) ;TYPE_3__* (* get_dvb_frontend ) (void*) ;scalar_t__ ts_clk_pol; int ts_mode; scalar_t__ clk_out; } ;
struct i2c_adapter {int dummy; } ;
struct dvbsky_state {int fe_set_voltage; int fe_read_status; void* i2c_client_demod; void* i2c_client_tuner; } ;
struct dvb_usb_device {struct i2c_adapter i2c_adap; } ;
struct dvb_usb_adapter {TYPE_3__** fe; } ;
struct TYPE_4__ {int get_rf_strength; } ;
struct TYPE_5__ {int set_voltage; int read_status; TYPE_1__ tuner_ops; int read_signal_strength; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct dvbsky_state* FUNC_1 (struct dvb_usb_adapter*) ;
 void* FUNC_2 (char*,int *,struct i2c_adapter*,int,struct ts2020_config*) ;
 int FUNC_3 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_4 (void*) ;
 struct i2c_adapter* FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_adapter *VAR_5)
{
 struct dvbsky_state *VAR_6 = FUNC_1(VAR_5);
 struct dvb_usb_device *VAR_7 = FUNC_0(VAR_5);
 struct i2c_adapter *VAR_8;
 struct m88ds3103_platform_data VAR_9 = {};
 struct ts2020_config VAR_10 = {};


 VAR_9.clk = 27000000;
 VAR_9.i2c_wr_max = 33;
 VAR_9.clk_out = 0;
 VAR_9.ts_mode = VAR_1;
 VAR_9.ts_clk = 16000;
 VAR_9.ts_clk_pol = 0;
 VAR_9.agc = 0x99;
 VAR_9.lnb_hv_pol = 1,
 VAR_9.lnb_en_pol = 1,

 VAR_6->i2c_client_demod = FUNC_2("m88ds3103", ((void*)0),
         &VAR_7->i2c_adap,
         0x68, &VAR_9);
 if (!VAR_6->i2c_client_demod)
  return -VAR_0;

 VAR_5->fe[0] = VAR_9.get_dvb_frontend(VAR_6->i2c_client_demod);
 VAR_8 = VAR_9.get_i2c_adapter(VAR_6->i2c_client_demod);


 VAR_10.fe = VAR_5->fe[0];
 VAR_10.get_agc_pwm = VAR_4;

 VAR_6->i2c_client_tuner = FUNC_2("ts2020", ((void*)0),
         VAR_8,
         0x60, &VAR_10);
 if (!VAR_6->i2c_client_tuner) {
  FUNC_3(VAR_6->i2c_client_demod);
  return -VAR_0;
 }


 VAR_5->fe[0]->ops.read_signal_strength =
   VAR_5->fe[0]->ops.tuner_ops.get_rf_strength;


 VAR_6->fe_read_status = VAR_5->fe[0]->ops.read_status;
 VAR_5->fe[0]->ops.read_status = VAR_2;


 VAR_6->fe_set_voltage = VAR_5->fe[0]->ops.set_voltage;
 VAR_5->fe[0]->ops.set_voltage = VAR_3;

 return 0;
}
