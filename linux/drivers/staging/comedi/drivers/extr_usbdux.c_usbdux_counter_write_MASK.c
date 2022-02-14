
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {unsigned int* dux_commands; int mut; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct usbdux_private* private; } ;
typedef int __le16 ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1,
    struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3,
    unsigned int *VAR_4)
{
 struct usbdux_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);
 __le16 *VAR_7 = (__le16 *)&VAR_5->dux_commands[2];
 int VAR_8 = 0;
 int VAR_9;

 FUNC_2(&VAR_5->mut);

 VAR_5->dux_commands[1] = VAR_6;

 for (VAR_9 = 0; VAR_9 < VAR_3->n; VAR_9++) {
  *VAR_7 = FUNC_1(VAR_4[VAR_9]);

  VAR_8 = FUNC_4(VAR_1, VAR_0);
  if (VAR_8 < 0)
   break;
 }

 FUNC_3(&VAR_5->mut);

 return VAR_8 ? VAR_8 : VAR_3->n;
}
