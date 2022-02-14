
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct cx231xx {TYPE_2__* muxc; TYPE_1__* i2c_bus; } ;
struct TYPE_4__ {struct i2c_adapter** adapter; } ;
struct TYPE_3__ {struct i2c_adapter i2c_adap; } ;


 int FUNC_0 () ;






struct i2c_adapter *FUNC_1(struct cx231xx *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 132:
  return &VAR_0->i2c_bus[0].i2c_adap;
 case 131:
  return &VAR_0->i2c_bus[1].i2c_adap;
 case 128:
  return &VAR_0->i2c_bus[2].i2c_adap;
 case 130:
  return VAR_0->muxc->adapter[0];
 case 129:
  return VAR_0->muxc->adapter[1];
 default:
  FUNC_0();
 }
}
