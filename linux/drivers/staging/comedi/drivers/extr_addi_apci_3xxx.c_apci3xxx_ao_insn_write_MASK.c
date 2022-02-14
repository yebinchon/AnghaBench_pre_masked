
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3,
      unsigned int *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3->chanspec);
 unsigned int VAR_6 = FUNC_1(VAR_3->chanspec);
 int VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3->n; VAR_8++) {
  unsigned int VAR_9 = VAR_4[VAR_8];


  FUNC_3(VAR_6, VAR_1->mmio + 96);


  FUNC_3((VAR_9 << 8) | VAR_5, VAR_1->mmio + 100);


  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_0, 0);
  if (VAR_7)
   return VAR_7;

  VAR_2->readback[VAR_5] = VAR_9;
 }

 return VAR_3->n;
}
