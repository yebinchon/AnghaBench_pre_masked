
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct apci1500_private* private; } ;
struct apci1500_private {unsigned int clk_src; scalar_t__ addon; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_5 (struct comedi_device*,int ) ;
 int FUNC_6 (struct comedi_device*,unsigned int,int) ;
 int FUNC_7 (int,scalar_t__) ;
 unsigned int FUNC_8 (struct comedi_device*,int ) ;
 int FUNC_9 (struct comedi_device*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_10(struct comedi_device *VAR_17,
          struct comedi_subdevice *VAR_18,
          struct comedi_insn *VAR_19,
          unsigned int *VAR_20)
{
 struct apci1500_private *VAR_21 = VAR_17->private;
 unsigned int VAR_22 = FUNC_0(VAR_19->chanspec);
 unsigned int VAR_23;

 switch (VAR_20[0]) {
 case 135:
  VAR_23 = VAR_20[1] & VAR_18->maxdata;
  FUNC_9(VAR_17, VAR_23 & 0xff, FUNC_3(VAR_22));
  FUNC_9(VAR_17, (VAR_23 >> 8) & 0xff,
       FUNC_4(VAR_22));

  FUNC_6(VAR_17, VAR_22, 1);
  FUNC_9(VAR_17, VAR_5,
       FUNC_1(VAR_22));
  break;
 case 134:
  FUNC_6(VAR_17, VAR_22, 0);
  break;

 case 132:
  VAR_20[1] = 0;
  VAR_23 = FUNC_8(VAR_17, FUNC_1(VAR_22));
  if (VAR_23 & VAR_15)
   VAR_20[1] |= VAR_2;
  if (VAR_23 & VAR_5)
   VAR_20[1] |= VAR_1;
  if (VAR_23 & VAR_16) {
   VAR_20[1] |= VAR_3;
   FUNC_5(VAR_17, FUNC_1(VAR_22));
  }
  VAR_20[2] = VAR_1 | VAR_2 |
     VAR_3;
  break;

 case 129:

  switch (VAR_20[1]) {
  case 141:

   VAR_23 = VAR_10 |
         VAR_7;
   break;
  case 140:

   VAR_23 = VAR_13 |
         VAR_7;
   break;
  case 139:

   VAR_23 = VAR_6 |
         VAR_8;
   break;
  case 138:

   VAR_23 = VAR_6 |
         VAR_9;
   break;
  case 137:

   VAR_23 = VAR_14 |
         VAR_8;
   break;
  case 136:

   VAR_23 = VAR_12 |
         VAR_13 |
         VAR_14 |
         VAR_8;
   break;
  default:
   return -VAR_4;
  }
  FUNC_6(VAR_17, VAR_22, 0);
  FUNC_9(VAR_17, VAR_23, FUNC_2(VAR_22));
  break;

 case 130:
  if (VAR_20[1] > 2)
   return -VAR_4;
  VAR_21->clk_src = VAR_20[1];
  if (VAR_21->clk_src == 2)
   VAR_21->clk_src = 3;
  FUNC_7(VAR_21->clk_src, VAR_21->addon + VAR_0);
  break;
 case 133:
  switch (VAR_21->clk_src) {
  case 0:
   VAR_20[1] = 0;
   VAR_20[2] = 17879;
   break;
  case 1:
   VAR_20[1] = 1;
   VAR_20[2] = 573066;
   break;
  case 3:
   VAR_20[1] = 2;
   VAR_20[2] = 1164822;
   break;
  default:
   return -VAR_4;
  }
  break;

 case 128:
  if (VAR_22 == 0)
   return -VAR_4;

  VAR_23 = FUNC_8(VAR_17, FUNC_2(VAR_22));
  VAR_23 &= VAR_11;
  if (VAR_20[1] == 1)
   VAR_23 |= VAR_11;
  else if (VAR_20[1] > 1)
   return -VAR_4;
  FUNC_9(VAR_17, VAR_23, FUNC_2(VAR_22));
  break;
 case 131:
  if (VAR_22 == 0)
   return -VAR_4;
  break;

 default:
  return -VAR_4;
 }
 return VAR_19->n;
}
