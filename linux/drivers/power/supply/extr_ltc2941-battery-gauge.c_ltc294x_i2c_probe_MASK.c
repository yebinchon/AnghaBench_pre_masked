
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct power_supply_config {struct ltc294x_info* drv_data; } ;
struct TYPE_8__ {int * external_power_changed; int property_is_writeable; int set_property; int get_property; int num_properties; int properties; int type; int name; } ;
struct ltc294x_info {int id; int r_sense; int Qlsb; int work; int supply; TYPE_2__ supply_desc; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int name; } ;
typedef int s32 ;
typedef enum ltc294x_id { ____Placeholder_ltc294x_id } ltc294x_id ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;

 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct ltc294x_info* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (struct i2c_client*,struct ltc294x_info*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct i2c_client*,int ,int*,int) ;
 int FUNC_9 (struct ltc294x_info*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 struct device_node* FUNC_11 (int ) ;
 int FUNC_12 (struct device_node*,char*,int*) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,struct power_supply_config*) ;
 int FUNC_14 (int *,int) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_14,
 const struct i2c_device_id *VAR_15)
{
 struct power_supply_config VAR_16 = {};
 struct ltc294x_info *VAR_17;
 struct device_node *VAR_18;
 int VAR_19;
 u32 VAR_20;
 s32 VAR_21;
 u8 VAR_22;

 VAR_17 = FUNC_6(&VAR_14->dev, sizeof(*VAR_17), VAR_1);
 if (VAR_17 == ((void*)0))
  return -VAR_0;

 FUNC_7(VAR_14, VAR_17);

 VAR_18 = FUNC_11(VAR_14->dev.of_node);

 VAR_17->id = (enum ltc294x_id)FUNC_10(&VAR_14->dev);
 VAR_17->supply_desc.name = VAR_18->name;



 VAR_19 = FUNC_12(VAR_18, "lltc,resistor-sense", &VAR_21);
 if (VAR_19 < 0) {
  FUNC_4(&VAR_14->dev,
   "Could not find lltc,resistor-sense in devicetree\n");
  return VAR_19;
 }
 VAR_17->r_sense = VAR_21;

 VAR_19 = FUNC_12(VAR_18, "lltc,prescaler-exponent",
  &VAR_20);
 if (VAR_19 < 0) {
  FUNC_5(&VAR_14->dev,
   "lltc,prescaler-exponent not in devicetree\n");
  VAR_20 = VAR_3;
 }

 if (VAR_17->id == 129) {
  if (VAR_20 > VAR_5)
   VAR_20 = VAR_5;
  VAR_17->Qlsb = ((340 * 50000) / VAR_21) /
    (4096 / (1 << (2*VAR_20)));
 } else {
  if (VAR_20 > VAR_3)
   VAR_20 = VAR_3;
  VAR_17->Qlsb = ((85 * 50000) / VAR_21) /
    (128 / (1 << VAR_20));
 }


 if (VAR_17->id == 131 || VAR_17->id == 130) {
  VAR_19 = FUNC_8(VAR_14, VAR_6, &VAR_22, 1);
  if (VAR_19 < 0) {
   FUNC_4(&VAR_14->dev,
    "Could not read status register\n");
   return VAR_19;
  }
  if (VAR_22 & VAR_4)
   VAR_17->id = 131;
  else
   VAR_17->id = 130;
 }

 VAR_17->client = VAR_14;
 VAR_17->supply_desc.type = VAR_8;
 VAR_17->supply_desc.properties = VAR_10;
 switch (VAR_17->id) {
 case 128:
 case 129:
  VAR_17->supply_desc.num_properties =
   FUNC_0(VAR_10);
  break;
 case 130:
  VAR_17->supply_desc.num_properties =
   FUNC_0(VAR_10) - 1;
  break;
 case 131:
 default:
  VAR_17->supply_desc.num_properties =
   FUNC_0(VAR_10) - 3;
  break;
 }
 VAR_17->supply_desc.get_property = VAR_9;
 VAR_17->supply_desc.set_property = VAR_12;
 VAR_17->supply_desc.property_is_writeable = VAR_11;
 VAR_17->supply_desc.external_power_changed = ((void*)0);

 VAR_16.drv_data = VAR_17;

 FUNC_1(&VAR_17->work, VAR_13);

 VAR_19 = FUNC_9(VAR_17, VAR_20);
 if (VAR_19 < 0) {
  FUNC_4(&VAR_14->dev, "Communication with chip failed\n");
  return VAR_19;
 }

 VAR_17->supply = FUNC_13(&VAR_14->dev, &VAR_17->supply_desc,
          &VAR_16);
 if (FUNC_2(VAR_17->supply)) {
  FUNC_4(&VAR_14->dev, "failed to register ltc2941\n");
  return FUNC_3(VAR_17->supply);
 } else {
  FUNC_14(&VAR_17->work, VAR_7 * VAR_2);
 }

 return 0;
}
