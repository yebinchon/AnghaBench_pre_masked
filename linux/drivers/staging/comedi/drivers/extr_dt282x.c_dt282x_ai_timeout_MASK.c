
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4,
        struct comedi_insn *VAR_5,
        unsigned long VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_3->iobase + VAR_0);
 switch (VAR_6) {
 case 128:
  if ((VAR_7 & 128) == 0)
   return 0;
  break;
 case 129:
  if (VAR_7 & 129)
   return 0;
  break;
 default:
  return -VAR_2;
 }
 return -VAR_1;
}
