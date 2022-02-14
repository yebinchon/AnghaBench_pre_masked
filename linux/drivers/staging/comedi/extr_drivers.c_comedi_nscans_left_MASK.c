
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*) ;
 unsigned int FUNC_2 (struct comedi_subdevice*) ;

unsigned int FUNC_3(struct comedi_subdevice *VAR_0,
    unsigned int VAR_1)
{
 if (VAR_1 == 0) {
  unsigned int VAR_2 = FUNC_1(VAR_0);

  VAR_1 = VAR_2 / FUNC_2(VAR_0);
 }
 return FUNC_0(VAR_0, VAR_1);
}
