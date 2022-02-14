
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct pm80x_chip {int irq_data; int regmap_irq_chip; int irq; struct regmap* regmap; int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct regmap*,int ,unsigned long,int,int ,int *) ;
 int FUNC_2 (struct regmap*,int ,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct pm80x_chip *VAR_6)
{
 struct regmap *VAR_7 = VAR_6->regmap;
 unsigned long VAR_8 = VAR_1;
 int VAR_9, VAR_10, VAR_11 = -VAR_0;

 if (!VAR_7 || !VAR_6->irq) {
  FUNC_0(VAR_6->dev, "incorrect parameters\n");
  return -VAR_0;
 }





 VAR_10 =
     VAR_4 | VAR_5 |
     VAR_2;

 VAR_9 = VAR_4;
 VAR_11 = FUNC_2(VAR_7, VAR_3, VAR_10, VAR_9);




 FUNC_3(1000, 3000);

 if (VAR_11 < 0)
  goto out;

 VAR_11 =
     FUNC_1(VAR_6->regmap, VAR_6->irq, VAR_8, -1,
    VAR_6->regmap_irq_chip, &VAR_6->irq_data);

out:
 return VAR_11;
}
