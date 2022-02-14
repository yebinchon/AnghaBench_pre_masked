
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt2815_private {unsigned int* ao_readback; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct dt2815_private* private; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2, unsigned int *VAR_3)
{
 struct dt2815_private *VAR_4 = VAR_0->private;
 int VAR_5;
 int VAR_6 = FUNC_0(VAR_2->chanspec);

 for (VAR_5 = 0; VAR_5 < VAR_2->n; VAR_5++)
  VAR_3[VAR_5] = VAR_4->ao_readback[VAR_6];

 return VAR_5;
}
