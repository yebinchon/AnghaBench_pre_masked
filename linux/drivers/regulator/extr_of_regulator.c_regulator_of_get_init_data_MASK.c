
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_init_data {int dummy; } ;
struct regulator_desc {int (* of_parse_cb ) (struct device_node*,struct regulator_desc const*,struct regulator_config*) ;} ;
struct regulator_config {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct regulator_init_data* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,struct device_node*) ;
 struct regulator_init_data* FUNC_2 (struct device*,struct device_node*,struct regulator_desc const*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device*,struct regulator_desc const*) ;
 int FUNC_5 (struct device_node*,struct regulator_desc const*,struct regulator_config*) ;

struct regulator_init_data *FUNC_6(struct device *VAR_1,
         const struct regulator_desc *VAR_2,
         struct regulator_config *VAR_3,
         struct device_node **VAR_4)
{
 struct device_node *VAR_5;
 struct regulator_init_data *VAR_6 = ((void*)0);

 VAR_5 = FUNC_4(VAR_1, VAR_2);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_2);
 if (!VAR_6) {
  FUNC_1(VAR_1, "failed to parse DT for regulator %pOFn\n", VAR_5);
  goto error;
 }

 if (VAR_2->of_parse_cb) {
  int VAR_7;

  VAR_7 = VAR_2->of_parse_cb(VAR_5, VAR_2, VAR_3);
  if (VAR_7) {
   if (VAR_7 == -VAR_0) {
    FUNC_3(VAR_5);
    return FUNC_0(-VAR_0);
   }
   FUNC_1(VAR_1,
    "driver callback failed to parse DT for regulator %pOFn\n",
    VAR_5);
   goto error;
  }
 }

 *VAR_4 = VAR_5;

 return VAR_6;

error:
 FUNC_3(VAR_5);

 return ((void*)0);
}
