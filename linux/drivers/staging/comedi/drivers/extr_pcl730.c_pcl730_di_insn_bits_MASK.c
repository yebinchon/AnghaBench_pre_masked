
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2,
          unsigned int *VAR_3)
{
 VAR_3[1] = FUNC_0(VAR_0, VAR_1);

 return VAR_2->n;
}
