
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,int ) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2,
     struct comedi_insn *VAR_3,
     unsigned int *VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_3->chanspec);
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_3->n; VAR_6++) {

  FUNC_3(0x80000, VAR_1->mmio + 8);


  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_0, 0);
  if (VAR_5)
   return VAR_5;


  VAR_4[VAR_6] = FUNC_2(VAR_1->mmio + 28);
 }

 return VAR_3->n;
}
