
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smi_port {scalar_t__ idx; TYPE_3__* fe; struct i2c_client* i2c_client_tuner; struct smi_dev* dev; } ;
struct smi_dev {struct i2c_adapter* i2c_bus; } ;
struct m88rs6000t_config {TYPE_3__* fe; } ;
struct i2c_client {int dummy; } ;
struct i2c_board_info {int addr; struct m88rs6000t_config* platform_data; int type; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_5__ {int get_rf_strength; } ;
struct TYPE_6__ {TYPE_1__ tuner_ops; int read_signal_strength; } ;
struct TYPE_7__ {TYPE_2__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ,int *,struct i2c_adapter*,struct i2c_adapter**) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_2 (struct i2c_board_info*,int ,int) ;
 struct i2c_client* FUNC_3 (struct i2c_adapter*,struct i2c_board_info*) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct smi_port *VAR_4)
{
 int VAR_5 = 0;
 struct smi_dev *VAR_6 = VAR_4->dev;
 struct i2c_adapter *VAR_7;

 struct i2c_adapter *VAR_8;
 struct i2c_client *VAR_9;
 struct i2c_board_info VAR_10;
 struct m88rs6000t_config VAR_11;

 FUNC_2(&VAR_10, 0, sizeof(struct i2c_board_info));
 VAR_7 = (VAR_4->idx == 0) ? &VAR_6->i2c_bus[0] : &VAR_6->i2c_bus[1];


 VAR_4->fe = FUNC_0(VAR_2,
   &VAR_3, VAR_7, &VAR_8);
 if (!VAR_4->fe) {
  VAR_5 = -VAR_0;
  return VAR_5;
 }

 VAR_11.fe = VAR_4->fe;
 FUNC_4(VAR_10.type, "m88rs6000t", VAR_1);
 VAR_10.addr = 0x21;
 VAR_10.platform_data = &VAR_11;
 VAR_9 = FUNC_3(VAR_8, &VAR_10);
 if (!VAR_9) {
  VAR_5 = -VAR_0;
  goto err_tuner_i2c_device;
 }


 VAR_4->fe->ops.read_signal_strength =
   VAR_4->fe->ops.tuner_ops.get_rf_strength;

 VAR_4->i2c_client_tuner = VAR_9;
 return VAR_5;

err_tuner_i2c_device:
 FUNC_1(VAR_4->fe);
 return VAR_5;
}
