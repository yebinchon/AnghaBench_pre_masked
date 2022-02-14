
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_8254 {int divisor1; int divisor2; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct comedi_8254*,unsigned int,unsigned int) ;
 int FUNC_1 (struct comedi_8254*,unsigned int,int ) ;

void FUNC_2(struct comedi_8254 *VAR_3,
         unsigned int VAR_4,
         unsigned int VAR_5,
         bool VAR_6)
{
 unsigned int VAR_7;

 if (VAR_4 > 2 || VAR_5 > 2 || VAR_4 == VAR_5)
  return;

 if (VAR_6)
  VAR_7 = VAR_2 | VAR_0;
 else
  VAR_7 = VAR_1 | VAR_0;

 FUNC_0(VAR_3, VAR_4, VAR_7);
 FUNC_0(VAR_3, VAR_5, VAR_7);

 if (VAR_6) {





  FUNC_1(VAR_3, VAR_5, VAR_3->divisor2);
  FUNC_1(VAR_3, VAR_4, VAR_3->divisor1);
 }
}
