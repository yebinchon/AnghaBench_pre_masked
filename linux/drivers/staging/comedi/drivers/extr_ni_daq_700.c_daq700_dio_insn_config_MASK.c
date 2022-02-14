
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1,
      struct comedi_insn *VAR_2,
      unsigned int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0);
 if (VAR_4)
  return VAR_4;


 VAR_1->io_bits = 0x00ff;

 return VAR_2->n;
}
