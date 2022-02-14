
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct sec_pmic_dev {unsigned long device_type; int wakeup; TYPE_1__* dev; struct sec_platform_data* regmap_pmic; struct sec_platform_data* pdata; int irq_base; int irq; struct i2c_client* i2c; } ;
struct sec_platform_data {unsigned long device_type; int (* cfg_pmic_irq ) () ;int wakeup; int irq_base; } ;
struct regmap_config {int dummy; } ;
struct mfd_cell {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_8__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; int irq; } ;


 int FUNC_0 (struct mfd_cell*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sec_platform_data*) ;
 int FUNC_2 (struct sec_platform_data*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 struct sec_platform_data* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 struct sec_pmic_dev* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,int,struct mfd_cell const*,int,int *,int ,int *) ;
 struct sec_platform_data* FUNC_8 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_9 (struct i2c_client*,struct sec_pmic_dev*) ;
 int FUNC_10 (TYPE_1__*) ;
 struct mfd_cell* VAR_3 ;
 struct regmap_config VAR_4 ;
 struct mfd_cell* VAR_5 ;
 struct regmap_config VAR_6 ;
 struct mfd_cell* VAR_7 ;
 struct regmap_config VAR_8 ;
 struct mfd_cell* VAR_9 ;
 struct regmap_config VAR_10 ;
 struct mfd_cell* VAR_11 ;
 struct regmap_config VAR_12 ;
 struct mfd_cell* VAR_13 ;
 struct regmap_config VAR_14 ;
 struct mfd_cell* VAR_15 ;
 struct mfd_cell* VAR_16 ;
 struct regmap_config VAR_17 ;
 struct mfd_cell* VAR_18 ;
 struct regmap_config VAR_19 ;
 unsigned long FUNC_11 (struct i2c_client*,struct i2c_device_id const*) ;
 int FUNC_12 (struct sec_pmic_dev*) ;
 int FUNC_13 (struct sec_pmic_dev*) ;
 int FUNC_14 (struct sec_pmic_dev*) ;
 struct sec_platform_data* FUNC_15 (TYPE_1__*) ;
 struct regmap_config VAR_20 ;
 int FUNC_16 () ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_21,
       const struct i2c_device_id *VAR_22)
{
 struct sec_platform_data *VAR_23 = FUNC_4(&VAR_21->dev);
 const struct regmap_config *VAR_24;
 const struct mfd_cell *VAR_25;
 struct sec_pmic_dev *VAR_26;
 unsigned long VAR_27;
 int VAR_28, VAR_29;

 VAR_26 = FUNC_6(&VAR_21->dev, sizeof(struct sec_pmic_dev),
    VAR_2);
 if (VAR_26 == ((void*)0))
  return -VAR_1;

 FUNC_9(VAR_21, VAR_26);
 VAR_26->dev = &VAR_21->dev;
 VAR_26->i2c = VAR_21;
 VAR_26->irq = VAR_21->irq;
 VAR_27 = FUNC_11(VAR_21, VAR_22);

 if (VAR_26->dev->of_node) {
  VAR_23 = FUNC_15(VAR_26->dev);
  if (FUNC_1(VAR_23)) {
   VAR_28 = FUNC_2(VAR_23);
   return VAR_28;
  }
  VAR_23->device_type = VAR_27;
 }
 if (VAR_23) {
  VAR_26->device_type = VAR_23->device_type;
  VAR_26->irq_base = VAR_23->irq_base;
  VAR_26->wakeup = VAR_23->wakeup;
  VAR_26->pdata = VAR_23;
 }

 switch (VAR_26->device_type) {
 case 136:
  VAR_24 = &VAR_4;
  break;
 case 135:
  VAR_24 = &VAR_6;
  break;
 case 134:
  VAR_24 = &VAR_8;
  break;
 case 133:
  VAR_24 = &VAR_10;
  break;
 case 132:
  VAR_24 = &VAR_12;
  break;
 case 129:
  VAR_24 = &VAR_17;
  break;
 case 128:
  VAR_24 = &VAR_19;
  break;
 case 131:
  VAR_24 = &VAR_14;
  break;
 default:
  VAR_24 = &VAR_20;
  break;
 }

 VAR_26->regmap_pmic = FUNC_8(VAR_21, VAR_24);
 if (FUNC_1(VAR_26->regmap_pmic)) {
  VAR_28 = FUNC_2(VAR_26->regmap_pmic);
  FUNC_3(&VAR_21->dev, "Failed to allocate register map: %d\n",
   VAR_28);
  return VAR_28;
 }

 if (VAR_23 && VAR_23->cfg_pmic_irq)
  VAR_23->cfg_pmic_irq();

 FUNC_12(VAR_26);

 FUNC_10(VAR_26->dev);

 switch (VAR_26->device_type) {
 case 130:
  VAR_25 = VAR_15;
  VAR_29 = FUNC_0(VAR_15);
  break;
 case 129:
  VAR_25 = VAR_16;
  VAR_29 = FUNC_0(VAR_16);
  break;
 case 128:
  VAR_25 = VAR_18;
  VAR_29 = FUNC_0(VAR_18);
  break;
 case 136:
  VAR_25 = VAR_3;
  VAR_29 = FUNC_0(VAR_3);
  break;
 case 135:
  VAR_25 = VAR_5;
  VAR_29 = FUNC_0(VAR_5);
  break;
 case 134:
  VAR_25 = VAR_7;
  VAR_29 = FUNC_0(VAR_7);
  break;
 case 133:
  VAR_25 = VAR_9;
  VAR_29 = FUNC_0(VAR_9);
  break;
 case 132:
  VAR_25 = VAR_11;
  VAR_29 = FUNC_0(VAR_11);
  break;
 case 131:
  VAR_25 = VAR_13;
  VAR_29 = FUNC_0(VAR_13);
  break;
 default:
  FUNC_3(&VAR_21->dev, "Unsupported device type (%lu)\n",
   VAR_26->device_type);
  return -VAR_0;
 }
 VAR_28 = FUNC_7(VAR_26->dev, -1, VAR_25, VAR_29,
       ((void*)0), 0, ((void*)0));
 if (VAR_28)
  return VAR_28;

 FUNC_5(VAR_26->dev, VAR_26->wakeup);
 FUNC_13(VAR_26);
 FUNC_14(VAR_26);

 return VAR_28;
}
