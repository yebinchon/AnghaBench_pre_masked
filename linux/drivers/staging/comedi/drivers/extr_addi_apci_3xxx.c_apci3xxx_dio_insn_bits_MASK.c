
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1,
      struct comedi_insn *VAR_2,
      unsigned int *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (VAR_4) {
  if (VAR_4 & 0xff)
   FUNC_2(VAR_1->state & 0xff, VAR_0->iobase + 80);
  if (VAR_4 & 0xff0000)
   FUNC_2((VAR_1->state >> 16) & 0xff, VAR_0->iobase + 112);
 }

 VAR_5 = FUNC_1(VAR_0->iobase + 80);
 VAR_5 |= (FUNC_1(VAR_0->iobase + 64) << 8);
 if (VAR_1->io_bits & 0xff0000)
  VAR_5 |= (FUNC_1(VAR_0->iobase + 112) << 16);
 else
  VAR_5 |= (FUNC_1(VAR_0->iobase + 96) << 16);

 VAR_3[1] = VAR_5;

 return VAR_2->n;
}
