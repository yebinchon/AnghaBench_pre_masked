
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int n_chan; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;




 int VAR_0 ;


 int FUNC_0 (struct comedi_device*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_insn *VAR_3,
       unsigned int *VAR_4)
{
 unsigned int VAR_5 = 0xffffffff;
 unsigned int VAR_6, VAR_7, VAR_8;

 switch (VAR_4[0]) {
 case 129:

  if (VAR_3->n != 3)
   return -VAR_0;
  VAR_6 = VAR_4[1];
  VAR_7 = VAR_4[2];
  FUNC_0(VAR_1, VAR_5, VAR_6, VAR_7);
  break;
 case 128:

  if (VAR_4[1] != 0)
   return -VAR_0;

  switch (VAR_4[2]) {
  case 131:
   VAR_6 = 0;
   VAR_7 = 0;
   break;
  case 130:

   VAR_8 = VAR_4[3];
   if (VAR_8 >= VAR_2->n_chan) {
    VAR_5 = 0;
    VAR_6 = 0;
    VAR_7 = 0;
   } else {
    VAR_5 <<= VAR_8;
    VAR_6 = VAR_4[4] << VAR_8;
    VAR_7 = VAR_4[5] << VAR_8;
   }
   break;
  default:
   return -VAR_0;
  }
  FUNC_0(VAR_1, VAR_5, VAR_6, VAR_7);
  break;
 default:
  return -VAR_0;
 }

 return VAR_3->n;
}
