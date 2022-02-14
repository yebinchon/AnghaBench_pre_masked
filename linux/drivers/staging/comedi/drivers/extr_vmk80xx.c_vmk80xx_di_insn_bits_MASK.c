
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {unsigned char* usb_rx_buf; scalar_t__ model; int limit_sem; int * usb_tx_buf; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_5,
    struct comedi_subdevice *VAR_6,
    struct comedi_insn *VAR_7,
    unsigned int *VAR_8)
{
 struct vmk80xx_private *VAR_9 = VAR_5->private;
 unsigned char *VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_0(&VAR_9->limit_sem);

 VAR_10 = VAR_9->usb_rx_buf;

 if (VAR_9->model == VAR_4) {
  VAR_11 = VAR_3;
  VAR_9->usb_tx_buf[0] = VAR_2;
 } else {
  VAR_11 = VAR_0;
 }

 VAR_12 = FUNC_2(VAR_5);

 if (!VAR_12) {
  if (VAR_9->model == VAR_1)
   VAR_8[1] = (((VAR_10[VAR_11] >> 4) & 0x03) |
      ((VAR_10[VAR_11] << 2) & 0x04) |
      ((VAR_10[VAR_11] >> 3) & 0x18));
  else
   VAR_8[1] = VAR_10[VAR_11];

  VAR_12 = 2;
 }

 FUNC_1(&VAR_9->limit_sem);

 return VAR_12;
}
