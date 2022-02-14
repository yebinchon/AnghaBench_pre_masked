
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ts2020_config {int clk; int i2c_wr_max; int ts_clk; int ts_clk_pol; int agc; TYPE_3__* dvb_frontend; TYPE_3__* fe; struct i2c_adapter* (* get_i2c_adapter ) (void*) ;TYPE_3__* (* get_dvb_frontend ) (void*) ;int ts_mode; } ;
struct m88ds3103_platform_data {int clk; int i2c_wr_max; int ts_clk; int ts_clk_pol; int agc; TYPE_3__* dvb_frontend; TYPE_3__* fe; struct i2c_adapter* (* get_i2c_adapter ) (void*) ;TYPE_3__* (* get_dvb_frontend ) (void*) ;int ts_mode; } ;
struct i2c_adapter {int dummy; } ;
struct em28xx_dvb {void* i2c_client_demod; void* i2c_client_tuner; void* i2c_client_sec; TYPE_3__** fe; } ;
struct em28xx {size_t def_i2c_bus; struct i2c_adapter* i2c_adap; struct em28xx_dvb* dvb; } ;
struct a8293_platform_data {int clk; int i2c_wr_max; int ts_clk; int ts_clk_pol; int agc; TYPE_3__* dvb_frontend; TYPE_3__* fe; struct i2c_adapter* (* get_i2c_adapter ) (void*) ;TYPE_3__* (* get_dvb_frontend ) (void*) ;int ts_mode; } ;
struct TYPE_4__ {int get_rf_strength; } ;
struct TYPE_5__ {TYPE_1__ tuner_ops; int read_signal_strength; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,char*,struct i2c_adapter*,int,struct ts2020_config*) ;
 int FUNC_1 (void*) ;
 TYPE_3__* FUNC_2 (void*) ;
 struct i2c_adapter* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct em28xx *VAR_2)
{
 struct em28xx_dvb *VAR_3 = VAR_2->dvb;
 struct i2c_adapter *VAR_4;
 struct m88ds3103_platform_data VAR_5 = {};
 struct ts2020_config VAR_6 = {};
 struct a8293_platform_data VAR_7 = {};


 VAR_5.clk = 27000000;
 VAR_5.i2c_wr_max = 33;
 VAR_5.ts_mode = VAR_1;
 VAR_5.ts_clk = 16000;
 VAR_5.ts_clk_pol = 1;
 VAR_5.agc = 0x99;

 VAR_3->i2c_client_demod = FUNC_0("m88ds3103", ((void*)0),
       &VAR_2->i2c_adap[VAR_2->def_i2c_bus],
       0x68, &VAR_5);
 if (!VAR_3->i2c_client_demod)
  return -VAR_0;

 VAR_3->fe[0] = VAR_5.get_dvb_frontend(VAR_3->i2c_client_demod);
 VAR_4 = VAR_5.get_i2c_adapter(VAR_3->i2c_client_demod);


 VAR_6.fe = VAR_3->fe[0];

 VAR_3->i2c_client_tuner = FUNC_0("ts2020", "ts2022",
       VAR_4,
       0x60, &VAR_6);
 if (!VAR_3->i2c_client_tuner) {
  FUNC_1(VAR_3->i2c_client_demod);
  return -VAR_0;
 }


 VAR_3->fe[0]->ops.read_signal_strength =
   VAR_3->fe[0]->ops.tuner_ops.get_rf_strength;


 VAR_7.dvb_frontend = VAR_3->fe[0];
 VAR_3->i2c_client_sec = FUNC_0("a8293", ((void*)0),
            &VAR_2->i2c_adap[VAR_2->def_i2c_bus],
            0x08, &VAR_7);
 if (!VAR_3->i2c_client_sec) {
  FUNC_1(VAR_3->i2c_client_tuner);
  FUNC_1(VAR_3->i2c_client_demod);
  return -VAR_0;
 }

 return 0;
}
