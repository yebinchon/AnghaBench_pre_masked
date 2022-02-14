
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2,
          unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2->chanspec);
 unsigned int VAR_5 = FUNC_1(VAR_2->chanspec);
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->n; VAR_7++) {
  VAR_6 = VAR_3[VAR_7];

  VAR_1->readback[VAR_4] = VAR_6;






  if (FUNC_4(VAR_1, VAR_5))
   VAR_6 = VAR_1->maxdata - VAR_6;





  FUNC_5((VAR_6 << 4) & 0xf0, VAR_0->iobase + FUNC_2(VAR_4));
  FUNC_5((VAR_6 >> 4) & 0xff, VAR_0->iobase + FUNC_3(VAR_4));
 }

 return VAR_2->n;
}
