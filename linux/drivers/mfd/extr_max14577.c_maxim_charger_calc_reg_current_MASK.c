
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct maxim_charger_current {unsigned int max; unsigned int min; unsigned int high_start; unsigned int high_step; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

int FUNC_1(const struct maxim_charger_current *VAR_3,
  unsigned int VAR_4, unsigned int VAR_5, u8 *VAR_6)
{
 unsigned int VAR_7 = 0xf;

 if (VAR_4 > VAR_5)
  return -VAR_2;

 if (VAR_4 > VAR_3->max || VAR_5 < VAR_3->min)
  return -VAR_2;

 if (VAR_5 < VAR_3->high_start) {




  *VAR_6 = 0x0;
  return 0;
 }


 VAR_5 = FUNC_0(VAR_3->max, VAR_5);
 VAR_5 -= VAR_3->high_start;





 VAR_7 = VAR_5 / VAR_3->high_step;


 *VAR_6 = 0x1 << VAR_1;

 *VAR_6 |= VAR_7 << VAR_0;

 return 0;
}
