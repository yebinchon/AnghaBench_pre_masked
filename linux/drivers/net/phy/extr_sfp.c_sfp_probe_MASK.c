
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct sfp {int max_power_mW; int state; int sfp_bus; TYPE_1__* dev; struct sfp** gpio; int poll; scalar_t__* gpio_irq; int get_state; int set_state; struct sff_data* type; } ;
struct sff_data {int gpios; } ;
struct TYPE_13__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct sff_data* data; } ;
struct i2c_adapter {int dummy; } ;
struct fwnode_reference_args {int fwnode; } ;
struct fwnode_handle {int dummy; } ;
struct device_node {int dummy; } ;
struct acpi_handle {int dummy; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (TYPE_1__*) ;
 struct acpi_handle* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct sfp*) ;
 int FUNC_4 (struct sfp*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int) ;
 struct fwnode_handle* FUNC_6 (struct acpi_device*) ;
 int FUNC_7 (struct fwnode_handle*,char*,int ,struct fwnode_reference_args*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (TYPE_1__*,char*,int,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,char*) ;
 int FUNC_12 (TYPE_1__*,char*,int*) ;
 int FUNC_13 (TYPE_1__*,int ,struct sfp*) ;
 struct sfp* FUNC_14 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_15 (TYPE_1__*,scalar_t__,int *,int ,int,int ,struct sfp*) ;
 scalar_t__* VAR_14 ;
 int * VAR_15 ;
 scalar_t__ FUNC_16 (struct sfp*) ;
 scalar_t__ FUNC_17 (struct sfp*) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 struct i2c_adapter* FUNC_19 (struct acpi_handle*) ;
 int FUNC_20 (struct i2c_adapter*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int *,int ) ;
 struct i2c_adapter* FUNC_23 (struct device_node*) ;
 struct of_device_id* FUNC_24 (int ,struct device_node*) ;
 int FUNC_25 (struct device_node*) ;
 struct device_node* FUNC_26 (struct device_node*,char*,int ) ;
 int FUNC_27 (struct platform_device*,struct sfp*) ;
 int VAR_16 ;
 int VAR_17 ;
 struct sfp* FUNC_28 (TYPE_1__*) ;
 int VAR_18 ;
 struct sff_data VAR_19 ;
 int FUNC_29 (struct sfp*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_30 (struct sfp*,struct i2c_adapter*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_31 (struct sfp*) ;
 int VAR_24 ;
 int FUNC_32 (TYPE_1__*,struct sfp*,int *) ;
 int FUNC_33 (struct sfp*,int) ;
 int VAR_25 ;

__attribute__((used)) static int FUNC_34(struct platform_device *VAR_26)
{
 const struct sff_data *VAR_27;
 struct i2c_adapter *VAR_28;
 struct sfp *VAR_29;
 bool VAR_30 = 0;
 int VAR_31, VAR_32;

 VAR_29 = FUNC_28(&VAR_26->dev);
 if (FUNC_3(VAR_29))
  return FUNC_4(VAR_29);

 FUNC_27(VAR_26, VAR_29);

 VAR_31 = FUNC_13(VAR_29->dev, VAR_18, VAR_29);
 if (VAR_31 < 0)
  return VAR_31;

 VAR_27 = VAR_29->type = &VAR_19;

 if (VAR_26->dev.of_node) {
  struct device_node *VAR_33 = VAR_26->dev.of_node;
  const struct of_device_id *VAR_34;
  struct device_node *VAR_35;

  VAR_34 = FUNC_24(VAR_24, VAR_33);
  if (FUNC_5(!VAR_34))
   return -VAR_0;

  VAR_27 = VAR_29->type = VAR_34->data;

  VAR_35 = FUNC_26(VAR_33, "i2c-bus", 0);
  if (!VAR_35) {
   FUNC_8(VAR_29->dev, "missing 'i2c-bus' property\n");
   return -VAR_1;
  }

  VAR_28 = FUNC_23(VAR_35);
  FUNC_25(VAR_35);
 } else if (FUNC_18(&VAR_26->dev)) {
  struct acpi_device *VAR_36 = FUNC_0(&VAR_26->dev);
  struct fwnode_handle *VAR_37 = FUNC_6(VAR_36);
  struct fwnode_reference_args VAR_38;
  struct acpi_handle *VAR_39;
  int VAR_40;

  VAR_40 = FUNC_7(VAR_37, "i2c-bus", 0, &VAR_38);
  if (VAR_40 || !FUNC_21(VAR_38.fwnode)) {
   FUNC_8(&VAR_26->dev, "missing 'i2c-bus' property\n");
   return -VAR_1;
  }

  VAR_39 = FUNC_1(VAR_38.fwnode);
  VAR_28 = FUNC_19(VAR_39);
 } else {
  return -VAR_0;
 }

 if (!VAR_28)
  return -VAR_3;

 VAR_31 = FUNC_30(VAR_29, VAR_28);
 if (VAR_31 < 0) {
  FUNC_20(VAR_28);
  return VAR_31;
 }

 for (VAR_32 = 0; VAR_32 < VAR_5; VAR_32++)
  if (VAR_27->gpios & FUNC_2(VAR_32)) {
   VAR_29->gpio[VAR_32] = FUNC_14(VAR_29->dev,
        VAR_15[VAR_32], VAR_14[VAR_32]);
   if (FUNC_3(VAR_29->gpio[VAR_32]))
    return FUNC_4(VAR_29->gpio[VAR_32]);
  }

 VAR_29->get_state = VAR_20;
 VAR_29->set_state = VAR_21;


 if (!(VAR_29->gpio[VAR_6]))
  VAR_29->get_state = VAR_17;

 FUNC_12(&VAR_26->dev, "maximum-power-milliwatt",
     &VAR_29->max_power_mW);
 if (!VAR_29->max_power_mW)
  VAR_29->max_power_mW = 1000;

 FUNC_9(VAR_29->dev, "Host maximum power %u.%uW\n",
   VAR_29->max_power_mW / 1000, (VAR_29->max_power_mW / 100) % 10);




 VAR_29->state = FUNC_29(VAR_29) | VAR_13;

 if (VAR_29->gpio[VAR_7] &&
     FUNC_16(VAR_29->gpio[VAR_7]))
  VAR_29->state |= VAR_12;
 FUNC_33(VAR_29, VAR_29->state);
 FUNC_31(VAR_29);

 for (VAR_32 = 0; VAR_32 < VAR_5; VAR_32++) {
  if (VAR_14[VAR_32] != VAR_4 || !VAR_29->gpio[VAR_32])
   continue;

  VAR_29->gpio_irq[VAR_32] = FUNC_17(VAR_29->gpio[VAR_32]);
  if (!VAR_29->gpio_irq[VAR_32]) {
   VAR_30 = 1;
   continue;
  }

  VAR_31 = FUNC_15(VAR_29->dev, VAR_29->gpio_irq[VAR_32],
      ((void*)0), VAR_22,
      VAR_9 |
      VAR_11 |
      VAR_10,
      FUNC_10(VAR_29->dev), VAR_29);
  if (VAR_31) {
   VAR_29->gpio_irq[VAR_32] = 0;
   VAR_30 = 1;
  }
 }

 if (VAR_30)
  FUNC_22(VAR_25, &VAR_29->poll, VAR_16);






 if (!VAR_29->gpio[VAR_8])
  FUNC_11(VAR_29->dev,
    "No tx_disable pin: SFP modules will always be emitting.\n");

 VAR_29->sfp_bus = FUNC_32(VAR_29->dev, VAR_29, &VAR_23);
 if (!VAR_29->sfp_bus)
  return -VAR_2;

 return 0;
}
