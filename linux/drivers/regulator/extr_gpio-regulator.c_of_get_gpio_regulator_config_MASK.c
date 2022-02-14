
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct regulator_desc {int dummy; } ;
struct gpio_regulator_state {int dummy; } ;
struct gpio_regulator_config {int enabled_at_boot; int ngpios; int nr_states; void* type; TYPE_3__* states; void** gflags; int startup_delay; TYPE_2__* init_data; int supply_name; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;
struct TYPE_6__ {scalar_t__ gpios; scalar_t__ value; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ constraints; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpio_regulator_config* FUNC_0 (int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,char const*) ;
 TYPE_3__* FUNC_3 (struct device*,int,int,int ) ;
 void* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int *) ;
 TYPE_2__* FUNC_6 (struct device*,struct device_node*,struct regulator_desc const*) ;
 int FUNC_7 (struct device_node*,char*) ;
 scalar_t__ FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct device_node*,char*,char const**) ;
 int FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct device_node*,char*,int,scalar_t__*) ;
 int FUNC_12 (char*,char const*,int) ;

__attribute__((used)) static struct gpio_regulator_config *
FUNC_13(struct device *VAR_7, struct device_node *VAR_8,
        const struct regulator_desc *VAR_9)
{
 struct gpio_regulator_config *VAR_10;
 const char *VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_10 = FUNC_4(VAR_7,
   sizeof(struct gpio_regulator_config),
   VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_10->init_data = FUNC_6(VAR_7, VAR_8, VAR_9);
 if (!VAR_10->init_data)
  return FUNC_0(-VAR_0);

 VAR_10->supply_name = VAR_10->init_data->constraints.name;

 if (FUNC_8(VAR_8, "enable-at-boot"))
  VAR_10->enabled_at_boot = 1;

 FUNC_10(VAR_8, "startup-delay-us", &VAR_10->startup_delay);


 VAR_14 = FUNC_5(VAR_7, ((void*)0));
 if (VAR_14 > 0) {
  VAR_10->gflags = FUNC_4(VAR_7,
           sizeof(enum gpiod_flags)
           * VAR_14,
           VAR_2);
  if (!VAR_10->gflags)
   return FUNC_0(-VAR_1);

  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
   u32 VAR_16;

   VAR_15 = FUNC_11(VAR_8, "gpios-states", VAR_13,
        &VAR_16);


   if (VAR_15)
    VAR_10->gflags[VAR_13] = VAR_3;
   else
    VAR_10->gflags[VAR_13] =
     VAR_16 ? VAR_3 : VAR_4;
  }
 }
 VAR_10->ngpios = VAR_14;


 VAR_12 = FUNC_7(VAR_8, "states");
 if (VAR_12 < 0) {
  FUNC_1(VAR_7, "No 'states' property found\n");
  return FUNC_0(-VAR_0);
 }

 VAR_10->states = FUNC_3(VAR_7,
    VAR_12 / 2,
    sizeof(struct gpio_regulator_state),
    VAR_2);
 if (!VAR_10->states)
  return FUNC_0(-VAR_1);

 for (VAR_13 = 0; VAR_13 < VAR_12 / 2; VAR_13++) {
  FUNC_11(VAR_8, "states", VAR_13 * 2,
        &VAR_10->states[VAR_13].value);
  FUNC_11(VAR_8, "states", VAR_13 * 2 + 1,
        &VAR_10->states[VAR_13].gpios);
 }
 VAR_10->nr_states = VAR_13;

 VAR_10->type = VAR_6;
 VAR_15 = FUNC_9(VAR_8, "regulator-type", &VAR_11);
 if (VAR_15 >= 0) {
  if (!FUNC_12("voltage", VAR_11, 7))
   VAR_10->type = VAR_6;
  else if (!FUNC_12("current", VAR_11, 7))
   VAR_10->type = VAR_5;
  else
   FUNC_2(VAR_7, "Unknown regulator-type '%s'\n",
     VAR_11);
 }

 return VAR_10;
}
