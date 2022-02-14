
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; int n_chan; scalar_t__ private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1,
        struct comedi_insn *VAR_2,
        unsigned int *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1->private;

 if (FUNC_0(VAR_1, VAR_3)) {
  unsigned int VAR_5 = VAR_1->state;

  if (VAR_1->n_chan == 16) {






   VAR_5 |= VAR_5 << 16;
  }
  FUNC_1(VAR_5, VAR_0->iobase + VAR_4);
 }

 VAR_3[1] = VAR_1->state;

 return VAR_2->n;
}
