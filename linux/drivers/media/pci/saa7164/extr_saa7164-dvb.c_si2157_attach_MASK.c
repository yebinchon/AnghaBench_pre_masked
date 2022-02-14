
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct si2157_config {struct dvb_frontend* fe; } ;
struct saa7164_port {struct i2c_client* i2c_client_tuner; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct i2c_board_info {int addr; int type; struct si2157_config* platform_data; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {int dummy; } ;
typedef int bi ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct i2c_client* FUNC_0 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_board_info*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct saa7164_port *VAR_2, struct i2c_adapter *VAR_3,
 struct dvb_frontend *VAR_4, u8 VAR_5, struct si2157_config *VAR_6)
{
 struct i2c_board_info VAR_7;
 struct i2c_client *VAR_8;

 VAR_6->fe = VAR_4;

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));

 FUNC_4(VAR_7.type, "si2157", VAR_1);
 VAR_7.platform_data = VAR_6;
 VAR_7.addr = VAR_5 >> 1;

 FUNC_3(VAR_7.type);

 VAR_8 = FUNC_0(VAR_3, &VAR_7);
 if (VAR_8 == ((void*)0) || VAR_8->dev.driver == ((void*)0))
  return -VAR_0;

 if (!FUNC_5(VAR_8->dev.driver->owner)) {
  FUNC_1(VAR_8);
  return -VAR_0;
 }

 VAR_2->i2c_client_tuner = VAR_8;

 return 0;
}
