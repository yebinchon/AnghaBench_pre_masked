
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {unsigned int* ai_offset; scalar_t__ is_m_series; scalar_t__ is_6143; scalar_t__ is_611x; } ;
struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int class_dev; struct ni_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,int,int *) ;
 int FUNC_3 (struct comedi_device*,int ) ;
 int FUNC_4 (struct comedi_device*,int ) ;
 unsigned int FUNC_5 (struct comedi_device*,int ) ;
 int FUNC_6 (struct comedi_device*,int ) ;
 int FUNC_7 (struct comedi_device*,int ,int ) ;
 int FUNC_8 (struct comedi_device*,int,int ) ;
 int VAR_13 ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_14,
      struct comedi_subdevice *VAR_15,
      struct comedi_insn *VAR_16,
      unsigned int *VAR_17)
{
 struct ni_private *VAR_18 = VAR_14->private;
 unsigned int VAR_19 = VAR_15->maxdata;
 int VAR_20, VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;

 FUNC_2(VAR_14, VAR_15, 1, &VAR_16->chanspec);

 FUNC_1(VAR_14);

 VAR_22 = VAR_18->ai_offset[0];
 if (VAR_18->is_611x) {
  for (VAR_21 = 0; VAR_21 < VAR_13; VAR_21++) {
   FUNC_7(VAR_14, VAR_5,
          VAR_6);
   FUNC_9(1);
  }
  for (VAR_21 = 0; VAR_21 < VAR_16->n; VAR_21++) {
   FUNC_7(VAR_14, VAR_5,
          VAR_6);

   VAR_23 = 0;
   for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
    if (FUNC_3(VAR_14, VAR_10) & 0x80) {
     VAR_23 = FUNC_4(VAR_14,
           VAR_1);
     VAR_23 >>= 16;
     VAR_23 &= 0xffff;
     break;
    }
    if (!(FUNC_6(VAR_14, VAR_8) &
          VAR_7)) {
     VAR_23 = FUNC_4(VAR_14,
           VAR_1);
     VAR_23 &= 0xffff;
     break;
    }
   }
   if (VAR_20 == VAR_12) {
    FUNC_0(VAR_14->class_dev, "timeout\n");
    return -VAR_0;
   }
   VAR_23 += VAR_22;
   VAR_17[VAR_21] = VAR_23 & 0xffff;
  }
 } else if (VAR_18->is_6143) {
  for (VAR_21 = 0; VAR_21 < VAR_16->n; VAR_21++) {
   FUNC_7(VAR_14, VAR_5,
          VAR_6);






   VAR_23 = 0;
   for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
    if (FUNC_4(VAR_14, VAR_4) &
        0x01) {

     FUNC_8(VAR_14, 0x01,
        VAR_2);
     VAR_23 = FUNC_4(VAR_14,
           VAR_3);
     break;
    }
   }
   if (VAR_20 == VAR_12) {
    FUNC_0(VAR_14->class_dev, "timeout\n");
    return -VAR_0;
   }
   VAR_17[VAR_21] = (((VAR_23 >> 16) & 0xFFFF) + VAR_22) & 0xFFFF;
  }
 } else {
  for (VAR_21 = 0; VAR_21 < VAR_16->n; VAR_21++) {
   FUNC_7(VAR_14, VAR_5,
          VAR_6);
   for (VAR_20 = 0; VAR_20 < VAR_12; VAR_20++) {
    if (!(FUNC_6(VAR_14, VAR_8) &
          VAR_7))
     break;
   }
   if (VAR_20 == VAR_12) {
    FUNC_0(VAR_14->class_dev, "timeout\n");
    return -VAR_0;
   }
   if (VAR_18->is_m_series) {
    VAR_23 = FUNC_4(VAR_14, VAR_11);
    VAR_23 &= VAR_19;
    VAR_17[VAR_21] = VAR_23;
   } else {
    VAR_23 = FUNC_5(VAR_14, VAR_9);
    VAR_23 += VAR_22;
    VAR_17[VAR_21] = VAR_23 & 0xffff;
   }
  }
 }
 return VAR_16->n;
}
