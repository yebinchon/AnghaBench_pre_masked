
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_device_id {struct lochnagar_config* data; } ;
struct lochnagar_config {unsigned int id; int npatch; int patch; int name; TYPE_1__* regmap; int type; } ;
struct lochnagar {struct gpio_desc* regmap; int type; int analogue_config_lock; struct device* dev; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct gpio_desc {int dummy; } ;
struct TYPE_2__ {unsigned int val_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct device*,char*,int,...) ;
 int FUNC_3 (struct device*,char*,int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (struct device*,struct lochnagar*) ;
 struct gpio_desc* FUNC_5 (struct device*,char*,int ) ;
 struct gpio_desc* FUNC_6 (struct device*,char*,int ) ;
 struct lochnagar* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*) ;
 struct gpio_desc* FUNC_9 (struct i2c_client*,TYPE_1__*) ;
 int FUNC_10 (struct gpio_desc*,int) ;
 int VAR_10 ;
 int FUNC_11 (struct gpio_desc*,unsigned int*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 struct of_device_id* FUNC_14 (int ,struct device*) ;
 int FUNC_15 (struct gpio_desc*,int ,unsigned int*) ;
 int FUNC_16 (struct gpio_desc*,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 const struct lochnagar_config *VAR_13 = ((void*)0);
 const struct of_device_id *VAR_14;
 struct lochnagar *VAR_15;
 struct gpio_desc *VAR_16, *VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20, VAR_21;
 int VAR_22;

 VAR_15 = FUNC_7(VAR_12, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_14 = FUNC_14(VAR_10, VAR_12);
 if (!VAR_14)
  return -VAR_0;

 VAR_13 = VAR_14->data;

 VAR_15->dev = VAR_12;
 FUNC_13(&VAR_15->analogue_config_lock);

 FUNC_4(VAR_12, VAR_15);

 VAR_16 = FUNC_5(VAR_12, "reset", VAR_5);
 if (FUNC_0(VAR_16)) {
  VAR_22 = FUNC_1(VAR_16);
  FUNC_2(VAR_12, "Failed to get reset GPIO: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_17 = FUNC_6(VAR_12, "present", VAR_4);
 if (FUNC_0(VAR_17)) {
  VAR_22 = FUNC_1(VAR_17);
  FUNC_2(VAR_12, "Failed to get present GPIO: %d\n", VAR_22);
  return VAR_22;
 }


 FUNC_12(20);


 FUNC_10(VAR_16, 1);


 VAR_15->type = VAR_13->type;

 VAR_15->regmap = FUNC_9(VAR_11, VAR_13->regmap);
 if (FUNC_0(VAR_15->regmap)) {
  VAR_22 = FUNC_1(VAR_15->regmap);
  FUNC_2(VAR_12, "Failed to allocate register map: %d\n", VAR_22);
  return VAR_22;
 }


 VAR_22 = FUNC_11(VAR_15->regmap, &VAR_18);
 if (VAR_22 < 0) {
  FUNC_2(VAR_12, "Failed to read device ID: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_20 = VAR_18 & VAR_6;
 VAR_21 = VAR_18 & VAR_9;

 if (VAR_20 != VAR_13->id) {
  FUNC_2(VAR_12,
   "ID does not match %s (expected 0x%x got 0x%x)\n",
   VAR_13->name, VAR_13->id, VAR_20);
  return -VAR_1;
 }


 VAR_22 = FUNC_15(VAR_15->regmap, VAR_7, &VAR_18);
 if (VAR_22 < 0) {
  FUNC_2(VAR_12, "Failed to read firmware id 1: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_19 = VAR_18;

 VAR_22 = FUNC_15(VAR_15->regmap, VAR_8, &VAR_18);
 if (VAR_22 < 0) {
  FUNC_2(VAR_12, "Failed to read firmware id 2: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_19 |= (VAR_18 << VAR_13->regmap->val_bits);

 FUNC_3(VAR_12, "Found %s (0x%x) revision %u firmware 0x%.6x\n",
   VAR_13->name, VAR_20, VAR_21 + 1, VAR_19);

 VAR_22 = FUNC_16(VAR_15->regmap, VAR_13->patch,
        VAR_13->npatch);
 if (VAR_22 < 0) {
  FUNC_2(VAR_12, "Failed to register patch: %d\n", VAR_22);
  return VAR_22;
 }

 VAR_22 = FUNC_8(VAR_12);
 if (VAR_22 < 0) {
  FUNC_2(VAR_12, "Failed to populate child nodes: %d\n", VAR_22);
  return VAR_22;
 }

 return VAR_22;
}
