
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_init_data {int dummy; } ;
struct regulator_desc {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct regulator_init_data* FUNC_0 (struct device*,int,int ) ;
 scalar_t__ FUNC_1 (struct device*,struct device_node*,struct regulator_init_data**,struct regulator_desc const*) ;

struct regulator_init_data *FUNC_2(struct device *VAR_1,
       struct device_node *VAR_2,
       const struct regulator_desc *VAR_3)
{
 struct regulator_init_data *VAR_4;

 if (!VAR_2)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_1, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 if (FUNC_1(VAR_1, VAR_2, &VAR_4, VAR_3))
  return ((void*)0);

 return VAR_4;
}
