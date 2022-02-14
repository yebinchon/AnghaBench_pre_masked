
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {unsigned long* usb_tx_buf; int limit_sem; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3,
      struct comedi_insn *VAR_4,
      unsigned int *VAR_5)
{
 struct vmk80xx_private *VAR_6 = VAR_2->private;
 unsigned long VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_1(&VAR_6->limit_sem);
 VAR_9 = FUNC_0(VAR_4->chanspec);

 if (!VAR_9)
  VAR_10 = VAR_0;
 else
  VAR_10 = VAR_1;

 for (VAR_11 = 0; VAR_11 < VAR_4->n; VAR_11++) {
  VAR_7 = VAR_5[VAR_11];
  if (VAR_7 == 0)
   VAR_7 = 1;


  if (VAR_7 > 7450)
   VAR_7 = 7450;

  VAR_8 = FUNC_2(VAR_7 * 1000 / 115);
  if (((VAR_8 + 1) * VAR_8) < VAR_7 * 1000 / 115)
   VAR_8 += 1;

  VAR_6->usb_tx_buf[6 + VAR_9] = VAR_8;

  if (FUNC_4(VAR_2, VAR_10))
   break;
 }

 FUNC_3(&VAR_6->limit_sem);

 return VAR_11;
}
