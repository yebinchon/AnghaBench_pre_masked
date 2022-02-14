
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct regmap_irq_type {int types_supported; int type_reg_offset; int type_rising_val; int type_falling_val; int type_level_high_val; int type_level_low_val; } ;
struct regmap_irq_chip_data {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; } ;
struct TYPE_10__ {int regmap; int chip_type; } ;
struct bd70528_data {TYPE_3__ chip; int rtc_timer_lock; } ;
struct TYPE_9__ {struct regmap_irq_type type; } ;
struct TYPE_8__ {int num_irqs; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_2__* VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 struct bd70528_data* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int ,TYPE_2__*,int,int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ,int ,TYPE_1__*,struct regmap_irq_chip_data**) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct regmap_irq_chip_data*) ;
 int FUNC_12 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_17,
        const struct i2c_device_id *VAR_18)
{
 struct bd70528_data *VAR_19;
 struct regmap_irq_chip_data *VAR_20;
 int VAR_21, VAR_22;

 if (!VAR_17->irq) {
  FUNC_4(&VAR_17->dev, "No IRQ configured\n");
  return -VAR_4;
 }

 VAR_19 = FUNC_6(&VAR_17->dev, sizeof(*VAR_19), VAR_6);
 if (!VAR_19)
  return -VAR_5;

 FUNC_10(&VAR_19->rtc_timer_lock);

 FUNC_5(&VAR_17->dev, &VAR_19->chip);

 VAR_19->chip.chip_type = VAR_12;
 VAR_19->chip.regmap = FUNC_9(VAR_17, &VAR_16);
 if (FUNC_1(VAR_19->chip.regmap)) {
  FUNC_4(&VAR_17->dev, "Failed to initialize Regmap\n");
  return FUNC_2(VAR_19->chip.regmap);
 }





 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_14); VAR_22++)
  VAR_14[VAR_22].type.types_supported = 0;


 for (VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
  struct regmap_irq_type *VAR_23;

  VAR_23 = &VAR_14[VAR_0 + VAR_22].type;
  VAR_23->type_reg_offset = 2 * VAR_22;
  VAR_23->type_rising_val = 0x20;
  VAR_23->type_falling_val = 0x10;
  VAR_23->type_level_high_val = 0x40;
  VAR_23->type_level_low_val = 0x50;
  VAR_23->types_supported = (VAR_8 |
    VAR_9 | VAR_10);
 }

 VAR_21 = FUNC_8(&VAR_17->dev, VAR_19->chip.regmap,
           VAR_17->irq, VAR_7, 0,
           &VAR_13, &VAR_20);
 if (VAR_21) {
  FUNC_4(&VAR_17->dev, "Failed to add IRQ chip\n");
  return VAR_21;
 }
 FUNC_3(&VAR_17->dev, "Registered %d IRQs for chip\n",
  VAR_13.num_irqs);







 VAR_21 = FUNC_12(VAR_19->chip.regmap,
     VAR_3,
     VAR_1, 0);

 VAR_21 = FUNC_7(&VAR_17->dev, VAR_11,
       VAR_15,
       FUNC_0(VAR_15), ((void*)0), 0,
       FUNC_11(VAR_20));
 if (VAR_21)
  FUNC_4(&VAR_17->dev, "Failed to create subdevices\n");

 return VAR_21;
}
