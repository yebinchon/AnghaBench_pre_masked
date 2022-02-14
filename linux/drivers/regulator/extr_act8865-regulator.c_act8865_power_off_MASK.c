
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct act8865 {int off_mask; int off_reg; int regmap; } ;


 int VAR_0 ;
 struct act8865* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct act8865 *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->regmap, VAR_1->off_reg, VAR_1->off_mask);
 while (1);
}
