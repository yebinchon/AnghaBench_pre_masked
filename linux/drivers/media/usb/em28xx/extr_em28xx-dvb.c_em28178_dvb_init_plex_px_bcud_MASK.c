
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc90522_config {int lpf; int fe; int * tuner_i2c; } ;
struct qm1d1c0042_config {int lpf; int fe; int * tuner_i2c; } ;
struct em28xx_dvb {int * fe; void* i2c_client_demod; void* i2c_client_tuner; } ;
struct em28xx {size_t def_i2c_bus; int * i2c_adap; struct em28xx_dvb* dvb; } ;


 int VAR_0 ;
 void* FUNC_0 (char*,char*,int *,int,struct tc90522_config*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct em28xx*) ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_1)
{
 struct em28xx_dvb *VAR_2 = VAR_1->dvb;
 struct tc90522_config VAR_3 = {};
 struct qm1d1c0042_config VAR_4 = {};


 VAR_2->i2c_client_demod = FUNC_0("tc90522", "tc90522sat",
       &VAR_1->i2c_adap[VAR_1->def_i2c_bus],
       0x15, &VAR_3);
 if (!VAR_2->i2c_client_demod)
  return -VAR_0;


 VAR_4.fe = VAR_3.fe;
 VAR_4.lpf = 1;

 VAR_2->i2c_client_tuner = FUNC_0("qm1d1c0042", ((void*)0),
       VAR_3.tuner_i2c,
       0x61, &VAR_4);
 if (!VAR_2->i2c_client_tuner) {
  FUNC_1(VAR_2->i2c_client_demod);
  return -VAR_0;
 }

 VAR_2->fe[0] = VAR_3.fe;
 FUNC_2(VAR_1);

 return 0;
}
