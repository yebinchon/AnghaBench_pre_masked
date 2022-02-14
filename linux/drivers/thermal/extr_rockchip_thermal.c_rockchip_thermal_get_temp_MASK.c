
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_tsadc_chip {int (* get_temp ) (int *,int ,int ,int*) ;int table; } ;
struct rockchip_thermal_sensor {int id; struct rockchip_thermal_data* thermal; } ;
struct rockchip_thermal_data {TYPE_1__* pdev; int regs; struct rockchip_tsadc_chip* chip; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int,int) ;
 int FUNC_1 (int *,int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, int *VAR_1)
{
 struct rockchip_thermal_sensor *VAR_2 = VAR_0;
 struct rockchip_thermal_data *VAR_3 = VAR_2->thermal;
 const struct rockchip_tsadc_chip *VAR_4 = VAR_2->thermal->chip;
 int VAR_5;

 VAR_5 = VAR_4->get_temp(&VAR_4->table,
     VAR_2->id, VAR_3->regs, VAR_1);
 FUNC_0(&VAR_3->pdev->dev, "sensor %d - temp: %d, retval: %d\n",
  VAR_2->id, *VAR_1, VAR_5);

 return VAR_5;
}
