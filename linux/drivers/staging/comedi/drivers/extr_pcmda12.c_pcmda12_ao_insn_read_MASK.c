
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmda12_private {scalar_t__ simultaneous_xfer_mode; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int iobase; struct pcmda12_private* private; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
    struct comedi_subdevice *VAR_1,
    struct comedi_insn *VAR_2,
    unsigned int *VAR_3)
{
 struct pcmda12_private *VAR_4 = VAR_0->private;





 if (VAR_4->simultaneous_xfer_mode)
  FUNC_1(VAR_0->iobase);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
