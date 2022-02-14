
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regulator_desc {int dummy; } ;
struct fan53555_platform_data {int sleep_vsel_id; int regulator; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct fan53555_platform_data* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device*,struct device_node*,struct regulator_desc const*) ;
 int FUNC_2 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct fan53555_platform_data *FUNC_3(struct device *VAR_1,
           struct device_node *VAR_2,
           const struct regulator_desc *VAR_3)
{
 struct fan53555_platform_data *VAR_4;
 int VAR_5;
 u32 VAR_6;

 VAR_4 = FUNC_0(VAR_1, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->regulator = FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_5 = FUNC_2(VAR_2, "fcs,suspend-voltage-selector",
       &VAR_6);
 if (!VAR_5)
  VAR_4->sleep_vsel_id = VAR_6;

 return VAR_4;
}
