
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w100fb_par {struct w100_pll_info* pll_table; } ;
struct w100_pll_info {int freq; } ;


 int FUNC_0 (struct w100_pll_info*) ;

__attribute__((used)) static int FUNC_1(struct w100fb_par *VAR_0, unsigned int VAR_1)
{
 struct w100_pll_info *VAR_2 = VAR_0->pll_table;

 do {
  if (VAR_1 == VAR_2->freq) {
   return FUNC_0(VAR_2);
  }
  VAR_2++;
 } while(VAR_2->freq);
 return 0;
}
