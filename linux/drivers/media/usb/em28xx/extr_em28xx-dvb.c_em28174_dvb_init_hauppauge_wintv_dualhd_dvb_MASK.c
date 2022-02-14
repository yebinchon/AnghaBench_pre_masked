
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si2168_config {int spectral_inversion; int if_port; int mdev; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct si2157_config {int spectral_inversion; int if_port; int mdev; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct i2c_adapter {int dummy; } ;
struct em28xx_dvb {void* i2c_client_demod; void* i2c_client_tuner; int ** fe; } ;
struct em28xx {scalar_t__ ts; size_t def_i2c_bus; int media_dev; struct i2c_adapter* i2c_adap; struct em28xx_dvb* dvb; } ;
typedef int si2157_config ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,int *,struct i2c_adapter*,unsigned char,struct si2168_config*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct si2168_config*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_3)
{
 struct em28xx_dvb *VAR_4 = VAR_3->dvb;
 struct i2c_adapter *VAR_5;
 struct si2168_config VAR_6 = {};
 struct si2157_config VAR_7 = {};
 unsigned char VAR_8;


 VAR_6.i2c_adapter = &VAR_5;
 VAR_6.fe = VAR_4->fe[0];
 VAR_6.ts_mode = VAR_2;
 VAR_6.spectral_inversion = 1;
 VAR_8 = (VAR_3->ts == VAR_1) ? 0x64 : 0x67;

 VAR_4->i2c_client_demod = FUNC_0("si2168", ((void*)0),
       &VAR_3->i2c_adap[VAR_3->def_i2c_bus],
       VAR_8, &VAR_6);
 if (!VAR_4->i2c_client_demod)
  return -VAR_0;


 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.fe = VAR_4->fe[0];
 VAR_7.if_port = 1;



 VAR_8 = (VAR_3->ts == VAR_1) ? 0x60 : 0x63;

 VAR_4->i2c_client_tuner = FUNC_0("si2157", ((void*)0),
       VAR_5,
       VAR_8, &VAR_7);
 if (!VAR_4->i2c_client_tuner) {
  FUNC_1(VAR_4->i2c_client_demod);
  return -VAR_0;
 }

 return 0;
}
