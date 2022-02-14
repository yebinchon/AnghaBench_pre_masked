
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_regulator_driver_data {unsigned long features; int * data; int * get_voltage; int * set_voltage; } ;
struct regulator_init_data {unsigned int num_consumer_supplies; struct twl_regulator_driver_data* driver_data; struct regulator_consumer_supply* consumer_supplies; } ;
struct regulator_consumer_supply {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int ,char*,int,struct regulator_init_data*,int,int,int ,int ) ;

__attribute__((used)) static struct device *
FUNC_1(int VAR_1, struct regulator_init_data *VAR_2,
  struct regulator_consumer_supply *VAR_3,
  unsigned VAR_4, unsigned long VAR_5)
{
 struct twl_regulator_driver_data VAR_6;


 if (!VAR_2)
  return ((void*)0);

 if (VAR_3) {
  VAR_2->consumer_supplies = VAR_3;
  VAR_2->num_consumer_supplies = VAR_4;
 }

 if (VAR_2->driver_data) {

  struct twl_regulator_driver_data *VAR_7;
  VAR_7 = VAR_2->driver_data;
  VAR_7->features |= VAR_5;
 } else {

  VAR_6.features = VAR_5;
  VAR_6.set_voltage = ((void*)0);
  VAR_6.get_voltage = ((void*)0);
  VAR_6.data = ((void*)0);
  VAR_2->driver_data = &VAR_6;
 }


 return FUNC_0(VAR_0, "twl_reg", VAR_1,
  VAR_2, sizeof(*VAR_2), 0, 0, 0);
}
