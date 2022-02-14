
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_8254 {int next_div1; int next_div2; unsigned int osc_base; } ;



 unsigned int VAR_0 ;


 unsigned int VAR_1 ;

void FUNC_0(struct comedi_8254 *VAR_2,
         unsigned int *VAR_3,
         unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_2->next_div1 ? VAR_2->next_div1 : VAR_1;
 unsigned int VAR_6 = VAR_2->next_div2 ? VAR_2->next_div2 : VAR_1;
 unsigned int VAR_7 = VAR_5 * VAR_6;
 unsigned int VAR_8 = 0xffffffff;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;


 if (VAR_7 * VAR_2->osc_base == *VAR_3 &&
     VAR_5 > 1 && VAR_5 <= VAR_1 &&
     VAR_6 > 1 && VAR_6 <= VAR_1 &&

     VAR_7 > VAR_5 && VAR_7 > VAR_6 &&
     VAR_7 * VAR_2->osc_base > VAR_7 &&
     VAR_7 * VAR_2->osc_base > VAR_2->osc_base)
  return;

 VAR_7 = *VAR_3 / VAR_2->osc_base;
 VAR_6 = VAR_1;
 VAR_14 = VAR_7 / VAR_6;
 if (VAR_14 < 2)
  VAR_14 = 2;
 for (VAR_5 = VAR_14; VAR_5 <= VAR_7 / VAR_5 + 1 && VAR_5 <= VAR_1; VAR_5++) {
  for (VAR_6 = VAR_7 / VAR_5;
       VAR_5 * VAR_6 <= VAR_7 + VAR_5 + 1 && VAR_6 <= VAR_1; VAR_6++) {
   VAR_15 = VAR_2->osc_base * VAR_5 * VAR_6;
   if (VAR_15 <= *VAR_3 && VAR_15 > VAR_9) {
    VAR_9 = VAR_15;
    VAR_11 = VAR_5;
    VAR_13 = VAR_6;
   }
   if (VAR_15 >= *VAR_3 && VAR_15 < VAR_8) {
    VAR_8 = VAR_15;
    VAR_10 = VAR_5;
    VAR_12 = VAR_6;
   }
  }
 }

 switch (VAR_4 & VAR_0) {
 case 129:
 default:
  VAR_17 = VAR_10 * VAR_12 * VAR_2->osc_base;
  VAR_16 = VAR_11 * VAR_13 * VAR_2->osc_base;
  if (VAR_17 - *VAR_3 < *VAR_3 - VAR_16) {
   VAR_5 = VAR_10;
   VAR_6 = VAR_12;
  } else {
   VAR_5 = VAR_11;
   VAR_6 = VAR_13;
  }
  break;
 case 128:
  VAR_5 = VAR_10;
  VAR_6 = VAR_12;
  break;
 case 130:
  VAR_5 = VAR_11;
  VAR_6 = VAR_13;
  break;
 }

 *VAR_3 = VAR_5 * VAR_6 * VAR_2->osc_base;
 VAR_2->next_div1 = VAR_5;
 VAR_2->next_div2 = VAR_6;
}
