
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {unsigned char* usb_rx_buf; unsigned char* usb_tx_buf; scalar_t__ model; int limit_sem; } ;
struct comedi_subdevice {unsigned char state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7,
    struct comedi_insn *VAR_8,
    unsigned int *VAR_9)
{
 struct vmk80xx_private *VAR_10 = VAR_6->private;
 unsigned char *VAR_11 = VAR_10->usb_rx_buf;
 unsigned char *VAR_12 = VAR_10->usb_tx_buf;
 int VAR_13, VAR_14;
 int VAR_15 = 0;

 if (VAR_10->model == VAR_5) {
  VAR_13 = VAR_4;
  VAR_14 = VAR_2;
 } else {
  VAR_13 = VAR_1;
  VAR_14 = VAR_0;
 }

 FUNC_1(&VAR_10->limit_sem);

 if (FUNC_0(VAR_7, VAR_9)) {
  VAR_12[VAR_13] = VAR_7->state;
  VAR_15 = FUNC_4(VAR_6, VAR_14);
  if (VAR_15)
   goto out;
 }

 if (VAR_10->model == VAR_5) {
  VAR_12[0] = VAR_3;
  VAR_15 = FUNC_3(VAR_6);
  if (VAR_15)
   goto out;
  VAR_9[1] = VAR_11[VAR_13];
 } else {
  VAR_9[1] = VAR_7->state;
 }

out:
 FUNC_2(&VAR_10->limit_sem);

 return VAR_15 ? VAR_15 : VAR_8->n;
}
