
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; int n_chan; scalar_t__ private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2,
          unsigned int *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1->private;
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_3);
 if (VAR_5) {
  if (VAR_5 & 0x00ff)
   FUNC_1(VAR_1->state & 0xff, VAR_0->iobase + VAR_4);
  if ((VAR_5 & 0xff00) && (VAR_1->n_chan > 8))
   FUNC_1((VAR_1->state >> 8) & 0xff, VAR_0->iobase + VAR_4 + 1);
  if ((VAR_5 & 0xff0000) && (VAR_1->n_chan > 16))
   FUNC_1((VAR_1->state >> 16) & 0xff, VAR_0->iobase + VAR_4 + 2);
  if ((VAR_5 & 0xff000000) && (VAR_1->n_chan > 24))
   FUNC_1((VAR_1->state >> 24) & 0xff, VAR_0->iobase + VAR_4 + 3);
 }

 VAR_3[1] = VAR_1->state;

 return VAR_2->n;
}
