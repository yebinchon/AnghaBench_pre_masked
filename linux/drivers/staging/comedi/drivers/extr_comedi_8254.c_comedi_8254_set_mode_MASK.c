
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_8254 {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct comedi_8254*,unsigned int,int ) ;

int FUNC_2(struct comedi_8254 *VAR_5, unsigned int VAR_6,
    unsigned int VAR_7)
{
 unsigned int VAR_8;

 if (VAR_6 > 2)
  return -VAR_0;
 if (VAR_7 > (VAR_4 | VAR_1))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_6) |
        VAR_2 |
        VAR_7;
 FUNC_1(VAR_5, VAR_8, VAR_3);

 return 0;
}
