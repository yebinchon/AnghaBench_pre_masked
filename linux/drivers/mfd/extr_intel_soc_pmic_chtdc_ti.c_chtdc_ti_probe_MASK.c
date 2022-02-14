
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_soc_pmic {int irq_chip_data; int irq; int regmap; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct intel_soc_pmic* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,int ,int ,int ,int *,int ,int ) ;
 int FUNC_5 (struct device*,int ,int ,int ,int ,int *,int *) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct intel_soc_pmic*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct intel_soc_pmic *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_7(VAR_7, VAR_9);

 VAR_9->regmap = FUNC_6(VAR_7, &VAR_6);
 if (FUNC_1(VAR_9->regmap))
  return FUNC_2(VAR_9->regmap);
 VAR_9->irq = VAR_7->irq;

 VAR_10 = FUNC_5(VAR_8, VAR_9->regmap, VAR_9->irq,
           VAR_2, 0,
           &VAR_5,
           &VAR_9->irq_chip_data);
 if (VAR_10)
  return VAR_10;

 return FUNC_4(VAR_8, VAR_3, VAR_4,
        FUNC_0(VAR_4), ((void*)0), 0,
        FUNC_8(VAR_9->irq_chip_data));
}
