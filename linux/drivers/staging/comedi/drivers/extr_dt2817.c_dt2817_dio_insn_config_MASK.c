
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,unsigned int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3,
      unsigned int *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3->chanspec);
 unsigned int VAR_6 = 0;
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_5 < 8)
  VAR_7 = 0x000000ff;
 else if (VAR_5 < 16)
  VAR_7 = 0x0000ff00;
 else if (VAR_5 < 24)
  VAR_7 = 0x00ff0000;
 else
  VAR_7 = 0xff000000;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_2->io_bits & 0x000000ff)
  VAR_6 |= 0x1;
 if (VAR_2->io_bits & 0x0000ff00)
  VAR_6 |= 0x2;
 if (VAR_2->io_bits & 0x00ff0000)
  VAR_6 |= 0x4;
 if (VAR_2->io_bits & 0xff000000)
  VAR_6 |= 0x8;

 FUNC_2(VAR_6, VAR_1->iobase + VAR_0);

 return VAR_3->n;
}
