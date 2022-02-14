
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct comedi_device*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3,
       struct comedi_insn *VAR_4,
       unsigned int *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4->chanspec);
 int VAR_7;


 if (VAR_6 < 16 || VAR_6 > 127)
  return -VAR_0;





 if (VAR_4->n > 0) {
  unsigned int VAR_8 = VAR_5[VAR_4->n - 1];

  VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1, 0);
  if (VAR_7)
   return VAR_7;

  FUNC_2(VAR_2, VAR_6, VAR_8);
  VAR_3->readback[VAR_6] = VAR_8;
 }

 return VAR_4->n;
}
