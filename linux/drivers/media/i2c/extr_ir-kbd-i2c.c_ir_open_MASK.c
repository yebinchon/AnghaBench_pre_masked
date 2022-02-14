
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct IR_i2c* priv; } ;
struct IR_i2c {int work; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_0)
{
 struct IR_i2c *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_1->work, 0);

 return 0;
}
