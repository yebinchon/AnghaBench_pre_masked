
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int index; int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,unsigned int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0,
    struct comedi_subdevice *VAR_1,
    struct comedi_insn *VAR_2,
    unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2->chanspec);
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_4 < 8)
  VAR_5 = 0x000000ff;
 else if (VAR_4 < 16)
  VAR_5 = 0x0000ff00;
 else if (VAR_4 < 24)
  VAR_5 = 0x00ff0000;
 else
  VAR_5 = 0xff000000;

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_3(VAR_1->io_bits, VAR_0->iobase + FUNC_0(VAR_1->index));

 return VAR_2->n;
}
