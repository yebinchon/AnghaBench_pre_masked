
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_8254 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct comedi_8254*,unsigned int) ;
 int FUNC_2 (struct comedi_8254*,int,int ) ;

unsigned int FUNC_3(struct comedi_8254 *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3 > 2)
  return 0;


 FUNC_2(VAR_2, FUNC_0(VAR_3) | VAR_0,
        VAR_1);


 VAR_4 = FUNC_1(VAR_2, VAR_3);
 VAR_4 |= (FUNC_1(VAR_2, VAR_3) << 8);

 return VAR_4;
}
