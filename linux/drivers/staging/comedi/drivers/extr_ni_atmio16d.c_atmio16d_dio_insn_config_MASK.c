
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct atmio16d_private* private; } ;
struct atmio16d_private {int com_reg_2_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,unsigned int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4,
        struct comedi_insn *VAR_5,
        unsigned int *VAR_6)
{
 struct atmio16d_private *VAR_7 = VAR_3->private;
 unsigned int VAR_8 = FUNC_0(VAR_5->chanspec);
 unsigned int VAR_9;
 int VAR_10;

 if (VAR_8 < 4)
  VAR_9 = 0x0f;
 else
  VAR_9 = 0xf0;

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_7->com_reg_2_state &= ~(VAR_0 | VAR_1);
 if (VAR_4->io_bits & 0x0f)
  VAR_7->com_reg_2_state |= VAR_0;
 if (VAR_4->io_bits & 0xf0)
  VAR_7->com_reg_2_state |= VAR_1;
 FUNC_2(VAR_7->com_reg_2_state, VAR_3->iobase + VAR_2);

 return VAR_5->n;
}
