
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct comedi_subdevice*,unsigned int*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2,
          unsigned int *VAR_3)
{
 if (FUNC_1(VAR_1, VAR_3))
  FUNC_3(VAR_1->state, VAR_0->mmio + FUNC_0(0));

 VAR_3[1] = FUNC_2(VAR_0->mmio + FUNC_0(0));

 return VAR_2->n;
}
