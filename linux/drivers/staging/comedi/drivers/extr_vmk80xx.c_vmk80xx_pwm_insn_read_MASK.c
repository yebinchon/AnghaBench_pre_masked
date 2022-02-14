
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {unsigned char* usb_tx_buf; unsigned char* usb_rx_buf; int limit_sem; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
     struct comedi_subdevice *VAR_4,
     struct comedi_insn *VAR_5,
     unsigned int *VAR_6)
{
 struct vmk80xx_private *VAR_7 = VAR_3->private;
 unsigned char *VAR_8;
 unsigned char *VAR_9;
 int VAR_10[2];
 int VAR_11;

 FUNC_0(&VAR_7->limit_sem);

 VAR_8 = VAR_7->usb_tx_buf;
 VAR_9 = VAR_7->usb_rx_buf;

 VAR_10[0] = VAR_1;
 VAR_10[1] = VAR_2;

 VAR_8[0] = VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_5->n; VAR_11++) {
  if (FUNC_2(VAR_3))
   break;

  VAR_6[VAR_11] = VAR_9[VAR_10[0]] + 4 * VAR_9[VAR_10[1]];
 }

 FUNC_1(&VAR_7->limit_sem);

 return VAR_11;
}
