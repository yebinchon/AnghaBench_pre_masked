
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {int mut; int * insn_buf; int * dux_commands; scalar_t__ ai_cmd_running; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct usbdux_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 scalar_t__ FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct comedi_device*,int ) ;
 int FUNC_9 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4,
          unsigned int *VAR_5)
{
 struct usbdux_private *VAR_6 = VAR_2->private;
 unsigned int VAR_7 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_8 = FUNC_1(VAR_4->chanspec);
 unsigned int VAR_9;
 int VAR_10 = -VAR_0;
 int VAR_11;

 FUNC_6(&VAR_6->mut);

 if (VAR_6->ai_cmd_running)
  goto ai_read_exit;


 VAR_6->dux_commands[1] = FUNC_4(VAR_7, VAR_8);


 VAR_10 = FUNC_9(VAR_2, VAR_1);
 if (VAR_10 < 0)
  goto ai_read_exit;

 for (VAR_11 = 0; VAR_11 < VAR_4->n; VAR_11++) {
  VAR_10 = FUNC_8(VAR_2, VAR_1);
  if (VAR_10 < 0)
   goto ai_read_exit;

  VAR_9 = FUNC_5(VAR_6->insn_buf[1]);


  if (FUNC_3(VAR_3, VAR_8))
   VAR_9 = FUNC_2(VAR_3, VAR_9);

  VAR_5[VAR_11] = VAR_9;
 }

ai_read_exit:
 FUNC_7(&VAR_6->mut);

 return VAR_10 ? VAR_10 : VAR_4->n;
}
