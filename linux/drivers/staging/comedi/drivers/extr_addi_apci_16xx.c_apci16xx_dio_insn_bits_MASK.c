
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int index; int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct comedi_subdevice*,unsigned int*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1,
      struct comedi_insn *VAR_2,
      unsigned int *VAR_3)
{
 if (FUNC_2(VAR_1, VAR_3))
  FUNC_4(VAR_1->state, VAR_0->iobase + FUNC_1(VAR_1->index));

 VAR_3[1] = FUNC_3(VAR_0->iobase + FUNC_0(VAR_1->index));

 return VAR_2->n;
}
