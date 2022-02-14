
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
           struct comedi_subdevice *VAR_1,
           struct comedi_insn *VAR_2,
           unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2->chanspec);

 if (VAR_2->n) {
  unsigned int VAR_5 = VAR_3[VAR_2->n - 1];

  if (VAR_1->readback[VAR_4] != VAR_5) {

   FUNC_1(VAR_0, (VAR_4 << 8) | VAR_5, 11,
           0);
   VAR_1->readback[VAR_4] = VAR_5;
  }
 }

 return VAR_2->n;
}
