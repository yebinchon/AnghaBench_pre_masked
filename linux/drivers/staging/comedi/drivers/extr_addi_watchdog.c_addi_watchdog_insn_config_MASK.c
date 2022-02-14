
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int maxdata; struct addi_watchdog_private* private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int class_dev; } ;
struct addi_watchdog_private {unsigned int wdog_ctrl; scalar_t__ iobase; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6,
         unsigned int *VAR_7)
{
 struct addi_watchdog_private *VAR_8 = VAR_5->private;
 unsigned int VAR_9;

 switch (VAR_7[0]) {
 case 129:
  VAR_8->wdog_ctrl = VAR_0;
  VAR_9 = VAR_7[1] & VAR_5->maxdata;
  FUNC_1(VAR_9, VAR_8->iobase + VAR_2);


  FUNC_0(VAR_4->class_dev, "watchdog enabled, timeout:%dms\n",
    20 * VAR_9 + 20);
  break;
 case 128:
  VAR_8->wdog_ctrl = 0;
  break;
 default:
  return -VAR_3;
 }

 FUNC_1(VAR_8->wdog_ctrl, VAR_8->iobase + VAR_1);

 return VAR_6->n;
}
