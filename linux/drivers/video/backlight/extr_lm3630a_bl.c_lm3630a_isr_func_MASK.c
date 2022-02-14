
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3630a_chip {int dev; int work; int irqthread; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lm3630a_chip*,int ,int,int) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 int VAR_6;
 struct lm3630a_chip *VAR_7 = VAR_5;
 unsigned long VAR_8 = FUNC_2(VAR_0);

 FUNC_3(VAR_7->irqthread, &VAR_7->work, VAR_8);

 VAR_6 = FUNC_1(VAR_7, VAR_3, 0x80, 0x00);
 if (VAR_6 < 0) {
  FUNC_0(VAR_7->dev, "i2c failed to access register\n");
  return VAR_2;
 }
 return VAR_1;
}
