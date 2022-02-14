
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {unsigned char* res_owned; int res_spinlock; } ;
struct comedi_device {struct pci230_private* private; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
      unsigned char VAR_1, unsigned int VAR_2)
{
 struct pci230_private *VAR_3 = VAR_0->private;
 unsigned long VAR_4;

 FUNC_0(&VAR_3->res_spinlock, VAR_4);
 VAR_3->res_owned[VAR_2] &= ~VAR_1;
 FUNC_1(&VAR_3->res_spinlock, VAR_4);
}
