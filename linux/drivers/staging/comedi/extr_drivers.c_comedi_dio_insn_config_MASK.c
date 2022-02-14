
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;




int FUNC_1(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4,
      struct comedi_insn *VAR_5,
      unsigned int *VAR_6,
      unsigned int VAR_7)
{
 unsigned int VAR_8 = 1 << FUNC_0(VAR_5->chanspec);

 if (!VAR_7)
  VAR_7 = VAR_8;

 switch (VAR_6[0]) {
 case 130:
  VAR_4->io_bits &= ~VAR_7;
  break;

 case 129:
  VAR_4->io_bits |= VAR_7;
  break;

 case 128:
  VAR_6[1] = (VAR_4->io_bits & VAR_7) ? VAR_1 : VAR_0;
  return VAR_5->n;

 default:
  return -VAR_2;
 }

 return 0;
}
