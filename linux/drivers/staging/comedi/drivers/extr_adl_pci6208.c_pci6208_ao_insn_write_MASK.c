
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2,
     struct comedi_insn *VAR_3,
     unsigned int *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3->chanspec);
 int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->n; VAR_7++) {
  unsigned int VAR_8 = VAR_4[VAR_7];


  VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_0, 0);
  if (VAR_6)
   return VAR_6;


  FUNC_4(FUNC_2(VAR_2, VAR_8),
       VAR_1->iobase + FUNC_1(VAR_5));

  VAR_2->readback[VAR_5] = VAR_8;
 }

 return VAR_3->n;
}
