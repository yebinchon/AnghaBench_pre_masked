
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator {int dummy; } ;
struct device {int dummy; } ;
struct dev_pm_opp_supply {unsigned long u_volt; unsigned long u_volt_max; unsigned long u_volt_min; } ;
struct TYPE_2__ {long vdd_absolute_max_voltage_uv; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_1 (struct device*,char*,char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (struct device*,char*,unsigned long,unsigned long,unsigned long) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (struct regulator*,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2,
       struct dev_pm_opp_supply *VAR_3,
       int VAR_4, struct regulator *VAR_5,
       char *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8, VAR_9;

 if (VAR_4)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_3->u_volt;
 if (VAR_1.vdd_absolute_max_voltage_uv)
  VAR_9 = VAR_1.vdd_absolute_max_voltage_uv;
 else
  VAR_9 = VAR_3->u_volt_max;

 if (VAR_8 > VAR_9 ||
     VAR_8 < VAR_3->u_volt_min ||
     VAR_3->u_volt_min > VAR_9) {
  FUNC_2(VAR_2,
    "Invalid range voltages [Min:%lu target:%lu Max:%lu]\n",
    VAR_3->u_volt_min, VAR_8, VAR_9);
  return -VAR_0;
 }

 FUNC_0(VAR_2, "%s scaling to %luuV[min %luuV max %luuV]\n", VAR_6,
  VAR_8, VAR_3->u_volt_min,
  VAR_9);

 VAR_7 = FUNC_3(VAR_5,
         VAR_3->u_volt_min,
         VAR_8,
         VAR_9);
 if (VAR_7) {
  FUNC_1(VAR_2, "%s failed for %luuV[min %luuV max %luuV]\n",
   VAR_6, VAR_8, VAR_3->u_volt_min,
   VAR_9);
  return VAR_7;
 }

 return 0;
}
