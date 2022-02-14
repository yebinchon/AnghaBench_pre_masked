
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct dyna_pci10xx_private {int mutex; int BADR3; } ;
struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct dyna_pci10xx_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_0,
         struct comedi_subdevice *VAR_1,
         struct comedi_insn *VAR_2,
         unsigned int *VAR_3)
{
 struct dyna_pci10xx_private *VAR_4 = VAR_0->private;
 u16 VAR_5 = 0;

 FUNC_1(&VAR_4->mutex);
 FUNC_3();
 VAR_5 = FUNC_0(VAR_4->BADR3);
 FUNC_4(10, 100);


 VAR_3[1] = VAR_5;
 VAR_3[0] = VAR_1->state;
 FUNC_2(&VAR_4->mutex);
 return VAR_2->n;
}
