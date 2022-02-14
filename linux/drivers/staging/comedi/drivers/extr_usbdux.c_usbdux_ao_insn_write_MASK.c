
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {int* dux_commands; int mut; scalar_t__ ao_cmd_running; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct usbdux_private* private; } ;
typedef int __le16 ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2,
    struct comedi_subdevice *VAR_3,
    struct comedi_insn *VAR_4,
    unsigned int *VAR_5)
{
 struct usbdux_private *VAR_6 = VAR_2->private;
 unsigned int VAR_7 = FUNC_0(VAR_4->chanspec);
 __le16 *VAR_8 = (__le16 *)&VAR_6->dux_commands[2];
 int VAR_9 = -VAR_0;
 int VAR_10;

 FUNC_2(&VAR_6->mut);

 if (VAR_6->ao_cmd_running)
  goto ao_write_exit;


 VAR_6->dux_commands[1] = 1;

 VAR_6->dux_commands[4] = VAR_7 << 6;

 for (VAR_10 = 0; VAR_10 < VAR_4->n; VAR_10++) {
  unsigned int VAR_11 = VAR_5[VAR_10];


  *VAR_8 = FUNC_1(VAR_11);

  VAR_9 = FUNC_4(VAR_2, VAR_1);
  if (VAR_9 < 0)
   goto ao_write_exit;

  VAR_3->readback[VAR_7] = VAR_11;
 }

ao_write_exit:
 FUNC_3(&VAR_6->mut);

 return VAR_9 ? VAR_9 : VAR_4->n;
}
