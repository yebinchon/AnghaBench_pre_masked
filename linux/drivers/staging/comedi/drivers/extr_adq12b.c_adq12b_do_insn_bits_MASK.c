
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
          struct comedi_subdevice *VAR_2,
          struct comedi_insn *VAR_3,
          unsigned int *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_4);
 if (VAR_5) {
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
   if ((VAR_5 >> VAR_6) & 0x01) {
    VAR_7 = (VAR_2->state >> VAR_6) & 0x01;
    FUNC_1((VAR_7 << 3) | VAR_6,
         VAR_1->iobase + VAR_0);
   }
  }
 }

 VAR_4[1] = VAR_2->state;

 return VAR_3->n;
}
