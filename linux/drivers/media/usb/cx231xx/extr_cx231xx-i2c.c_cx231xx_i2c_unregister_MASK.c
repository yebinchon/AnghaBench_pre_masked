
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx_i2c {int i2c_adap; int i2c_rc; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct cx231xx_i2c *VAR_0)
{
 if (!VAR_0->i2c_rc)
  FUNC_0(&VAR_0->i2c_adap);
}
