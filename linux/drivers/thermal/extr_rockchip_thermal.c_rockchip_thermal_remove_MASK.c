
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_thermal_sensor {int dummy; } ;
struct rockchip_thermal_data {int clk; int pclk; int regs; TYPE_1__* chip; struct rockchip_thermal_sensor* sensors; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int chn_num; int (* control ) (int ,int) ;} ;


 int FUNC_0 (int ) ;
 struct rockchip_thermal_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct rockchip_thermal_sensor*,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct rockchip_thermal_data *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->chip->chn_num; VAR_2++) {
  struct rockchip_thermal_sensor *VAR_3 = &VAR_1->sensors[VAR_2];

  FUNC_2(VAR_3, 0);
 }

 VAR_1->chip->control(VAR_1->regs, 0);

 FUNC_0(VAR_1->pclk);
 FUNC_0(VAR_1->clk);

 return 0;
}
