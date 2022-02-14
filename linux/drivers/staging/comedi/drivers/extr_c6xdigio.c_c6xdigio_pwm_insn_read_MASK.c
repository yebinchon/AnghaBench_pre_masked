
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1,
      struct comedi_insn *VAR_2,
      unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2->chanspec);
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = (VAR_1->state >> (16 * VAR_4)) & 0xffff;

 for (VAR_6 = 0; VAR_6 < VAR_2->n; VAR_6++)
  VAR_3[VAR_6] = VAR_5;

 return VAR_2->n;
}
