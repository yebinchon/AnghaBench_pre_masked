
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_8254 {unsigned int osc_base; unsigned int next_div; } ;



 unsigned int VAR_0 ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_1 ;

void FUNC_2(struct comedi_8254 *VAR_2,
        unsigned int *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 switch (VAR_4 & VAR_0) {
 default:
 case 129:
  VAR_5 = FUNC_0(*VAR_3, VAR_2->osc_base);
  break;
 case 128:
  VAR_5 = FUNC_1(*VAR_3, VAR_2->osc_base);
  break;
 case 130:
  VAR_5 = *VAR_3 / VAR_2->osc_base;
  break;
 }
 if (VAR_5 < 2)
  VAR_5 = 2;
 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;

 *VAR_3 = VAR_5 * VAR_2->osc_base;
 VAR_2->next_div = VAR_5;
}
