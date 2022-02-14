
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct i2c_board_info {int addr; int type; } ;
struct friio_priv {struct i2c_client* i2c_client_tuner; int demod_sub_i2c; } ;
struct dvb_usb_adapter {int * fe; } ;
struct dvb_pll_config {int fe; } ;
struct TYPE_2__ {struct dvb_pll_config tuner_cfg; struct i2c_board_info tuner_info; } ;


 int VAR_0 ;
 struct friio_priv* FUNC_0 (struct dvb_usb_adapter*) ;
 struct i2c_client* FUNC_1 (char*,int ,int ,int ,struct dvb_pll_config*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_adapter *VAR_2)
{
 const struct i2c_board_info *VAR_3;
 struct dvb_pll_config VAR_4;
 struct i2c_client *VAR_5;
 struct friio_priv *VAR_6;

 VAR_6 = FUNC_0(VAR_2);
 VAR_3 = &VAR_1.tuner_info;
 VAR_4 = VAR_1.tuner_cfg;
 VAR_4.fe = VAR_2->fe[0];

 VAR_5 = FUNC_1("dvb_pll", VAR_3->type,
         VAR_6->demod_sub_i2c, VAR_3->addr, &VAR_4);
 if (!VAR_5)
  return -VAR_0;
 VAR_6->i2c_client_tuner = VAR_5;
 return 0;
}
