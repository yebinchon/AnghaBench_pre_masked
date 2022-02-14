
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;
typedef int s16 ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         struct comedi_insn *VAR_2,
         unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2->chanspec);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->n; VAR_5++) {
  s16 VAR_6 = (s16)VAR_3[VAR_5];
  int VAR_7;

  VAR_6 -= (0x1fff);

  VAR_7 = FUNC_1(VAR_0, VAR_4, VAR_6);
  if (VAR_7)
   return VAR_7;

  VAR_1->readback[VAR_4] = VAR_3[VAR_5];
 }

 return VAR_2->n;
}
