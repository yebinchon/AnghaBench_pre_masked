
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u8 ;
struct twl_private {int dummy; } ;
struct twl_client {struct i2c_client* regmap; struct i2c_client* client; } ;
struct twl4030_platform_data {int gpio; int * clock; } ;
struct regmap_config {int dummy; } ;
struct platform_device {int dummy; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct TYPE_19__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_4__ dev; scalar_t__ irq; scalar_t__ addr; int adapter; } ;
struct device_node {int dummy; } ;
struct TYPE_18__ {int base; } ;
struct TYPE_17__ {int platform_data; } ;
struct TYPE_16__ {int ready; struct twl_client* twl_modules; TYPE_3__* twl_map; int twl_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct twl4030_platform_data*,int,int) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_4__*,char*,...) ;
 int FUNC_6 (TYPE_4__*,char*,...) ;
 struct twl4030_platform_data* FUNC_7 (TYPE_4__*) ;
 struct twl_client* FUNC_8 (TYPE_4__*,unsigned int,int,int ) ;
 TYPE_1__* FUNC_9 (TYPE_4__*,int,int ) ;
 struct i2c_client* FUNC_10 (struct i2c_client*,struct regmap_config const*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 struct i2c_client* FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (struct device_node*,int *,TYPE_2__*,TYPE_4__*) ;
 int FUNC_14 (struct platform_device*) ;
 struct platform_device* FUNC_15 (int ,int) ;
 int FUNC_16 (struct platform_device*) ;
 int FUNC_17 (struct platform_device*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (TYPE_4__*,scalar_t__) ;
 TYPE_3__* VAR_22 ;
 struct regmap_config* VAR_23 ;
 int FUNC_20 (TYPE_4__*,scalar_t__) ;
 TYPE_3__* VAR_24 ;
 struct regmap_config* VAR_25 ;
 TYPE_2__* VAR_26 ;
 scalar_t__ FUNC_21 () ;
 unsigned int FUNC_22 () ;
 int FUNC_23 (int ,int*,int ) ;
 int FUNC_24 (int ,int,int ) ;
 TYPE_1__* VAR_27 ;
 int FUNC_25 () ;
 int FUNC_26 (struct i2c_client*) ;

__attribute__((used)) static int
FUNC_27(struct i2c_client *VAR_28, const struct i2c_device_id *VAR_29)
{
 struct twl4030_platform_data *VAR_30 = FUNC_7(&VAR_28->dev);
 struct device_node *VAR_31 = VAR_28->dev.of_node;
 struct platform_device *VAR_32;
 const struct regmap_config *VAR_33;
 int VAR_34 = 0;
 int VAR_35;
 unsigned VAR_36, VAR_37;

 if (!VAR_31 && !VAR_30) {
  FUNC_6(&VAR_28->dev, "no platform data\n");
  return -VAR_2;
 }

 if (VAR_27) {
  FUNC_5(&VAR_28->dev, "only one instance of %s allowed\n",
   VAR_0);
  return -VAR_1;
 }

 VAR_32 = FUNC_15(VAR_0, -1);
 if (!VAR_32) {
  FUNC_6(&VAR_28->dev, "can't alloc pdev\n");
  return -VAR_4;
 }

 VAR_35 = FUNC_14(VAR_32);
 if (VAR_35) {
  FUNC_16(VAR_32);
  return VAR_35;
 }

 if (FUNC_11(VAR_28->adapter, VAR_6) == 0) {
  FUNC_5(&VAR_28->dev, "can't talk I2C?\n");
  VAR_35 = -VAR_3;
  goto free;
 }

 VAR_27 = FUNC_9(&VAR_28->dev, sizeof(struct twl_private),
    VAR_5);
 if (!VAR_27) {
  VAR_35 = -VAR_4;
  goto free;
 }

 if ((VAR_29->driver_data) & VAR_16) {
  VAR_27->twl_id = VAR_17;
  VAR_27->twl_map = &VAR_24[0];

  if ((VAR_29->driver_data) & VAR_19)
   VAR_27->twl_map[VAR_20].base =
       VAR_18;
  VAR_33 = VAR_25;
 } else {
  VAR_27->twl_id = VAR_13;
  VAR_27->twl_map = &VAR_22[0];
  VAR_33 = VAR_23;
 }

 VAR_37 = FUNC_22();
 VAR_27->twl_modules = FUNC_8(&VAR_28->dev,
      VAR_37,
      sizeof(struct twl_client),
      VAR_5);
 if (!VAR_27->twl_modules) {
  VAR_35 = -VAR_4;
  goto free;
 }

 for (VAR_36 = 0; VAR_36 < VAR_37; VAR_36++) {
  struct twl_client *VAR_38 = &VAR_27->twl_modules[VAR_36];

  if (VAR_36 == 0) {
   VAR_38->client = VAR_28;
  } else {
   VAR_38->client = FUNC_12(VAR_28->adapter,
          VAR_28->addr + VAR_36);
   if (FUNC_0(VAR_38->client)) {
    FUNC_6(&VAR_28->dev,
     "can't attach client %d\n", VAR_36);
    VAR_35 = FUNC_1(VAR_38->client);
    goto fail;
   }
  }

  VAR_38->regmap = FUNC_10(VAR_38->client,
         &VAR_33[VAR_36]);
  if (FUNC_0(VAR_38->regmap)) {
   VAR_35 = FUNC_1(VAR_38->regmap);
   FUNC_6(&VAR_28->dev,
    "Failed to allocate regmap %d, err: %d\n", VAR_36,
    VAR_35);
   goto fail;
  }
 }

 VAR_27->ready = 1;


 FUNC_4(&VAR_28->dev, VAR_30 ? VAR_30->clock : ((void*)0));


 if (FUNC_21()) {
  VAR_35 = FUNC_25();
  FUNC_2(VAR_35 < 0, "Error: reading twl_idcode register value\n");
 }


 if (VAR_28->irq) {
  if (FUNC_21()) {
   FUNC_18(VAR_29->name);
   VAR_34 = FUNC_19(&VAR_28->dev, VAR_28->irq);
  } else {
   VAR_34 = FUNC_20(&VAR_28->dev, VAR_28->irq);
  }

  if (VAR_34 < 0) {
   VAR_35 = VAR_34;
   goto fail;
  }
 }
 if (FUNC_21()) {
  u8 VAR_39;

  FUNC_23(VAR_15, &VAR_39, VAR_9);
  VAR_39 &= ~(VAR_12 | VAR_11 | VAR_8 | VAR_7);

  FUNC_24(VAR_15, VAR_39, VAR_9);

  FUNC_23(VAR_21, &VAR_39,
    VAR_14);
  VAR_39 |= VAR_10;
  FUNC_24(VAR_21, VAR_39,
     VAR_14);
 }

 if (VAR_31) {
  if (VAR_30)
   VAR_26[0].platform_data = VAR_30->gpio;
  VAR_35 = FUNC_13(VAR_31, ((void*)0), VAR_26,
           &VAR_28->dev);
 } else {
  VAR_35 = FUNC_3(VAR_30, VAR_34, VAR_29->driver_data);
 }

fail:
 if (VAR_35 < 0)
  FUNC_26(VAR_28);
free:
 if (VAR_35 < 0)
  FUNC_17(VAR_32);

 return VAR_35;
}
