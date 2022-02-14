
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct i2c_multi_inst_data {int num_clients; int * clients; } ;


 int FUNC_0 (int ) ;
 struct i2c_multi_inst_data* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct i2c_multi_inst_data *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_clients; VAR_2++)
  FUNC_0(VAR_1->clients[VAR_2]);

 return 0;
}
