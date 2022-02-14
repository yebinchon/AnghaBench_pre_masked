
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {struct max8660* driver_data; struct device_node* of_node; TYPE_2__* init_data; struct device* dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct max8660_platform_data {int num_subdevs; TYPE_3__* subdevs; scalar_t__ en34_is_high; } ;
struct max8660 {int* shadow_regs; struct i2c_client* client; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;
typedef int of_node ;
struct TYPE_11__ {int disable; int enable; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int id; TYPE_2__* platform_data; int name; } ;
struct TYPE_7__ {int boot_on; } ;
struct TYPE_8__ {TYPE_1__ constraints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;





 int VAR_12 ;
 unsigned long VAR_13 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct max8660_platform_data* FUNC_3 (struct device*) ;
 struct max8660* FUNC_4 (struct device*,int,int ) ;
 struct regulator_dev* FUNC_5 (struct device*,TYPE_4__*,struct regulator_config*) ;
 int FUNC_6 (struct i2c_client*,struct max8660*) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_5__ VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (struct device*,struct device_node**,struct max8660_platform_data*) ;
 TYPE_4__* VAR_18 ;
 int FUNC_8 (struct device_node**,int ,int) ;
 struct of_device_id* FUNC_9 (int ,struct device*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_19,
       const struct i2c_device_id *VAR_20)
{
 struct device *VAR_21 = &VAR_19->dev;
 struct max8660_platform_data VAR_22, *VAR_23 = FUNC_3(VAR_21);
 struct regulator_config VAR_24 = { };
 struct max8660 *VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29 = -VAR_0;
 struct device_node *VAR_30[VAR_12];
 unsigned long VAR_31;

 if (VAR_21->of_node && !VAR_23) {
  const struct of_device_id *VAR_32;

  VAR_32 = FUNC_9(FUNC_10(VAR_17), VAR_21);
  if (!VAR_32)
   return -VAR_1;

  VAR_29 = FUNC_7(VAR_21, VAR_30, &VAR_22);
  if (VAR_29 < 0)
   return VAR_29;

  VAR_23 = &VAR_22;
  VAR_31 = (unsigned long) VAR_32->data;
 } else {
  VAR_31 = VAR_20->driver_data;
  FUNC_8(VAR_30, 0, sizeof(VAR_30));
 }

 if (VAR_23->num_subdevs > VAR_12) {
  FUNC_2(VAR_21, "Too many regulators found!\n");
  return -VAR_0;
 }

 VAR_25 = FUNC_4(VAR_21, sizeof(struct max8660), VAR_3);
 if (!VAR_25)
  return -VAR_2;

 VAR_25->client = VAR_19;

 if (VAR_23->en34_is_high) {

  VAR_25->shadow_regs[VAR_8] = 5;
 } else {

  VAR_16.enable = VAR_15;
  VAR_16.disable = VAR_14;
 }






 VAR_25->shadow_regs[VAR_4] =
  VAR_25->shadow_regs[VAR_5] =
  VAR_25->shadow_regs[VAR_10] =
  VAR_25->shadow_regs[VAR_11] = 0x1b;
 VAR_25->shadow_regs[VAR_6] =
  VAR_25->shadow_regs[VAR_7] = 0x04;

 for (VAR_27 = 0; VAR_27 < VAR_23->num_subdevs; VAR_27++) {

  if (!VAR_23->subdevs[VAR_27].platform_data)
   VAR_26 = 0;
  else
   VAR_26 = VAR_23->subdevs[VAR_27].platform_data->constraints.boot_on;

  switch (VAR_23->subdevs[VAR_27].id) {
  case 132:
   if (VAR_26)
    VAR_25->shadow_regs[VAR_8] |= 1;
   break;

  case 131:
   if (VAR_26)
    VAR_25->shadow_regs[VAR_8] |= 4;
   break;

  case 130:
   break;

  case 129:
   if (VAR_26)
    VAR_25->shadow_regs[VAR_9] |= 2;
   break;

  case 128:
   if (VAR_31 == VAR_13) {
    FUNC_2(VAR_21, "Regulator not on this chip!\n");
    return -VAR_0;
   }

   if (VAR_26)
    VAR_25->shadow_regs[VAR_9] |= 4;
   break;

  default:
   FUNC_2(VAR_21, "invalid regulator %s\n",
     VAR_23->subdevs[VAR_27].name);
   return VAR_29;
  }
 }


 for (VAR_27 = 0; VAR_27 < VAR_23->num_subdevs; VAR_27++) {
  struct regulator_dev *VAR_33;

  VAR_28 = VAR_23->subdevs[VAR_27].id;

  VAR_24.dev = VAR_21;
  VAR_24.init_data = VAR_23->subdevs[VAR_27].platform_data;
  VAR_24.of_node = VAR_30[VAR_27];
  VAR_24.driver_data = VAR_25;

  VAR_33 = FUNC_5(&VAR_19->dev,
        &VAR_18[VAR_28], &VAR_24);
  if (FUNC_0(VAR_33)) {
   FUNC_2(&VAR_19->dev, "failed to register %s\n",
    VAR_18[VAR_28].name);
   return FUNC_1(VAR_33);
  }
 }

 FUNC_6(VAR_19, VAR_25);
 return 0;
}
