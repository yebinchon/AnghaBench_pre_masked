
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_cec {int regmap; int irq_status; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct stm32_cec *VAR_6 = VAR_5;

 FUNC_0(VAR_6->regmap, VAR_2, &VAR_6->irq_status);

 FUNC_1(VAR_6->regmap, VAR_2,
      VAR_1 | VAR_0,
      VAR_1 | VAR_0);

 return VAR_3;
}
