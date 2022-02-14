
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usbduxsigma_private {int* dux_commands; scalar_t__ insn_buf; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct usbduxsigma_private* private; struct comedi_subdevice* read_subdev; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct comedi_subdevice*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1, int VAR_2)
{
 struct comedi_subdevice *VAR_3 = VAR_1->read_subdev;
 struct usbduxsigma_private *VAR_4 = VAR_1->private;
 u8 VAR_5;
 u32 VAR_6;
 int VAR_7;

 switch (VAR_2) {
 default:
 case 0:
  VAR_5 = 0;
  break;
 case 1:
  VAR_5 = 1;
  break;
 case 2:
  VAR_5 = 4;
  break;
 case 3:
  VAR_5 = 8;
  break;
 case 4:
  VAR_5 = 16;
  break;
 case 5:
  VAR_5 = 32;
  break;
 }

 VAR_4->dux_commands[1] = 0x12;
 VAR_4->dux_commands[2] = 0x80;
 VAR_4->dux_commands[3] = 0x00;
 VAR_4->dux_commands[4] = 0;
 VAR_4->dux_commands[5] = 0;
 VAR_4->dux_commands[6] = VAR_5;
 VAR_7 = FUNC_3(VAR_1, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_1, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_6 = FUNC_0(FUNC_2((__be32 *)(VAR_4->insn_buf + 1)));
 VAR_6 &= 0x00ffffff;

 return (int)FUNC_1(VAR_3, VAR_6);
}
