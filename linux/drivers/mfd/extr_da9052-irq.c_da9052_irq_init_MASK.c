
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da9052 {int irq_data; int chip_irq; int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct da9052*,int ,char*,int ,struct da9052*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int,int *,int *) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct da9052 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_3(VAR_5->regmap, VAR_5->chip_irq,
      VAR_2 | VAR_1,
      -1, &VAR_4,
      &VAR_5->irq_data);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5->dev, "regmap_add_irq_chip failed: %d\n", VAR_6);
  goto regmap_err;
 }

 FUNC_2(VAR_5->chip_irq);

 VAR_6 = FUNC_0(VAR_5, VAR_0, "adc-irq",
       VAR_3, VAR_5);

 if (VAR_6 != 0) {
  FUNC_1(VAR_5->dev, "DA9052_IRQ_ADC_EOM failed: %d\n", VAR_6);
  goto request_irq_err;
 }

 return 0;

request_irq_err:
 FUNC_4(VAR_5->chip_irq, VAR_5->irq_data);
regmap_err:
 return VAR_6;

}
