
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_desc {int id; } ;
struct regulator_config {struct lochnagar* driver_data; } ;
struct lochnagar {int dev; int analogue_config_lock; int regmap; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device_node*,char*,unsigned int*) ;
 int FUNC_4 (int ,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_4,
          const struct regulator_desc *VAR_5,
          struct regulator_config *VAR_6)
{
 struct lochnagar *VAR_7 = VAR_6->driver_data;
 int VAR_8 = (VAR_5->id - VAR_3) *
      VAR_2;
 int VAR_9 = VAR_1 << VAR_8;
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_4, "cirrus,micbias-input", &VAR_10);
 if (VAR_11 >= 0) {
  FUNC_1(&VAR_7->analogue_config_lock);
  VAR_11 = FUNC_4(VAR_7->regmap,
      VAR_0,
      VAR_9, VAR_10 << VAR_8);
  FUNC_2(&VAR_7->analogue_config_lock);
  if (VAR_11 < 0) {
   FUNC_0(VAR_7->dev,
    "Failed to update micbias source: %d\n", VAR_11);
   return VAR_11;
  }
 }

 return 0;
}
