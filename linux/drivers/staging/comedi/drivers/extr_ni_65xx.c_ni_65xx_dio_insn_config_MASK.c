
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int type; scalar_t__ private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_3 ;




 unsigned int FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_7,
       struct comedi_subdevice *VAR_8,
       struct comedi_insn *VAR_9,
       unsigned int *VAR_10)
{
 unsigned long VAR_11 = (unsigned long)VAR_8->private;
 unsigned int VAR_12 = FUNC_0(VAR_9->chanspec);
 unsigned int VAR_13 = FUNC_1(VAR_12);
 unsigned int VAR_14 = VAR_11 + FUNC_2(VAR_12);
 unsigned int VAR_15;
 unsigned int VAR_16;

 switch (VAR_10[0]) {
 case 128:





  VAR_15 = (VAR_10[1] + 100) / 200;
  if (VAR_15 > 0xfffff)
   VAR_15 = 0xfffff;
  VAR_10[1] = VAR_15 * 200;






  VAR_16 = FUNC_5(VAR_7->mmio + FUNC_3(VAR_14));
  if (VAR_15) {
   FUNC_7(VAR_15, VAR_7->mmio + VAR_4);
   VAR_16 |= VAR_13;
  } else {
   VAR_16 &= ~VAR_13;
  }
  FUNC_6(VAR_16, VAR_7->mmio + FUNC_3(VAR_14));
  break;

 case 130:
  if (VAR_8->type != VAR_2)
   return -VAR_3;
  FUNC_6(VAR_6,
         VAR_7->mmio + FUNC_4(VAR_14));
  break;

 case 131:
  if (VAR_8->type != VAR_2)
   return -VAR_3;
  FUNC_6(VAR_5,
         VAR_7->mmio + FUNC_4(VAR_14));
  break;

 case 129:
  if (VAR_8->type != VAR_2)
   return -VAR_3;
  VAR_16 = FUNC_5(VAR_7->mmio + FUNC_4(VAR_14));
  VAR_10[1] = (VAR_16 == VAR_5) ? VAR_0
       : VAR_1;
  break;

 default:
  return -VAR_3;
 }

 return VAR_9->n;
}
