
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_init_data {int num_consumer_supplies; int * consumer_supplies; } ;
struct regulator_desc {int dummy; } ;
struct regulator_config {TYPE_1__* dev; struct device_node* of_node; struct arizona_micsupp* driver_data; } ;
struct device_node {int dummy; } ;
struct arizona_micsupp_pdata {struct regulator_init_data* init_data; } ;
struct arizona_micsupp {int supply; } ;
struct TYPE_2__ {int of_node; } ;


 struct device_node* FUNC_0 (int ,char*) ;
 struct regulator_init_data* FUNC_1 (TYPE_1__*,struct device_node*,struct regulator_desc const*) ;

__attribute__((used)) static int FUNC_2(struct arizona_micsupp_pdata *VAR_0,
     struct regulator_config *VAR_1,
     const struct regulator_desc *VAR_2)
{
 struct arizona_micsupp *VAR_3 = VAR_1->driver_data;
 struct device_node *VAR_4;
 struct regulator_init_data *VAR_5;

 VAR_4 = FUNC_0(VAR_1->dev->of_node, "micvdd");

 if (VAR_4) {
  VAR_1->of_node = VAR_4;

  VAR_5 = FUNC_1(VAR_1->dev, VAR_4, VAR_2);

  if (VAR_5) {
   VAR_5->consumer_supplies = &VAR_3->supply;
   VAR_5->num_consumer_supplies = 1;

   VAR_0->init_data = VAR_5;
  }
 }

 return 0;
}
