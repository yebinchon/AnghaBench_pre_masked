
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_thermal_data {unsigned int coef_b; unsigned int coef_m; unsigned int coef_div; unsigned int temp_mask; scalar_t__ inverted; } ;
typedef unsigned int s64 ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct armada_thermal_data *VAR_0,
       unsigned int VAR_1)
{
 s64 VAR_2 = VAR_0->coef_b;
 s64 VAR_3 = VAR_0->coef_m;
 s64 VAR_4 = VAR_0->coef_div;
 unsigned int VAR_5;

 if (VAR_0->inverted)
  VAR_5 = FUNC_0(((VAR_1 * VAR_4) + VAR_2), VAR_3);
 else
  VAR_5 = FUNC_0((VAR_2 - (VAR_1 * VAR_4)), VAR_3);

 return VAR_5 & VAR_0->temp_mask;
}
