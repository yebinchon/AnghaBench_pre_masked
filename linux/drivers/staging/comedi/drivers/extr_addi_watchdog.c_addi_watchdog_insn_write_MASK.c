
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {struct addi_watchdog_private* private; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int class_dev; } ;
struct addi_watchdog_private {int wdog_ctrl; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4,
        struct comedi_insn *VAR_5,
        unsigned int *VAR_6)
{
 struct addi_watchdog_private *VAR_7 = VAR_4->private;
 int VAR_8;

 if (VAR_7->wdog_ctrl == 0) {
  FUNC_0(VAR_3->class_dev, "watchdog is disabled\n");
  return -VAR_2;
 }


 for (VAR_8 = 0; VAR_8 < VAR_5->n; VAR_8++) {
  FUNC_1(VAR_7->wdog_ctrl | VAR_1,
       VAR_7->iobase + VAR_0);
 }

 return VAR_5->n;
}
