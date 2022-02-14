
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {int model; unsigned int* usb_rx_buf; int limit_sem; int * usb_tx_buf; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
     struct comedi_subdevice *VAR_5,
     struct comedi_insn *VAR_6,
     unsigned int *VAR_7)
{
 struct vmk80xx_private *VAR_8 = VAR_4->private;
 int VAR_9;
 int VAR_10[2];
 int VAR_11;

 FUNC_1(&VAR_8->limit_sem);
 VAR_9 = FUNC_0(VAR_6->chanspec);

 switch (VAR_8->model) {
 case 129:
  if (!VAR_9)
   VAR_10[0] = VAR_0;
  else
   VAR_10[0] = VAR_1;
  break;
 case 128:
 default:
  VAR_10[0] = VAR_3;
  VAR_10[1] = VAR_3;
  VAR_8->usb_tx_buf[0] = VAR_2;
  break;
 }

 for (VAR_11 = 0; VAR_11 < VAR_6->n; VAR_11++) {
  if (FUNC_3(VAR_4))
   break;

  if (VAR_8->model == 129)
   VAR_7[VAR_11] = VAR_8->usb_rx_buf[VAR_10[0]];
  else
   VAR_7[VAR_11] = VAR_8->usb_rx_buf[VAR_10[0] * (VAR_9 + 1) + 1]
       + 256 * VAR_8->usb_rx_buf[VAR_10[1] * 2 + 2];
 }

 FUNC_2(&VAR_8->limit_sem);

 return VAR_11;
}
