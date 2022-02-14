
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sprd_pmic_data {int num_irqs; scalar_t__ irq_base; } ;
struct TYPE_3__ {int num_regs; int num_irqs; int mask_invert; TYPE_2__* irqs; scalar_t__ ack_base; scalar_t__ mask_base; scalar_t__ status_base; int name; } ;
struct sprd_pmic {int irq_data; TYPE_1__ irq_chip; int irq; int regmap; TYPE_2__* irqs; int * dev; } ;
struct spi_device {int dev; int irq; } ;
struct regmap_irq {int dummy; } ;
struct TYPE_4__ {int reg_offset; int mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,int,int,int ) ;
 struct sprd_pmic* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int ,int ,int ,int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ,int,int ,TYPE_1__*,int *) ;
 int FUNC_10 (int *,int *,int *,int *) ;
 struct sprd_pmic_data* FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct spi_device*,struct sprd_pmic*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_14(struct spi_device *VAR_11)
{
 struct sprd_pmic *VAR_12;
 const struct sprd_pmic_data *VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_11(&VAR_11->dev);
 if (!VAR_13) {
  FUNC_4(&VAR_11->dev, "No matching driver data found\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_7(&VAR_11->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->regmap = FUNC_10(&VAR_11->dev, &VAR_10,
      &VAR_11->dev, &VAR_8);
 if (FUNC_2(VAR_12->regmap)) {
  VAR_14 = FUNC_3(VAR_12->regmap);
  FUNC_4(&VAR_11->dev, "Failed to allocate register map %d\n", VAR_14);
  return VAR_14;
 }

 FUNC_13(VAR_11, VAR_12);
 VAR_12->dev = &VAR_11->dev;
 VAR_12->irq = VAR_11->irq;

 VAR_12->irq_chip.name = FUNC_5(&VAR_11->dev);
 VAR_12->irq_chip.status_base =
  VAR_13->irq_base + VAR_7;
 VAR_12->irq_chip.mask_base = VAR_13->irq_base + VAR_6;
 VAR_12->irq_chip.ack_base = 0;
 VAR_12->irq_chip.num_regs = 1;
 VAR_12->irq_chip.num_irqs = VAR_13->num_irqs;
 VAR_12->irq_chip.mask_invert = 1;

 VAR_12->irqs = FUNC_6(&VAR_11->dev,
       VAR_13->num_irqs, sizeof(struct regmap_irq),
       VAR_2);
 if (!VAR_12->irqs)
  return -VAR_1;

 VAR_12->irq_chip.irqs = VAR_12->irqs;
 for (VAR_15 = 0; VAR_15 < VAR_13->num_irqs; VAR_15++) {
  VAR_12->irqs[VAR_15].reg_offset = VAR_15 / VAR_13->num_irqs;
  VAR_12->irqs[VAR_15].mask = FUNC_1(VAR_15 % VAR_13->num_irqs);
 }

 VAR_14 = FUNC_9(&VAR_11->dev, VAR_12->regmap, VAR_12->irq,
           VAR_4 | VAR_3, 0,
           &VAR_12->irq_chip, &VAR_12->irq_data);
 if (VAR_14) {
  FUNC_4(&VAR_11->dev, "Failed to add PMIC irq chip %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_8(&VAR_11->dev, VAR_5,
       VAR_9, FUNC_0(VAR_9),
       ((void*)0), 0,
       FUNC_12(VAR_12->irq_data));
 if (VAR_14) {
  FUNC_4(&VAR_11->dev, "Failed to register device %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
