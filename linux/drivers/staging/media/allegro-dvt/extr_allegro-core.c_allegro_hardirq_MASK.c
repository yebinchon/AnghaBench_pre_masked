
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct allegro_dev {int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_5, void *VAR_6)
{
 struct allegro_dev *VAR_7 = VAR_6;
 unsigned int VAR_8;

 FUNC_0(VAR_7->regmap, VAR_1, &VAR_8);
 if (!(VAR_8 & VAR_2))
  return VAR_3;

 FUNC_1(VAR_7->regmap, VAR_0, VAR_8);

 return VAR_4;
}
