
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_port {scalar_t__ idx; struct i2c_client* i2c_client_tuner; struct i2c_client* i2c_client_demod; int **** fe; struct smi_dev* dev; } ;
struct smi_dev {struct i2c_adapter* i2c_bus; } ;
struct si2168_config {int addr; int if_port; struct si2168_config* platform_data; int type; int **** fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct si2157_config {int addr; int if_port; struct si2157_config* platform_data; int type; int **** fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct i2c_client {int dummy; } ;
struct i2c_board_info {int addr; int if_port; struct i2c_board_info* platform_data; int type; int **** fe; int ts_mode; struct i2c_adapter** i2c_adapter; } ;
struct i2c_adapter {int dummy; } ;
typedef int si2168_config ;
typedef int si2157_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct si2168_config*,int ,int) ;
 struct i2c_client* FUNC_1 (struct i2c_adapter*,struct si2168_config*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct smi_port *VAR_3)
{
 int VAR_4 = 0;
 struct smi_dev *VAR_5 = VAR_3->dev;
 struct i2c_adapter *VAR_6;
 struct i2c_adapter *VAR_7;
 struct i2c_client *VAR_8, *VAR_9;
 struct i2c_board_info VAR_10;
 struct si2168_config VAR_11;
 struct si2157_config VAR_12;


 VAR_6 = (VAR_3->idx == 0) ? &VAR_5->i2c_bus[0] : &VAR_5->i2c_bus[1];


 FUNC_0(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.i2c_adapter = &VAR_7;
 VAR_11.fe = VAR_3->fe;
 VAR_11.ts_mode = VAR_2;

 FUNC_0(&VAR_10, 0, sizeof(struct i2c_board_info));
 FUNC_3(VAR_10.type, "si2168", VAR_1);
 VAR_10.addr = 0x64;
 VAR_10.platform_data = &VAR_11;

 VAR_9 = FUNC_1(VAR_6, &VAR_10);
 if (!VAR_9) {
  VAR_4 = -VAR_0;
  return VAR_4;
 }
 VAR_3->i2c_client_demod = VAR_9;


 FUNC_0(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.fe = VAR_3->fe;
 VAR_12.if_port = 1;

 FUNC_0(&VAR_10, 0, sizeof(struct i2c_board_info));
 FUNC_3(VAR_10.type, "si2157", VAR_1);
 VAR_10.addr = 0x60;
 VAR_10.platform_data = &VAR_12;

 VAR_8 = FUNC_1(VAR_7, &VAR_10);
 if (!VAR_8) {
  FUNC_2(VAR_3->i2c_client_demod);
  VAR_3->i2c_client_demod = ((void*)0);
  VAR_4 = -VAR_0;
  return VAR_4;
 }
 VAR_3->i2c_client_tuner = VAR_8;
 return VAR_4;
}
