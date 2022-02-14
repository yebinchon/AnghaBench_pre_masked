
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_thermal_sensor {int clk; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* power_ctrl ) (struct st_thermal_sensor*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct st_thermal_sensor*,int ) ;

__attribute__((used)) static int FUNC_2(struct st_thermal_sensor *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->ops->power_ctrl(VAR_1, VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1->clk);

 return 0;
}
