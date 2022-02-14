
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct mlxsw_thermal* devdata; } ;
struct mlxsw_thermal {int trips; int core; TYPE_1__* bus_info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (char*,int*,int *,int *) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (struct mlxsw_thermal*,struct thermal_zone_device*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct thermal_zone_device *VAR_2,
      int *VAR_3)
{
 struct mlxsw_thermal *VAR_4 = VAR_2->devdata;
 struct device *VAR_5 = VAR_4->bus_info->dev;
 char VAR_6[VAR_0];
 int VAR_7;
 int VAR_8;

 FUNC_2(VAR_6, 0, 0, 0);

 VAR_8 = FUNC_4(VAR_4->core, FUNC_0(VAR_1), VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_5, "Failed to query temp sensor\n");
  return VAR_8;
 }
 FUNC_3(VAR_6, &VAR_7, ((void*)0), ((void*)0));
 if (VAR_7 > 0)
  FUNC_5(VAR_4, VAR_2, VAR_4->trips,
           VAR_7);

 *VAR_3 = VAR_7;
 return 0;
}
