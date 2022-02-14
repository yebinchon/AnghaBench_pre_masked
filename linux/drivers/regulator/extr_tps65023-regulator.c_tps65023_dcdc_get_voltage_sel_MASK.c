
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tps_pmic {TYPE_1__* driver_data; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int core_regulator; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tps_pmic* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_3)
{
 struct tps_pmic *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = FUNC_1(VAR_3);

 if (VAR_5 < VAR_1 || VAR_5 > VAR_2)
  return -VAR_0;

 if (VAR_5 != VAR_4->driver_data->core_regulator)
  return 0;

 return FUNC_2(VAR_3);
}
