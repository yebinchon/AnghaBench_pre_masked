
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {int mut; int * insn_buf; int * dux_commands; } ;
struct comedi_subdevice {int state; int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct usbdux_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
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
 int VAR_6;

 FUNC_2(&VAR_5->mut);

 FUNC_0(VAR_2, VAR_4);


 VAR_5->dux_commands[1] = VAR_2->io_bits;
 VAR_5->dux_commands[2] = VAR_2->state;





 VAR_6 = FUNC_5(VAR_1, VAR_0);
 if (VAR_6 < 0)
  goto dio_exit;
 VAR_6 = FUNC_4(VAR_1, VAR_0);
 if (VAR_6 < 0)
  goto dio_exit;

 VAR_4[1] = FUNC_1(VAR_5->insn_buf[1]);

dio_exit:
 FUNC_3(&VAR_5->mut);

 return VAR_6 ? VAR_6 : VAR_3->n;
}
