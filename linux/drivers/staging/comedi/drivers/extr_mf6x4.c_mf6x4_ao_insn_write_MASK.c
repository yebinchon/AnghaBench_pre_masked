
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mf6x4_private {int gpioc_reg; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; struct mf6x4_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4,
          unsigned int *VAR_5)
{
 struct mf6x4_private *VAR_6 = VAR_2->private;
 unsigned int VAR_7 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_8 = VAR_3->readback[VAR_7];
 unsigned int VAR_9;
 int VAR_10;


 VAR_9 = FUNC_2(VAR_6->gpioc_reg);
 FUNC_4((VAR_9 & ~VAR_1) | VAR_0,
    VAR_6->gpioc_reg);

 for (VAR_10 = 0; VAR_10 < VAR_4->n; VAR_10++) {
  VAR_8 = VAR_5[VAR_10];
  FUNC_3(VAR_8, VAR_2->mmio + FUNC_1(VAR_7));
 }
 VAR_3->readback[VAR_7] = VAR_8;

 return VAR_4->n;
}
