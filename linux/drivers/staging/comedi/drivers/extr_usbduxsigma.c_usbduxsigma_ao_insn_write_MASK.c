
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {int* dux_commands; int mut; scalar_t__ ao_cmd_running; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_insn *VAR_4,
         unsigned int *VAR_5)
{
 struct usbduxsigma_private *VAR_6 = VAR_2->private;
 unsigned int VAR_7 = FUNC_0(VAR_4->chanspec);
 int VAR_8;
 int VAR_9;

 FUNC_1(&VAR_6->mut);
 if (VAR_6->ao_cmd_running) {
  FUNC_2(&VAR_6->mut);
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_4->n; VAR_9++) {
  VAR_6->dux_commands[1] = 1;
  VAR_6->dux_commands[2] = VAR_5[VAR_9];
  VAR_6->dux_commands[3] = VAR_7;
  VAR_8 = FUNC_3(VAR_2, VAR_1);
  if (VAR_8 < 0) {
   FUNC_2(&VAR_6->mut);
   return VAR_8;
  }
  VAR_3->readback[VAR_7] = VAR_5[VAR_9];
 }
 FUNC_2(&VAR_6->mut);

 return VAR_4->n;
}
