
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
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 size_t FUNC_2 (unsigned int) ;
 size_t FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (struct ni_gpct*) ;
 int FUNC_5 (struct ni_gpct*,int ,int ,int ,int ) ;
 int FUNC_6 (struct ni_gpct*,unsigned int,size_t) ;

int FUNC_7(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_insn *VAR_4,
        unsigned int *VAR_5)
{
 struct ni_gpct *VAR_6 = VAR_3->private;
 struct ni_gpct_device *VAR_7 = VAR_6->counter_dev;
 unsigned int VAR_8 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_9 = VAR_6->counter_index;
 unsigned int VAR_10 = VAR_6->chip_index;
 unsigned int VAR_11;
 unsigned int VAR_12;

 if (VAR_4->n < 1)
  return 0;
 VAR_12 = VAR_5[VAR_4->n - 1];
 switch (VAR_8) {
 case 0:
  VAR_11 = FUNC_4(VAR_6);
  FUNC_6(VAR_6, VAR_12, VAR_11);
  FUNC_5(VAR_6, FUNC_1(VAR_9),
       0, 0, VAR_1);

  FUNC_6(VAR_6, VAR_7->regs[VAR_10][VAR_11],
        VAR_11);
  break;
 case 1:
  VAR_7->regs[VAR_10][FUNC_2(VAR_9)] = VAR_12;
  FUNC_6(VAR_6, VAR_12, FUNC_2(VAR_9));
  break;
 case 2:
  VAR_7->regs[VAR_10][FUNC_3(VAR_9)] = VAR_12;
  FUNC_6(VAR_6, VAR_12, FUNC_3(VAR_9));
  break;
 default:
  return -VAR_0;
 }
 return VAR_4->n;
}
