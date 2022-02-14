
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct si2168_config {int spectral_inversion; int if_port; int mdev; TYPE_2__* fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct si2157_config {int spectral_inversion; int if_port; int mdev; TYPE_2__* fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct i2c_adapter {int dummy; } ;
struct em28xx_dvb {TYPE_2__** fe; void* i2c_client_demod; void* i2c_client_tuner; } ;
struct em28xx {size_t def_i2c_bus; int media_dev; struct i2c_adapter* i2c_adap; struct em28xx_dvb* dvb; } ;
struct TYPE_3__ {int set_lna; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,int *,struct i2c_adapter*,int,struct si2168_config*) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_3)
{
 struct em28xx_dvb *VAR_4 = VAR_3->dvb;
 struct i2c_adapter *VAR_5;
 struct si2168_config VAR_6 = {};
 struct si2157_config VAR_7 = {};


 VAR_6.i2c_adapter = &VAR_5;
 VAR_6.fe = VAR_4->fe[0];
 VAR_6.ts_mode = VAR_1;
 VAR_6.spectral_inversion = 1;

 VAR_4->i2c_client_demod = FUNC_0("si2168", ((void*)0),
       &VAR_3->i2c_adap[VAR_3->def_i2c_bus],
       0x64, &VAR_6);
 if (!VAR_4->i2c_client_demod)
  return -VAR_0;


 VAR_7.fe = VAR_4->fe[0];
 VAR_7.if_port = 1;



 VAR_4->i2c_client_tuner = FUNC_0("si2157", ((void*)0),
       VAR_5,
       0x60, &VAR_7);
 if (!VAR_4->i2c_client_tuner) {
  FUNC_1(VAR_4->i2c_client_demod);
  return -VAR_0;
 }
 VAR_4->fe[0]->ops.set_lna = VAR_2;

 return 0;
}
