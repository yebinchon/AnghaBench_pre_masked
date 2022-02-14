
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct usbduxsigma_private {int* dux_commands; int mut; scalar_t__ insn_buf; scalar_t__ ai_cmd_running; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct usbduxsigma_private* private; } ;
typedef int __be32 ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct comedi_subdevice*,int) ;
 int FUNC_3 (unsigned int,void**,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct comedi_device*,int ) ;
 int FUNC_8 (struct comedi_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_insn *VAR_4,
        unsigned int *VAR_5)
{
 struct usbduxsigma_private *VAR_6 = VAR_2->private;
 unsigned int VAR_7 = FUNC_0(VAR_4->chanspec);
 u8 VAR_8 = 0;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;
 int VAR_11;
 int VAR_12;

 FUNC_5(&VAR_6->mut);
 if (VAR_6->ai_cmd_running) {
  FUNC_6(&VAR_6->mut);
  return -VAR_0;
 }

 FUNC_3(VAR_7, &VAR_8, &VAR_9);


 VAR_6->dux_commands[1] = 0x16;
 VAR_6->dux_commands[2] = 0x80;
 VAR_6->dux_commands[3] = 0x00;
 VAR_6->dux_commands[4] = VAR_8;
 VAR_6->dux_commands[5] = VAR_9;
 VAR_6->dux_commands[6] = VAR_10;


 VAR_11 = FUNC_7(VAR_2, VAR_1);
 if (VAR_11 < 0) {
  FUNC_6(&VAR_6->mut);
  return VAR_11;
 }

 for (VAR_12 = 0; VAR_12 < VAR_4->n; VAR_12++) {
  u32 VAR_13;

  VAR_11 = FUNC_8(VAR_2, VAR_1);
  if (VAR_11 < 0) {
   FUNC_6(&VAR_6->mut);
   return VAR_11;
  }


  VAR_13 = FUNC_1(FUNC_4((__be32
       *)(VAR_6->insn_buf + 1)));
  VAR_13 &= 0x00ffffff;
  VAR_5[VAR_12] = FUNC_2(VAR_3, VAR_13);
 }
 FUNC_6(&VAR_6->mut);

 return VAR_4->n;
}
