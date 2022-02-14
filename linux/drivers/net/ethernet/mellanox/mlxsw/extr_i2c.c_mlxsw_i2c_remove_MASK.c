
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct mlxsw_i2c {TYPE_1__ cmd; int core; } ;
struct i2c_client {int dummy; } ;


 struct mlxsw_i2c* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct mlxsw_i2c *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->core, 0);
 FUNC_2(&VAR_1->cmd.lock);

 return 0;
}
