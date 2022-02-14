
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_thermal_module {TYPE_1__* trips; int module; } ;
struct mlxsw_core {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int temp; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mlxsw_core*,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct device *VAR_7, struct mlxsw_core *VAR_8,
      struct mlxsw_thermal_module *VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_8, VAR_9->module,
         VAR_6,
         &VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_8, VAR_9->module,
         VAR_5,
         &VAR_11);
 if (VAR_12)
  return VAR_12;
 if (VAR_10 >= VAR_0)
  VAR_9->trips[VAR_4].temp = VAR_10 -
     VAR_0;
 else
  VAR_9->trips[VAR_4].temp = VAR_10;
 VAR_9->trips[VAR_2].temp = VAR_10;
 VAR_9->trips[VAR_3].temp = VAR_11;
 if (VAR_11 > VAR_10)
  VAR_9->trips[VAR_1].temp = VAR_11 +
     VAR_0;
 else
  VAR_9->trips[VAR_1].temp = VAR_11;

 return 0;
}
