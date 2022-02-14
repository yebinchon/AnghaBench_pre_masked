
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct apci1564_private* private; } ;
struct apci1564_private {unsigned long counters; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (unsigned int) ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_1 (int ) ;
 int VAR_9 ;




 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_10,
     struct comedi_subdevice *VAR_11,
     struct comedi_insn *VAR_12,
     unsigned int *VAR_13)
{
 struct apci1564_private *VAR_14 = VAR_10->private;
 unsigned int VAR_15 = FUNC_1(VAR_12->chanspec);
 unsigned long VAR_16 = VAR_14->counters + FUNC_0(VAR_15);
 unsigned int VAR_17;

 switch (VAR_13[0]) {
 case 131:
  VAR_17 = FUNC_2(VAR_16 + VAR_2);
  VAR_17 |= VAR_1 | VAR_0;
  FUNC_3(VAR_13[1], VAR_16 + VAR_3);
  FUNC_3(VAR_17, VAR_16 + VAR_2);
  break;
 case 130:
  VAR_17 = FUNC_2(VAR_16 + VAR_2);
  VAR_17 &= ~(VAR_1 | VAR_0);
  FUNC_3(VAR_17, VAR_16 + VAR_2);
  break;
 case 128:





  FUNC_3(VAR_13[1], VAR_16 + VAR_2);
  break;
 case 129:
  VAR_13[1] = 0;
  VAR_17 = FUNC_2(VAR_16 + VAR_2);
  if (VAR_17 & VAR_1)
   VAR_13[1] |= VAR_6;
  if (VAR_17 & VAR_0)
   VAR_13[1] |= VAR_7;
  VAR_17 = FUNC_2(VAR_16 + VAR_5);
  if (VAR_17 & VAR_4)
   VAR_13[1] |= VAR_8;
  VAR_13[2] = VAR_6 | VAR_7 |
     VAR_8;
  break;
 default:
  return -VAR_9;
 }

 return VAR_12->n;
}
