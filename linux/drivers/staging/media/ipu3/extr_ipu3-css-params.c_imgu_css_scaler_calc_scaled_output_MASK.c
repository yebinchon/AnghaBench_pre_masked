
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imgu_css_scaler_info {unsigned int phase_step; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int
FUNC_0(unsigned int VAR_3,
       struct imgu_css_scaler_info *VAR_4)
{
 unsigned int VAR_5 = VAR_3 * VAR_4->phase_step +
   (1 - VAR_2 / 2) * VAR_0 -
   VAR_0 / (2 * VAR_1);
 unsigned int VAR_6 = ((VAR_2 / 2) * VAR_0 +
   VAR_0 / (2 * VAR_1)) *
   VAR_0 + VAR_4->phase_step / 2;

 return ((VAR_5 + (VAR_6 - VAR_0 * VAR_4->phase_step) /
  VAR_0) / (2 * VAR_0)) * 2;
}
