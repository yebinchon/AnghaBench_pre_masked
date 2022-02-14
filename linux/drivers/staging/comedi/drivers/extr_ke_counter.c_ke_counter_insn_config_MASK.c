
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3,
      struct comedi_insn *VAR_4,
      unsigned int *VAR_5)
{
 unsigned char VAR_6;

 switch (VAR_5[0]) {
 case 134:
  switch (VAR_5[1]) {
  case 133:
   VAR_6 = 130;
   break;
  case 132:
   VAR_6 = 129;
   break;
  case 131:
   VAR_6 = 128;
   break;
  default:
   return -VAR_0;
  }
  FUNC_2(VAR_6, VAR_2->iobase + VAR_1);
  break;
 case 136:
  VAR_6 = FUNC_0(VAR_2->iobase + VAR_1);
  switch (VAR_6) {
  case 130:
   VAR_5[1] = 133;
   VAR_5[2] = 50;
   break;
  case 129:
   VAR_5[1] = 132;
   VAR_5[2] = 250;
   break;
  case 128:
   VAR_5[1] = 131;
   VAR_5[2] = 0;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 135:
  FUNC_1(VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return VAR_4->n;
}
