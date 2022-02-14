
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {struct dib0700_state* priv; } ;
struct dib0700_state {int fw_use_new_i2c_api; } ;


 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_0, struct i2c_msg *VAR_1,
       int VAR_2)
{
 struct dvb_usb_device *VAR_3 = FUNC_2(VAR_0);
 struct dib0700_state *VAR_4 = VAR_3->priv;

 if (VAR_4->fw_use_new_i2c_api == 1) {

  return FUNC_1(VAR_0, VAR_1, VAR_2);
 } else {

  return FUNC_0(VAR_0, VAR_1, VAR_2);
 }
}
