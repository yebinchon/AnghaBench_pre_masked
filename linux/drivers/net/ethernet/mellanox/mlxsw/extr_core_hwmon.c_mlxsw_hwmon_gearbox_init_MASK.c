
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlxsw_hwmon {int module_sensor_count; TYPE_1__* bus_info; int core; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_7 ;
 int FUNC_2 (struct mlxsw_hwmon*,int ,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int*,int *,int *) ;
 int FUNC_5 (char*,int,int,int) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int ,int ,char*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_8(struct mlxsw_hwmon *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 char VAR_13[VAR_4];
 char VAR_14[VAR_6];
 u8 VAR_15;
 int VAR_16;

 FUNC_3(VAR_13);
 VAR_16 = FUNC_6(VAR_9->core, FUNC_0(VAR_7), VAR_13);
 if (VAR_16)
  return VAR_16;

 FUNC_4(VAR_13, &VAR_15, ((void*)0), ((void*)0));
 if (!VAR_15)
  return 0;

 VAR_10 = VAR_9->module_sensor_count;
 VAR_11 = VAR_9->module_sensor_count + VAR_15;
 while (VAR_10 < VAR_11) {
  VAR_12 = VAR_10 % VAR_9->module_sensor_count +
          VAR_5;
  FUNC_5(VAR_14, VAR_12, 1, 1);
  VAR_16 = FUNC_7(VAR_9->core,
          FUNC_0(VAR_8), VAR_14);
  if (VAR_16) {
   FUNC_1(VAR_9->bus_info->dev, "Failed to setup temp sensor number %d\n",
    VAR_12);
   return VAR_16;
  }
  FUNC_2(VAR_9, VAR_0,
         VAR_10, VAR_10);
  FUNC_2(VAR_9,
         VAR_2, VAR_10,
         VAR_10);
  FUNC_2(VAR_9,
         VAR_3, VAR_10,
         VAR_10);
  FUNC_2(VAR_9,
         VAR_1,
         VAR_10, VAR_10);
  VAR_10++;
 }

 return 0;
}
