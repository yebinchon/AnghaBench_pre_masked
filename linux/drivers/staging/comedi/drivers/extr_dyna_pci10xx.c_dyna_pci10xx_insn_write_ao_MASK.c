
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dyna_pci10xx_private {int mutex; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int iobase; struct dyna_pci10xx_private* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2,
          unsigned int *VAR_3)
{
 struct dyna_pci10xx_private *VAR_4 = VAR_0->private;
 int VAR_5;

 FUNC_0(&VAR_4->mutex);
 for (VAR_5 = 0; VAR_5 < VAR_2->n; VAR_5++) {
  FUNC_3();

  FUNC_2(VAR_3[VAR_5], VAR_0->iobase);
  FUNC_4(10, 20);
 }
 FUNC_1(&VAR_4->mutex);
 return VAR_5;
}
