
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int class_dev; struct apci1500_private* private; } ;
struct apci1500_private {unsigned int* pm; unsigned int* pt; unsigned int* pp; } ;





 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
    struct comedi_subdevice *VAR_2,
    struct comedi_insn *VAR_3,
    unsigned int *VAR_4)
{
 struct apci1500_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = VAR_4[1];
 unsigned int VAR_7 = VAR_4[3];
 unsigned int VAR_8 = VAR_4[4] << VAR_7;
 unsigned int VAR_9 = VAR_4[5] << VAR_7;
 unsigned int VAR_10 = VAR_8 | VAR_9;
 unsigned int VAR_11 = (1 << VAR_7) - 1;
 unsigned int VAR_12 = VAR_5->pm[VAR_6] & VAR_11;
 unsigned int VAR_13 = VAR_5->pt[VAR_6] & VAR_11;
 unsigned int VAR_14 = VAR_5->pp[VAR_6] & VAR_11;

 if (VAR_6 > 1) {
  FUNC_1(VAR_1->class_dev,
   "invalid digital trigger number (0=AND, 1=OR)\n");
  return -VAR_0;
 }

 if (VAR_10 > 0xffff) {
  FUNC_1(VAR_1->class_dev, "invalid digital trigger channel\n");
  return -VAR_0;
 }

 switch (VAR_4[2]) {
 case 130:

  VAR_12 = 0;
  VAR_13 = 0;
  VAR_14 = 0;
  break;
 case 129:
  VAR_12 |= VAR_10;
  VAR_13 |= VAR_10;
  VAR_14 |= VAR_8;
  VAR_14 &= ~VAR_9;
  break;
 case 128:
  VAR_12 |= VAR_10;
  VAR_13 &= ~VAR_10;
  VAR_14 |= VAR_8;
  VAR_14 &= ~VAR_9;
  break;
 default:
  return -VAR_0;
 }





 if (VAR_6 == 0) {
  int VAR_15 = 0;
  unsigned int VAR_16;

  VAR_16 = VAR_13 & 0xff;
  if (VAR_16)
   VAR_15 |= FUNC_0(VAR_16);

  VAR_16 = (VAR_13 >> 8) & 0xff;
  if (VAR_16)
   VAR_15 |= FUNC_0(VAR_16);

  if (VAR_15) {
   FUNC_1(VAR_1->class_dev,
    "invalid AND trigger configuration\n");
   return VAR_15;
  }
 }


 VAR_5->pm[VAR_6] = VAR_12;
 VAR_5->pt[VAR_6] = VAR_13;
 VAR_5->pp[VAR_6] = VAR_14;

 return VAR_3->n;
}
