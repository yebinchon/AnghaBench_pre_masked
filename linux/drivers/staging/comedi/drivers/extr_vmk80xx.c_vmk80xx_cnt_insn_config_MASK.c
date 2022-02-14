
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {int* usb_tx_buf; int limit_sem; int model; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_7,
       struct comedi_subdevice *VAR_8,
       struct comedi_insn *VAR_9,
       unsigned int *VAR_10)
{
 struct vmk80xx_private *VAR_11 = VAR_7->private;
 unsigned int VAR_12 = FUNC_0(VAR_9->chanspec);
 int VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_1(&VAR_11->limit_sem);
 switch (VAR_10[0]) {
 case 128:
  if (VAR_11->model == VAR_5) {
   if (!VAR_12) {
    VAR_13 = VAR_1;
    VAR_14 = VAR_3;
   } else {
    VAR_13 = VAR_2;
    VAR_14 = VAR_4;
   }
   VAR_11->usb_tx_buf[VAR_14] = 0x00;
  } else {
   VAR_13 = VAR_6;
  }
  VAR_15 = FUNC_3(VAR_7, VAR_13);
  break;
 default:
  VAR_15 = -VAR_0;
  break;
 }
 FUNC_2(&VAR_11->limit_sem);

 return VAR_15 ? VAR_15 : VAR_9->n;
}
