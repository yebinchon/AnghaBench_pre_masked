
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;

int FUNC_1(struct comedi_device *VAR_1,
         struct comedi_subdevice *VAR_2,
         struct comedi_insn *VAR_3,
         unsigned int *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3->chanspec);
 int VAR_6;

 if (!VAR_2->readback)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_3->n; VAR_6++)
  VAR_4[VAR_6] = VAR_2->readback[VAR_5];

 return VAR_3->n;
}
