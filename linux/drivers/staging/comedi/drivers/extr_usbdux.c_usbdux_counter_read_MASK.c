
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {int mut; int * insn_buf; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct usbdux_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct comedi_device*,int ) ;
 int FUNC_5 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_1,
          struct comedi_subdevice *VAR_2,
          struct comedi_insn *VAR_3,
          unsigned int *VAR_4)
{
 struct usbdux_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);
 int VAR_7 = 0;
 int VAR_8;

 FUNC_2(&VAR_5->mut);

 for (VAR_8 = 0; VAR_8 < VAR_3->n; VAR_8++) {
  VAR_7 = FUNC_5(VAR_1, VAR_0);
  if (VAR_7 < 0)
   goto counter_read_exit;
  VAR_7 = FUNC_4(VAR_1, VAR_0);
  if (VAR_7 < 0)
   goto counter_read_exit;

  VAR_4[VAR_8] = FUNC_1(VAR_5->insn_buf[VAR_6 + 1]);
 }

counter_read_exit:
 FUNC_3(&VAR_5->mut);

 return VAR_7 ? VAR_7 : VAR_3->n;
}
