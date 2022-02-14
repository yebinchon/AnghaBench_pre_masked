
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_8254 {int dummy; } ;


 int FUNC_0 (struct comedi_8254*,unsigned int,unsigned int) ;

void FUNC_1(struct comedi_8254 *VAR_0,
         unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 if (VAR_1 > 2)
  return;
 if (VAR_2 > 0xffff)
  return;


 VAR_3 = VAR_2 & 0xff;
 FUNC_0(VAR_0, VAR_3, VAR_1);
 VAR_3 = (VAR_2 >> 8) & 0xff;
 FUNC_0(VAR_0, VAR_3, VAR_1);
}
