
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct da9055_pdata {int irq_base; int (* init ) (struct da9055*) ;} ;
struct da9055 {int irq_base; int dev; int irq_data; int chip_irq; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct da9055*,int ,int,int*) ;
 int VAR_4 ;
 struct da9055_pdata* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,int ,int *,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct da9055*) ;

int FUNC_8(struct da9055 *VAR_5)
{
 struct da9055_pdata *VAR_6 = FUNC_2(VAR_5->dev);
 int VAR_7;
 uint8_t VAR_8[3] = {0xFF, 0xFF, 0xFF};

 if (VAR_6 && VAR_6->init != ((void*)0))
  VAR_6->init(VAR_5);

 if (!VAR_6 || !VAR_6->irq_base)
  VAR_5->irq_base = -1;
 else
  VAR_5->irq_base = VAR_6->irq_base;

 VAR_7 = FUNC_1(VAR_5, VAR_0, 3, VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_5->regmap, VAR_5->chip_irq,
      VAR_2 | VAR_1,
      VAR_5->irq_base, &VAR_4,
      &VAR_5->irq_data);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->irq_base = FUNC_6(VAR_5->irq_data);

 VAR_7 = FUNC_3(VAR_5->dev, -1,
         VAR_3, FUNC_0(VAR_3),
         ((void*)0), VAR_5->irq_base, ((void*)0));
 if (VAR_7)
  goto err;

 return 0;

err:
 FUNC_4(VAR_5->dev);
 return VAR_7;
}
