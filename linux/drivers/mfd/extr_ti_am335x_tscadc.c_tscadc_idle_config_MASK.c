
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_tscadc_dev {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct ti_tscadc_dev *VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = VAR_3 | VAR_1 |
   VAR_2 | VAR_4;

 FUNC_0(VAR_5->regmap, VAR_0, VAR_6);
}
