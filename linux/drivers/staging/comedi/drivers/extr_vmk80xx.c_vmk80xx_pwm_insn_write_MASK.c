
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmk80xx_private {unsigned char* usb_tx_buf; int limit_sem; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct vmk80xx_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct comedi_device*,int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4,
      struct comedi_insn *VAR_5,
      unsigned int *VAR_6)
{
 struct vmk80xx_private *VAR_7 = VAR_3->private;
 unsigned char *VAR_8;
 int VAR_9[2];
 int VAR_10;
 int VAR_11;

 FUNC_0(&VAR_7->limit_sem);

 VAR_8 = VAR_7->usb_tx_buf;

 VAR_9[0] = VAR_1;
 VAR_9[1] = VAR_2;

 VAR_10 = VAR_0;
 for (VAR_11 = 0; VAR_11 < VAR_5->n; VAR_11++) {
  VAR_8[VAR_9[0]] = (unsigned char)(VAR_6[VAR_11] & 0x03);
  VAR_8[VAR_9[1]] = (unsigned char)(VAR_6[VAR_11] >> 2) & 0xff;

  if (FUNC_2(VAR_3, VAR_10))
   break;
 }

 FUNC_1(&VAR_7->limit_sem);

 return VAR_11;
}
