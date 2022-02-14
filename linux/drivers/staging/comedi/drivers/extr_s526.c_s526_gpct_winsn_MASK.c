
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s526_private {int* gpct_config; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct s526_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;



 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3,
      unsigned int *VAR_4)
{
 struct s526_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6 = FUNC_0(VAR_3->chanspec);

 FUNC_2(VAR_1->iobase + FUNC_1(VAR_6));


 switch (VAR_5->gpct_config[VAR_6]) {
 case 130:







  if ((VAR_4[1] <= VAR_4[0]) || !VAR_4[0])
   return -VAR_0;


 case 129:
 case 128:
  FUNC_3(VAR_1, VAR_6, VAR_4[0]);
  break;

 default:
  return -VAR_0;
 }

 return VAR_3->n;
}
