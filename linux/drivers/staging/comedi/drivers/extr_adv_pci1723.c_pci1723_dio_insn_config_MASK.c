
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,unsigned int) ;
 int FUNC_2 (unsigned short,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
       struct comedi_subdevice *VAR_4,
       struct comedi_insn *VAR_5,
       unsigned int *VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_5->chanspec);
 unsigned int VAR_8 = (VAR_7 < 8) ? 0x00ff : 0xff00;
 unsigned short VAR_9 = 0x0000;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
 if (VAR_10)
  return VAR_10;

 if (!(VAR_4->io_bits & 0x00ff))
  VAR_9 |= VAR_1;
 if (!(VAR_4->io_bits & 0xff00))
  VAR_9 |= VAR_0;
 FUNC_2(VAR_9, VAR_3->iobase + VAR_2);

 return VAR_5->n;
}
