
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
          struct comedi_subdevice *VAR_2,
          struct comedi_insn *VAR_3,
          unsigned int *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4[0]) {
 case 129:
  FUNC_1(VAR_1, VAR_2);
  break;
 case 128:
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4[1]);
  if (VAR_5 < 0)
   VAR_5 = -VAR_0;
  break;
 case 130:
  FUNC_0(VAR_1, VAR_2, &VAR_4[1], &VAR_4[2]);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5 < 0 ? VAR_5 : VAR_3->n;
}
