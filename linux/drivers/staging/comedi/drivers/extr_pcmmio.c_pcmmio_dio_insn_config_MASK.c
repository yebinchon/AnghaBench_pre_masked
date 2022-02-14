
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int index; int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int ) ;
 int FUNC_1 (struct comedi_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3,
      unsigned int *VAR_4)
{

 int VAR_5 = VAR_2->index == 2 ? 0 : 3;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 0);
 if (VAR_6)
  return VAR_6;

 if (VAR_4[0] == VAR_0)
  FUNC_1(VAR_1, VAR_2->io_bits, 0, VAR_5);

 return VAR_3->n;
}
