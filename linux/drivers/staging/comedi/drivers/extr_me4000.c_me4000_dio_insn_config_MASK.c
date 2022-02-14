
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_10,
      struct comedi_subdevice *VAR_11,
      struct comedi_insn *VAR_12,
      unsigned int *VAR_13)
{
 unsigned int VAR_14 = FUNC_0(VAR_12->chanspec);
 unsigned int VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 if (VAR_14 < 8)
  VAR_15 = 0x000000ff;
 else if (VAR_14 < 16)
  VAR_15 = 0x0000ff00;
 else if (VAR_14 < 24)
  VAR_15 = 0x00ff0000;
 else
  VAR_15 = 0xff000000;

 VAR_17 = FUNC_1(VAR_10, VAR_11, VAR_12, VAR_13, VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_16 = FUNC_2(VAR_10->iobase + VAR_8);
 VAR_16 &= ~(VAR_0 | VAR_1 |
   VAR_2 | VAR_3 |
   VAR_4 | VAR_5 |
   VAR_6 | VAR_7);
 if (VAR_11->io_bits & 0x000000ff)
  VAR_16 |= VAR_0;
 if (VAR_11->io_bits & 0x0000ff00)
  VAR_16 |= VAR_2;
 if (VAR_11->io_bits & 0x00ff0000)
  VAR_16 |= VAR_4;
 if (VAR_11->io_bits & 0xff000000)
  VAR_16 |= VAR_6;






 if (FUNC_2(VAR_10->iobase + VAR_9)) {
  VAR_11->io_bits |= 0x000000ff;
  VAR_11->io_bits &= ~0x0000ff00;
  VAR_16 |= VAR_0;
  VAR_16 &= ~(VAR_2 | VAR_3);
 }

 FUNC_3(VAR_16, VAR_10->iobase + VAR_8);

 return VAR_12->n;
}
