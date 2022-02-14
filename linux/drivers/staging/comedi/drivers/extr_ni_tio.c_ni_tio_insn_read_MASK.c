
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct_device {unsigned int** regs; } ;
struct ni_gpct {unsigned int counter_index; unsigned int chip_index; struct ni_gpct_device* counter_dev; } ;
struct comedi_subdevice {struct ni_gpct* private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 size_t FUNC_1 (unsigned int) ;
 size_t FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;

int FUNC_4(struct comedi_device *VAR_0,
       struct comedi_subdevice *VAR_1,
       struct comedi_insn *VAR_2,
       unsigned int *VAR_3)
{
 struct ni_gpct *VAR_4 = VAR_1->private;
 struct ni_gpct_device *VAR_5 = VAR_4->counter_dev;
 unsigned int VAR_6 = FUNC_0(VAR_2->chanspec);
 unsigned int VAR_7 = VAR_4->counter_index;
 unsigned int VAR_8 = VAR_4->chip_index;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_2->n; VAR_9++) {
  switch (VAR_6) {
  case 0:
   VAR_3[VAR_9] = FUNC_3(VAR_0, VAR_1);
   break;
  case 1:
   VAR_3[VAR_9] =
       VAR_5->regs[VAR_8][FUNC_1(VAR_7)];
   break;
  case 2:
   VAR_3[VAR_9] =
       VAR_5->regs[VAR_8][FUNC_2(VAR_7)];
   break;
  }
 }
 return VAR_2->n;
}
