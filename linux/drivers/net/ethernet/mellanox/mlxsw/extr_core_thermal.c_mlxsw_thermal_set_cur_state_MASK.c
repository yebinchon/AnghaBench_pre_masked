
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct thermal_cooling_device {struct mlxsw_thermal* devdata; } ;
struct mlxsw_thermal {unsigned long* cooling_levels; int core; TYPE_1__* bus_info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int VAR_5 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (struct mlxsw_thermal*,struct thermal_cooling_device*) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (unsigned long) ;

__attribute__((used)) static int FUNC_10(struct thermal_cooling_device *VAR_6,
           unsigned long VAR_7)

{
 struct mlxsw_thermal *VAR_8 = VAR_6->devdata;
 struct device *VAR_9 = VAR_8->bus_info->dev;
 char VAR_10[VAR_1];
 unsigned long VAR_11, VAR_12;
 int VAR_13;
 u8 VAR_14;
 int VAR_15;

 VAR_13 = FUNC_4(VAR_8, VAR_6);
 if (VAR_13 < 0)
  return VAR_13;
 if (VAR_7 >= VAR_4 &&
     VAR_7 <= VAR_3) {
  VAR_7 -= VAR_2;
  for (VAR_12 = 0; VAR_12 <= VAR_2; VAR_12++)
   VAR_8->cooling_levels[VAR_12] = FUNC_2(VAR_7, VAR_12);

  FUNC_5(VAR_10, VAR_13, 0);
  VAR_15 = FUNC_7(VAR_8->core, FUNC_0(VAR_5), VAR_10);
  if (VAR_15)
   return VAR_15;

  VAR_14 = FUNC_6(VAR_10);
  VAR_11 = FUNC_3(VAR_14);




  if (VAR_7 < VAR_11)
   return 0;

  VAR_7 = VAR_11;
 }

 if (VAR_7 > VAR_2)
  return -VAR_0;


 VAR_7 = VAR_8->cooling_levels[VAR_7];
 FUNC_5(VAR_10, VAR_13, FUNC_9(VAR_7));
 VAR_15 = FUNC_8(VAR_8->core, FUNC_0(VAR_5), VAR_10);
 if (VAR_15) {
  FUNC_1(VAR_9, "Failed to write PWM duty\n");
  return VAR_15;
 }
 return 0;
}
