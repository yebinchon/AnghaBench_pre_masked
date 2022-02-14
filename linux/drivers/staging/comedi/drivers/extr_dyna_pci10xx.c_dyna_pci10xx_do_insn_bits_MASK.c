
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dyna_pci10xx_private {int mutex; int BADR3; } ;
struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct dyna_pci10xx_private* private; } ;


 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         struct comedi_insn *VAR_2,
         unsigned int *VAR_3)
{
 struct dyna_pci10xx_private *VAR_4 = VAR_0->private;

 FUNC_1(&VAR_4->mutex);
 if (FUNC_0(VAR_1, VAR_3)) {
  FUNC_4();
  FUNC_3(VAR_1->state, VAR_4->BADR3);
  FUNC_5(10, 100);
 }

 VAR_3[1] = VAR_1->state;
 FUNC_2(&VAR_4->mutex);

 return VAR_2->n;
}
