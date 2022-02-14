
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2,
          unsigned int *VAR_3)
{
 if (FUNC_0(VAR_1, VAR_3))
  FUNC_1(VAR_0, VAR_1->state);

 VAR_3[1] = VAR_1->state;

 return VAR_2->n;
}
