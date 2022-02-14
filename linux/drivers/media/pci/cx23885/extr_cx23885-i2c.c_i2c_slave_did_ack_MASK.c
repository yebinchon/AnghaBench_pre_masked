
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {struct cx23885_i2c* algo_data; } ;
struct cx23885_i2c {int reg_stat; struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct i2c_adapter *VAR_0)
{
 struct cx23885_i2c *VAR_1 = VAR_0->algo_data;
 struct cx23885_dev *VAR_2 = VAR_1->dev;
 return FUNC_0(VAR_1->reg_stat) & 0x01;
}
