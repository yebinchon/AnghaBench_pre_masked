
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_thermctl_zone {TYPE_1__* sg; int reg; } ;
struct TYPE_2__ {int sensor_temp_mask; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, int *VAR_1)
{
 struct tegra_thermctl_zone *VAR_2 = VAR_0;
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2->reg);
 VAR_3 = FUNC_0(VAR_3, VAR_2->sg->sensor_temp_mask);
 *VAR_1 = FUNC_2(VAR_3);

 return 0;
}
