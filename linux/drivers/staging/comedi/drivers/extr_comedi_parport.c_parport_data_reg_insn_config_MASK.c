
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
     struct comedi_subdevice *VAR_3,
     struct comedi_insn *VAR_4,
     unsigned int *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, 0xff);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_1(VAR_2->iobase + VAR_1);
 if (VAR_3->io_bits)
  VAR_6 &= ~VAR_0;
 else
  VAR_6 |= VAR_0;
 FUNC_2(VAR_6, VAR_2->iobase + VAR_1);

 return VAR_4->n;
}
