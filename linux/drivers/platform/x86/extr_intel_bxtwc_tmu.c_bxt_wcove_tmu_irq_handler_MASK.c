
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcove_tmu {int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct wcove_tmu *VAR_6 = VAR_5;
 unsigned int VAR_7;


 FUNC_0(VAR_6->regmap, VAR_0, &VAR_7);
 if (VAR_7 & VAR_1) {

  FUNC_1(VAR_6->regmap, VAR_0, VAR_7);
  return VAR_2;
 }
 return VAR_3;
}
