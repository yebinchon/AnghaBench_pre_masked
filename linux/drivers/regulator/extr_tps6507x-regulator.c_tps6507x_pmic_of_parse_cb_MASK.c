
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tps_info {int defdcdc_default; } ;
struct tps6507x_pmic {struct tps_info** info; } ;
struct regulator_desc {size_t id; } ;
struct regulator_config {struct tps6507x_pmic* driver_data; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_0,
         const struct regulator_desc *VAR_1,
         struct regulator_config *VAR_2)
{
 struct tps6507x_pmic *VAR_3 = VAR_2->driver_data;
 struct tps_info *VAR_4 = VAR_3->info[VAR_1->id];
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, "ti,defdcdc_default", &VAR_5);
 if (!VAR_6)
  VAR_4->defdcdc_default = VAR_5;

 return 0;
}
