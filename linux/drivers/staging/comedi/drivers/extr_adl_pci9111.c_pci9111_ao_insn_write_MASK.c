
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2,
     struct comedi_insn *VAR_3,
     unsigned int *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3->chanspec);
 unsigned int VAR_6 = VAR_2->readback[VAR_5];
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->n; VAR_7++) {
  VAR_6 = VAR_4[VAR_7];
  FUNC_1(VAR_6, VAR_1->iobase + VAR_0);
 }
 VAR_2->readback[VAR_5] = VAR_6;

 return VAR_3->n;
}
