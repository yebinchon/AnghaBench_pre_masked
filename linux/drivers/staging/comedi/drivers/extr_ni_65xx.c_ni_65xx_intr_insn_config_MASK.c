
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;




 int VAR_0 ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct comedi_device*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
        struct comedi_subdevice *VAR_2,
        struct comedi_insn *VAR_3,
        unsigned int *VAR_4)
{
 switch (VAR_4[0]) {
 case 129:

  if (VAR_3->n != 3)
   return -VAR_0;


  FUNC_1(VAR_1, 0, VAR_4[1], VAR_4[2]);

  FUNC_1(VAR_1, 32, 0, 0);

  FUNC_1(VAR_1, 64, 0, 0);
  break;
 case 128:

  if (VAR_4[1] != 0)
   return -VAR_0;

  switch (VAR_4[2]) {
  case 131:
   FUNC_0(VAR_1);
   break;
  case 130:




   FUNC_1(VAR_1, VAR_4[3],
            VAR_4[4], VAR_4[5]);
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 return VAR_3->n;
}
