
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {scalar_t__ private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
     struct comedi_subdevice *VAR_1,
     struct comedi_insn *VAR_2,
     unsigned int *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)VAR_1->private;
 unsigned int VAR_5 = FUNC_0(VAR_2->chanspec);
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->n; VAR_6++)
  VAR_3[VAR_6] = FUNC_2(VAR_0->iobase + FUNC_1(VAR_5) + VAR_4);

 return VAR_2->n;
}
