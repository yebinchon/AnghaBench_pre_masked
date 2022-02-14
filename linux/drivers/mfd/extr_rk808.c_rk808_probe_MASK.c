
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rk808_reg_data {int addr; int value; int mask; } ;
struct rk808 {int variant; int irq_data; scalar_t__ pm_pwroff_prep_fn; scalar_t__ pm_pwroff_fn; int regmap; int * regmap_irq_chip; int * regmap_cfg; struct i2c_client* i2c; } ;
struct mfd_cell {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct i2c_client {int irq; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;


 int VAR_5 ;
 int VAR_6 ;


 unsigned char VAR_7 ;
 unsigned char VAR_8 ;

 int VAR_9 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*,unsigned int) ;
 struct rk808* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,int ,struct mfd_cell const*,int,int *,int ,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,struct rk808*) ;
 int FUNC_9 (struct i2c_client*,unsigned char) ;
 scalar_t__ FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct device_node*,char*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ,int ,int,int *,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int,int ,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 scalar_t__ VAR_18 ;
 struct i2c_client* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 void* VAR_31 ;
 int VAR_32 ;
 void* VAR_33 ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_34,
         const struct i2c_device_id *VAR_35)
{
 struct device_node *VAR_36 = VAR_34->dev.of_node;
 struct rk808 *VAR_37;
 const struct rk808_reg_data *VAR_38;
 const struct mfd_cell *VAR_39;
 int VAR_40;
 int VAR_41;
 int VAR_42 = 0, VAR_43, VAR_44;
 unsigned char VAR_45, VAR_46;
 int VAR_47;
 int VAR_48;

 VAR_37 = FUNC_5(&VAR_34->dev, sizeof(*VAR_37), VAR_2);
 if (!VAR_37)
  return -VAR_1;

 if (FUNC_10(VAR_36, "rockchip,rk817") ||
     FUNC_10(VAR_36, "rockchip,rk809")) {
  VAR_45 = VAR_8;
  VAR_46 = VAR_7;
 } else {
  VAR_45 = VAR_6;
  VAR_46 = VAR_5;
 }


 VAR_43 = FUNC_9(VAR_34, VAR_45);
 if (VAR_43 < 0) {
  FUNC_3(&VAR_34->dev, "failed to read the chip id at 0x%x\n",
   VAR_6);
  return VAR_43;
 }

 VAR_44 = FUNC_9(VAR_34, VAR_46);
 if (VAR_44 < 0) {
  FUNC_3(&VAR_34->dev, "failed to read the chip id at 0x%x\n",
   VAR_5);
  return VAR_44;
 }

 VAR_37->variant = ((VAR_43 << 8) | VAR_44) & VAR_9;
 FUNC_4(&VAR_34->dev, "chip id: 0x%x\n", (unsigned int)VAR_37->variant);

 switch (VAR_37->variant) {
 case 132:
  VAR_37->regmap_cfg = &VAR_16;
  VAR_37->regmap_irq_chip = &VAR_14;
  VAR_38 = VAR_15;
  VAR_40 = FUNC_0(VAR_15);
  VAR_39 = VAR_17;
  VAR_41 = FUNC_0(VAR_17);
  VAR_37->pm_pwroff_fn = VAR_12;
  VAR_37->pm_pwroff_prep_fn = VAR_13;
  break;
 case 131:
  VAR_37->regmap_cfg = &VAR_22;
  VAR_37->regmap_irq_chip = &VAR_20;
  VAR_38 = VAR_21;
  VAR_40 = FUNC_0(VAR_21);
  VAR_39 = VAR_24;
  VAR_41 = FUNC_0(VAR_24);
  VAR_37->pm_pwroff_fn = VAR_18;
  break;
 case 128:
  VAR_37->regmap_cfg = &VAR_32;
  VAR_37->regmap_irq_chip = &VAR_30;
  VAR_38 = VAR_31;
  VAR_40 = FUNC_0(VAR_31);
  VAR_39 = VAR_33;
  VAR_41 = FUNC_0(VAR_33);
  VAR_37->pm_pwroff_fn = VAR_29;
  break;
 case 130:
 case 129:
  VAR_37->regmap_cfg = &VAR_27;
  VAR_37->regmap_irq_chip = &VAR_25;
  VAR_38 = VAR_26;
  VAR_40 = FUNC_0(VAR_26);
  VAR_39 = VAR_28;
  VAR_41 = FUNC_0(VAR_28);
  FUNC_12(&VAR_23);
  break;
 default:
  FUNC_3(&VAR_34->dev, "Unsupported RK8XX ID %lu\n",
   VAR_37->variant);
  return -VAR_0;
 }

 VAR_37->i2c = VAR_34;
 FUNC_8(VAR_34, VAR_37);

 VAR_37->regmap = FUNC_7(VAR_34, VAR_37->regmap_cfg);
 if (FUNC_1(VAR_37->regmap)) {
  FUNC_3(&VAR_34->dev, "regmap initialization failed\n");
  return FUNC_2(VAR_37->regmap);
 }

 if (!VAR_34->irq) {
  FUNC_3(&VAR_34->dev, "No interrupt support, no core IRQ\n");
  return -VAR_0;
 }

 VAR_47 = FUNC_13(VAR_37->regmap, VAR_34->irq,
      VAR_3, -1,
      VAR_37->regmap_irq_chip, &VAR_37->irq_data);
 if (VAR_47) {
  FUNC_3(&VAR_34->dev, "Failed to add irq_chip %d\n", VAR_47);
  return VAR_47;
 }

 for (VAR_48 = 0; VAR_48 < VAR_40; VAR_48++) {
  VAR_47 = FUNC_16(VAR_37->regmap,
     VAR_38[VAR_48].addr,
     VAR_38[VAR_48].mask,
     VAR_38[VAR_48].value);
  if (VAR_47) {
   FUNC_3(&VAR_34->dev,
    "0x%x write err\n",
    VAR_38[VAR_48].addr);
   return VAR_47;
  }
 }

 VAR_47 = FUNC_6(&VAR_34->dev, VAR_4,
         VAR_39, VAR_41, ((void*)0), 0,
         FUNC_15(VAR_37->irq_data));
 if (VAR_47) {
  FUNC_3(&VAR_34->dev, "failed to add MFD devices %d\n", VAR_47);
  goto err_irq;
 }

 VAR_42 = FUNC_11(VAR_36,
    "rockchip,system-power-controller");
 if (VAR_42 && !VAR_10) {
  VAR_19 = VAR_34;
  VAR_10 = VAR_37->pm_pwroff_fn;
 }

 if (VAR_42 && !VAR_11) {
  if (!VAR_19)
   VAR_19 = VAR_34;
  VAR_11 = VAR_37->pm_pwroff_prep_fn;
 }

 return 0;

err_irq:
 FUNC_14(VAR_34->irq, VAR_37->irq_data);
 return VAR_47;
}
