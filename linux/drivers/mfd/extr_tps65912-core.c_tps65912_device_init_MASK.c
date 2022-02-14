
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65912 {int irq_data; int irq; int dev; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int *,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(struct tps65912 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4->regmap, VAR_4->irq, VAR_0, 0,
      &VAR_3, &VAR_4->irq_data);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_4->dev, VAR_1, VAR_2,
         FUNC_0(VAR_2), ((void*)0), 0,
         FUNC_4(VAR_4->irq_data));
 if (VAR_5) {
  FUNC_3(VAR_4->irq, VAR_4->irq_data);
  return VAR_5;
 }

 return 0;
}
