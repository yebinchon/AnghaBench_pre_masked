
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct thermal_cooling_device {struct mlxsw_thermal* devdata; } ;
struct mlxsw_thermal {int core; TYPE_1__* bus_info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_1 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct mlxsw_thermal*,struct thermal_cooling_device*) ;
 int FUNC_4 (char*,int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_7(struct thermal_cooling_device *VAR_2,
           unsigned long *VAR_3)

{
 struct mlxsw_thermal *VAR_4 = VAR_2->devdata;
 struct device *VAR_5 = VAR_4->bus_info->dev;
 char VAR_6[VAR_0];
 int VAR_7, VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_3(VAR_4, VAR_2);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_4(VAR_6, VAR_8, 0);
 VAR_7 = FUNC_6(VAR_4->core, FUNC_0(VAR_1), VAR_6);
 if (VAR_7) {
  FUNC_1(VAR_5, "Failed to query PWM duty\n");
  return VAR_7;
 }

 VAR_9 = FUNC_5(VAR_6);
 *VAR_3 = FUNC_2(VAR_9);
 return 0;
}
