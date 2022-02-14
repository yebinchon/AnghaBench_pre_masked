
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; struct apci3120_private* private; } ;
struct apci3120_private {int ctrl; unsigned int mode; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct comedi_device*) ;
 unsigned int FUNC_2 (struct comedi_device*,int,unsigned int,int ) ;
 int FUNC_3 (struct comedi_device*,int,int) ;
 int FUNC_4 (struct comedi_device*,int,unsigned int) ;
 int FUNC_5 (struct comedi_device*,int,unsigned int) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_16,
          struct comedi_subdevice *VAR_17,
          struct comedi_insn *VAR_18,
          unsigned int *VAR_19)
{
 struct apci3120_private *VAR_20 = VAR_16->private;
 unsigned int VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;

 switch (VAR_19[0]) {
 case 131:
  FUNC_1(VAR_16);
  VAR_21 = FUNC_2(VAR_16, 2, VAR_19[1],
            VAR_11);
  FUNC_5(VAR_16, 2, VAR_21);
  FUNC_3(VAR_16, 2, 1);
  break;

 case 130:
  FUNC_3(VAR_16, 2, 0);
  FUNC_1(VAR_16);
  break;

 case 129:
  VAR_19[1] = 0;
  VAR_19[2] = VAR_12 | VAR_13 |
     VAR_14;

  if (VAR_20->ctrl & FUNC_0(2)) {
   VAR_19[1] |= VAR_12;
   VAR_19[1] |= VAR_13;
  }
  VAR_22 = FUNC_6(VAR_16->iobase + VAR_5);
  if (VAR_22 & VAR_6) {
   VAR_19[1] &= ~VAR_13;
   VAR_19[1] |= VAR_14;
  }
  break;

 case 128:
  switch (VAR_19[1]) {
  case 135:
   VAR_23 = VAR_1;
   VAR_24 = VAR_7;
   break;
  case 134:
   VAR_23 = VAR_3;
   VAR_24 = VAR_8;
   break;
  case 133:
   VAR_23 = VAR_3;
   VAR_24 = VAR_9;
   break;
  case 132:
   VAR_23 = VAR_4;
   VAR_24 = VAR_10;
   break;
  default:
   return -VAR_15;
  }
  FUNC_3(VAR_16, 2, 0);
  FUNC_1(VAR_16);
  FUNC_4(VAR_16, 2, VAR_24);
  VAR_20->mode &= ~VAR_2;
  VAR_20->mode |= VAR_23;
  FUNC_7(VAR_20->mode, VAR_16->iobase + VAR_0);
  break;

 default:
  return -VAR_15;
 }

 return VAR_18->n;
}
