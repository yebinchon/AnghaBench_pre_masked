
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda10071_platform_data {int clk; int i2c_wr_max; int pll_multiplier; int tuner_i2c_addr; int dvb_frontend; int (* get_dvb_frontend ) (void*) ;int ts_mode; } ;
struct em28xx_dvb {void* i2c_client_demod; void* i2c_client_sec; int * fe; } ;
struct em28xx {size_t def_i2c_bus; int * i2c_adap; struct em28xx_dvb* dvb; } ;
struct a8293_platform_data {int clk; int i2c_wr_max; int pll_multiplier; int tuner_i2c_addr; int dvb_frontend; int (* get_dvb_frontend ) (void*) ;int ts_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,char*,int *,int,struct tda10071_platform_data*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_2)
{
 struct em28xx_dvb *VAR_3 = VAR_2->dvb;
 struct tda10071_platform_data VAR_4 = {};
 struct a8293_platform_data VAR_5 = {};


 VAR_4.clk = 40444000;
 VAR_4.i2c_wr_max = 64;
 VAR_4.ts_mode = VAR_1;
 VAR_4.pll_multiplier = 20;
 VAR_4.tuner_i2c_addr = 0x14;

 VAR_3->i2c_client_demod = FUNC_0("tda10071", "tda10071_cx24118",
       &VAR_2->i2c_adap[VAR_2->def_i2c_bus],
       0x55, &VAR_4);
 if (!VAR_3->i2c_client_demod)
  return -VAR_0;

 VAR_3->fe[0] = VAR_4.get_dvb_frontend(VAR_3->i2c_client_demod);


 VAR_5.dvb_frontend = VAR_3->fe[0];

 VAR_3->i2c_client_sec = FUNC_0("a8293", ((void*)0),
            &VAR_2->i2c_adap[VAR_2->def_i2c_bus],
            0x08, &VAR_5);
 if (!VAR_3->i2c_client_sec) {
  FUNC_1(VAR_3->i2c_client_demod);
  return -VAR_0;
 }

 return 0;
}
