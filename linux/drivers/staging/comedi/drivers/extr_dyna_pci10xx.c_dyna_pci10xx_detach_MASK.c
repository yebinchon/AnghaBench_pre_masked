
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dyna_pci10xx_private {int mutex; } ;
struct comedi_device {struct dyna_pci10xx_private* private; } ;


 int FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0)
{
 struct dyna_pci10xx_private *VAR_1 = VAR_0->private;

 FUNC_0(VAR_0);
 if (VAR_1)
  FUNC_1(&VAR_1->mutex);
}
