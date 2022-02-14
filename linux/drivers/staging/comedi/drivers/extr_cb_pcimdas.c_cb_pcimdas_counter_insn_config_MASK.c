
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct cb_pcimdas_private* private; } ;
struct cb_pcimdas_private {scalar_t__ BADR3; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;


 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_4,
       struct comedi_subdevice *VAR_5,
       struct comedi_insn *VAR_6,
       unsigned int *VAR_7)
{
 struct cb_pcimdas_private *VAR_8 = VAR_4->private;
 unsigned int VAR_9;

 switch (VAR_7[0]) {
 case 128:
  switch (VAR_7[1]) {
  case 0:
   VAR_9 = VAR_2;
   break;
  case 1:
   VAR_9 = 0;
   break;
  default:
   return -VAR_0;
  }
  FUNC_1(VAR_9, VAR_8->BADR3 + VAR_3);
  break;
 case 129:
  VAR_9 = FUNC_0(VAR_8->BADR3 + VAR_3);
  if (VAR_9 & VAR_2) {
   VAR_7[1] = 0;
   VAR_7[2] = VAR_1;
  } else {
   VAR_7[1] = 1;
   VAR_7[2] = 0;
  }
  break;
 default:
  return -VAR_0;
 }

 return VAR_6->n;
}
