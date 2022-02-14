
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {unsigned int pwm_cmd_running; unsigned int pwm_period; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;







 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int,unsigned int,int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3,
      unsigned int *VAR_4)
{
 struct usbduxsigma_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);

 switch (VAR_4[0]) {
 case 134:




  if (VAR_4[1] != 0)
   return -VAR_0;
  return FUNC_4(VAR_1, VAR_2);
 case 133:
  return FUNC_1(VAR_1, VAR_2);
 case 132:
  VAR_4[1] = VAR_5->pwm_cmd_running;
  return 0;
 case 128:
  return FUNC_3(VAR_1, VAR_2, VAR_4[1]);
 case 130:
  VAR_4[1] = VAR_5->pwm_period;
  return 0;
 case 129:




  FUNC_2(VAR_1, VAR_2, VAR_6, VAR_4[1], (VAR_4[2] != 0));
  return 0;
 case 131:

  return -VAR_0;
 }
 return -VAR_0;
}
