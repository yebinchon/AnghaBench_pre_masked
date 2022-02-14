
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {unsigned int* usb_rx_buf; int limit_sem; int * usb_tx_buf; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
    struct comedi_subdevice *VAR_3,
    struct comedi_insn *VAR_4,
    unsigned int *VAR_5)
{
 struct vmk80xx_private *VAR_6 = VAR_2->private;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_1(&VAR_6->limit_sem);
 VAR_7 = FUNC_0(VAR_4->chanspec);

 VAR_8 = VAR_0 - 1;

 VAR_6->usb_tx_buf[0] = VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_4->n; VAR_9++) {
  if (FUNC_3(VAR_2))
   break;

  VAR_5[VAR_9] = VAR_6->usb_rx_buf[VAR_8 + VAR_7];
 }

 FUNC_2(&VAR_6->limit_sem);

 return VAR_9;
}
