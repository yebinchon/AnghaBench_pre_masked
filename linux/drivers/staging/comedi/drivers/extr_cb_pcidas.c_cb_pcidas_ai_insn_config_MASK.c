
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int class_dev; struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {unsigned int calib_src; } ;


 int VAR_0 ;

 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2,
        struct comedi_insn *VAR_3,
        unsigned int *VAR_4)
{
 struct cb_pcidas_private *VAR_5 = VAR_1->private;
 int VAR_6 = VAR_4[0];
 unsigned int VAR_7 = VAR_4[1];

 switch (VAR_6) {
 case 128:
  if (VAR_7 >= 8) {
   FUNC_0(VAR_1->class_dev,
    "invalid calibration source: %i\n",
    VAR_7);
   return -VAR_0;
  }
  VAR_5->calib_src = VAR_7;
  break;
 default:
  return -VAR_0;
 }
 return VAR_3->n;
}
