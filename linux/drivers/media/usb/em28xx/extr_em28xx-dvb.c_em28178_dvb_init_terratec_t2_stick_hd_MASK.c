
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si2168_config {int mdev; scalar_t__ if_port; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct si2157_config {int mdev; scalar_t__ if_port; int * fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct i2c_adapter {int dummy; } ;
struct em28xx_dvb {void* i2c_client_demod; void* i2c_client_tuner; int ** fe; } ;
struct em28xx {size_t def_i2c_bus; int media_dev; struct i2c_adapter* i2c_adap; struct em28xx_dvb* dvb; } ;
typedef int si2157_config ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*,char*,struct i2c_adapter*,int,struct si2168_config*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct si2168_config*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_2)
{
 struct em28xx_dvb *VAR_3 = VAR_2->dvb;
 struct i2c_adapter *VAR_4;
 struct si2168_config VAR_5 = {};
 struct si2157_config VAR_6 = {};


 VAR_5.i2c_adapter = &VAR_4;
 VAR_5.fe = VAR_3->fe[0];
 VAR_5.ts_mode = VAR_1;

 VAR_3->i2c_client_demod = FUNC_0("si2168", ((void*)0),
       &VAR_2->i2c_adap[VAR_2->def_i2c_bus],
       0x64, &VAR_5);
 if (!VAR_3->i2c_client_demod)
  return -VAR_0;


 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.fe = VAR_3->fe[0];
 VAR_6.if_port = 0;



 VAR_3->i2c_client_tuner = FUNC_0("si2157", "si2146",
       VAR_4,
       0x60, &VAR_6);
 if (!VAR_3->i2c_client_tuner) {
  FUNC_1(VAR_3->i2c_client_demod);
  return -VAR_0;
 }

 return 0;
}
