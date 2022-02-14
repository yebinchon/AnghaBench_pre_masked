
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int clock_and_fout; int serial_hw_mode; int dio_control; unsigned int serial_interval_ns; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,unsigned char,unsigned char*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned char,unsigned char*) ;
 int FUNC_3 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_12,
     struct comedi_subdevice *VAR_13,
     struct comedi_insn *VAR_14,
     unsigned int *VAR_15)
{
 struct ni_private *VAR_16 = VAR_12->private;
 unsigned int VAR_17 = VAR_16->clock_and_fout;
 int VAR_18 = VAR_14->n;
 unsigned char VAR_19, VAR_20 = 0;

 if (VAR_14->n != 2)
  return -VAR_0;

 switch (VAR_15[0]) {
 case 128:
  VAR_16->serial_hw_mode = 1;
  VAR_16->dio_control |= VAR_4;

  if (VAR_15[1] == VAR_11) {
   VAR_16->serial_hw_mode = 0;
   VAR_16->dio_control &= ~(VAR_4 |
        VAR_7);
   VAR_15[1] = VAR_11;
   VAR_16->serial_interval_ns = VAR_15[1];
  } else if (VAR_15[1] <= VAR_10) {




   VAR_16->dio_control &= ~VAR_5;
   VAR_17 |= VAR_3;
   VAR_17 &= ~VAR_1;
   VAR_15[1] = VAR_10;
   VAR_16->serial_interval_ns = VAR_15[1];
  } else if (VAR_15[1] <= VAR_9) {
   VAR_16->dio_control &= ~VAR_5;
   VAR_17 |= VAR_3 |
        VAR_1;
   VAR_15[1] = VAR_9;
   VAR_16->serial_interval_ns = VAR_15[1];
  } else if (VAR_15[1] <= VAR_8) {
   VAR_16->dio_control |= VAR_5;
   VAR_17 |= VAR_3 |
        VAR_1;






   VAR_15[1] = VAR_8;
   VAR_16->serial_interval_ns = VAR_15[1];
  } else {
   VAR_16->dio_control &= ~(VAR_4 |
        VAR_7);
   VAR_16->serial_hw_mode = 0;
   VAR_15[1] = (VAR_15[1] / 1000) * 1000;
   VAR_16->serial_interval_ns = VAR_15[1];
  }
  VAR_16->clock_and_fout = VAR_17;

  FUNC_3(VAR_12, VAR_16->dio_control, VAR_6);
  FUNC_3(VAR_12, VAR_16->clock_and_fout, VAR_2);
  return 1;

 case 129:

  if (VAR_16->serial_interval_ns == 0)
   return -VAR_0;

  VAR_19 = VAR_15[1] & 0xFF;

  if (VAR_16->serial_hw_mode) {
   VAR_18 = FUNC_1(VAR_12, VAR_13, VAR_19,
            &VAR_20);
  } else if (VAR_16->serial_interval_ns > 0) {
   VAR_18 = FUNC_2(VAR_12, VAR_13, VAR_19,
            &VAR_20);
  } else {
   FUNC_0(VAR_12->class_dev, "serial disabled!\n");
   return -VAR_0;
  }
  if (VAR_18 < 0)
   return VAR_18;
  VAR_15[1] = VAR_20 & 0xFF;
  return VAR_14->n;

  break;
 default:
  return -VAR_0;
 }
}
