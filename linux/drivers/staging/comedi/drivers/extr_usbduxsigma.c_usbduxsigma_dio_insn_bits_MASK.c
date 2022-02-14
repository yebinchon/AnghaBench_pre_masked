
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxsigma_private {int* dux_commands; int* insn_buf; int mut; } ;
struct comedi_subdevice {int io_bits; int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2,
         struct comedi_insn *VAR_3,
         unsigned int *VAR_4)
{
 struct usbduxsigma_private *VAR_5 = VAR_1->private;
 int VAR_6;

 FUNC_1(&VAR_5->mut);

 FUNC_0(VAR_2, VAR_4);


 VAR_5->dux_commands[1] = VAR_2->io_bits & 0xff;
 VAR_5->dux_commands[4] = VAR_2->state & 0xff;
 VAR_5->dux_commands[2] = (VAR_2->io_bits >> 8) & 0xff;
 VAR_5->dux_commands[5] = (VAR_2->state >> 8) & 0xff;
 VAR_5->dux_commands[3] = (VAR_2->io_bits >> 16) & 0xff;
 VAR_5->dux_commands[6] = (VAR_2->state >> 16) & 0xff;

 VAR_6 = FUNC_3(VAR_1, VAR_0);
 if (VAR_6 < 0)
  goto done;
 VAR_6 = FUNC_4(VAR_1, VAR_0);
 if (VAR_6 < 0)
  goto done;

 VAR_2->state = VAR_5->insn_buf[1] |
     (VAR_5->insn_buf[2] << 8) |
     (VAR_5->insn_buf[3] << 16);

 VAR_4[1] = VAR_2->state;
 VAR_6 = VAR_3->n;

done:
 FUNC_2(&VAR_5->mut);

 return VAR_6;
}
