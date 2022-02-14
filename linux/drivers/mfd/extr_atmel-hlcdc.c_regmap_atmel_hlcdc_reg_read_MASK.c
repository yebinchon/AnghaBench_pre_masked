
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_hlcdc_regmap {scalar_t__ regs; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1,
           unsigned int *VAR_2)
{
 struct atmel_hlcdc_regmap *VAR_3 = VAR_0;

 *VAR_2 = FUNC_0(VAR_3->regs + VAR_1);

 return 0;
}
