
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;



 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,unsigned int*,int) ;
 int FUNC_1 (struct comedi_device*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
        struct comedi_subdevice *VAR_1,
        struct comedi_insn *VAR_2,
        unsigned int *VAR_3)
{
 int VAR_4;

 switch (VAR_3[0]) {
 case 128:
  VAR_4 = FUNC_1(VAR_0, VAR_3[1]);
  if (VAR_4)
   return VAR_4;

  VAR_3[1] = VAR_4;
  break;
 default:
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0xffffffff);
  if (VAR_4)
   return VAR_4;
  break;
 }

 return VAR_2->n;
}
