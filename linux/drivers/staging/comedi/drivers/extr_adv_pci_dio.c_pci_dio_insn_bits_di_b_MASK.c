
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; scalar_t__ private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {unsigned long iobase; } ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1,
      struct comedi_insn *VAR_2,
      unsigned int *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1->private;
 unsigned long VAR_5 = VAR_0->iobase + VAR_4;

 VAR_3[1] = FUNC_0(VAR_5);
 if (VAR_1->n_chan > 8)
  VAR_3[1] |= (FUNC_0(VAR_5 + 1) << 8);
 if (VAR_1->n_chan > 16)
  VAR_3[1] |= (FUNC_0(VAR_5 + 2) << 16);
 if (VAR_1->n_chan > 24)
  VAR_3[1] |= (FUNC_0(VAR_5 + 3) << 24);

 return VAR_2->n;
}
