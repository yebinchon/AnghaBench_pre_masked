
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_init_data {int num_consumer_supplies; int * consumer_supplies; } ;
struct regulator_desc {int dummy; } ;
struct regulator_config {TYPE_1__* dev; struct device_node* of_node; struct arizona_ldo1* driver_data; } ;
struct device_node {int dummy; } ;
struct arizona_ldo1_pdata {struct regulator_init_data* init_data; } ;
struct arizona_ldo1 {int supply; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 struct device_node* FUNC_0 (struct device_node*,char*) ;
 struct regulator_init_data* FUNC_1 (TYPE_1__*,struct device_node*,struct regulator_desc const*) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct arizona_ldo1_pdata *VAR_0,
         struct regulator_config *VAR_1,
         const struct regulator_desc *VAR_2,
         bool *VAR_3)
{
 struct arizona_ldo1 *VAR_4 = VAR_1->driver_data;
 struct device_node *VAR_5 = VAR_1->dev->of_node;
 struct device_node *VAR_6, *VAR_7;
 struct regulator_init_data *VAR_8;

 VAR_6 = FUNC_0(VAR_5, "ldo1");
 VAR_7 = FUNC_3(VAR_5, "DCVDD-supply", 0);

 if (VAR_6) {
  VAR_1->of_node = VAR_6;

  VAR_8 = FUNC_1(VAR_1->dev, VAR_6,
             VAR_2);
  if (VAR_8) {
   VAR_8->consumer_supplies = &VAR_4->supply;
   VAR_8->num_consumer_supplies = 1;

   if (VAR_7 && VAR_7 != VAR_6)
    *VAR_3 = 1;

   VAR_0->init_data = VAR_8;
  }
 } else if (VAR_7) {
  *VAR_3 = 1;
 }

 FUNC_2(VAR_7);

 return 0;
}
