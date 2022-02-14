
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tango_thermal_priv {int thresh_idx; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, int *VAR_3)
{
 struct tango_thermal_priv *VAR_4 = VAR_2;
 int VAR_5 = VAR_4->thresh_idx;

 if (FUNC_1(VAR_4->base, VAR_5)) {

  while (VAR_5 < VAR_0 && FUNC_1(VAR_4->base, ++VAR_5))
   FUNC_0();
  VAR_5 = VAR_5 - 1;
 } else {

  while (VAR_5 > VAR_1 && !FUNC_1(VAR_4->base, --VAR_5))
   FUNC_0();
 }

 *VAR_3 = (VAR_5 * 9 / 2 - 38) * 1000;
 VAR_4->thresh_idx = VAR_5;

 return 0;
}
