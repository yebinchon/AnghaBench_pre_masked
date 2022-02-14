
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int io_bits; scalar_t__ private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int ) ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
    struct comedi_subdevice *VAR_1,
    struct comedi_insn *VAR_2,
    unsigned int *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1->private;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, 0);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_0, FUNC_0(VAR_4), VAR_1->io_bits);

 return VAR_2->n;
}
