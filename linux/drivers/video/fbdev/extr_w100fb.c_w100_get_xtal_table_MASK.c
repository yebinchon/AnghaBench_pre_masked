
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w100_pll_info {int dummy; } ;
struct pll_entries {int xtal_freq; struct w100_pll_info* pll_table; } ;


 struct pll_entries* VAR_0 ;

struct w100_pll_info *FUNC_0(unsigned int VAR_1)
{
 struct pll_entries *VAR_2 = VAR_0;

 do {
  if (VAR_1 == VAR_2->xtal_freq)
   return VAR_2->pll_table;
  VAR_2++;
 } while (VAR_2->xtal_freq);
 return 0;
}
