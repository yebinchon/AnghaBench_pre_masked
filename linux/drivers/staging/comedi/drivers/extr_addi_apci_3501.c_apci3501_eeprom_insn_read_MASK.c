
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {struct apci3501_private* private; } ;
struct apci3501_private {int amcc; } ;


 unsigned short FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         struct comedi_insn *VAR_2,
         unsigned int *VAR_3)
{
 struct apci3501_private *VAR_4 = VAR_0->private;
 unsigned short VAR_5 = FUNC_0(VAR_2->chanspec);
 unsigned int VAR_6;
 unsigned int VAR_7;

 if (VAR_2->n) {

  VAR_6 = FUNC_1(VAR_4->amcc, 2 * VAR_5);
  for (VAR_7 = 0; VAR_7 < VAR_2->n; VAR_7++)
   VAR_3[VAR_7] = VAR_6;
 }

 return VAR_2->n;
}
