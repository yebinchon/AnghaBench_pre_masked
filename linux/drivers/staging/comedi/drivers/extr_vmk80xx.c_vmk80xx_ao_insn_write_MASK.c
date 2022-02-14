
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {int model; int* usb_tx_buf; int limit_sem; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6,
     struct comedi_subdevice *VAR_7,
     struct comedi_insn *VAR_8,
     unsigned int *VAR_9)
{
 struct vmk80xx_private *VAR_10 = VAR_6->private;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_1(&VAR_10->limit_sem);
 VAR_11 = FUNC_0(VAR_8->chanspec);

 switch (VAR_10->model) {
 case 128:
  VAR_12 = VAR_2;
  if (!VAR_11)
   VAR_13 = VAR_0;
  else
   VAR_13 = VAR_1;
  break;
 default:
  VAR_12 = VAR_5;
  VAR_13 = VAR_3;
  VAR_10->usb_tx_buf[VAR_4] = VAR_11;
  break;
 }

 for (VAR_14 = 0; VAR_14 < VAR_8->n; VAR_14++) {
  VAR_10->usb_tx_buf[VAR_13] = VAR_9[VAR_14];

  if (FUNC_3(VAR_6, VAR_12))
   break;
 }

 FUNC_2(&VAR_10->limit_sem);

 return VAR_14;
}
