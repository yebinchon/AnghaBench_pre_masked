
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         struct comedi_insn *VAR_2,
         unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2->chanspec);
 unsigned int VAR_5 = VAR_1->readback[VAR_4];
 int VAR_6;

 if (VAR_4 == 0)
  FUNC_2(VAR_0, 1);

 for (VAR_6 = 0; VAR_6 < VAR_2->n; VAR_6++) {
  VAR_5 = VAR_3[VAR_6];


  FUNC_4(FUNC_3(VAR_1, VAR_5),
       VAR_0->iobase + FUNC_0(VAR_4));
 }
 VAR_1->readback[VAR_4] = VAR_5;

 if (VAR_4 == 0)
  FUNC_2(VAR_0, 0);

 return VAR_2->n;
}
