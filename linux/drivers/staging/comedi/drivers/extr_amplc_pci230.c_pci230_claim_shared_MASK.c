
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci230_private {unsigned char* res_owned; int res_spinlock; } ;
struct comedi_device {struct pci230_private* private; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct comedi_device *VAR_1,
    unsigned char VAR_2, unsigned int VAR_3)
{
 struct pci230_private *VAR_4 = VAR_1->private;
 unsigned int VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_4->res_spinlock, VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_5 == VAR_3)
   continue;
  if (VAR_4->res_owned[VAR_5] & VAR_2) {
   FUNC_1(&VAR_4->res_spinlock,
            VAR_6);
   return 0;
  }
 }
 VAR_4->res_owned[VAR_3] |= VAR_2;
 FUNC_1(&VAR_4->res_spinlock, VAR_6);
 return 1;
}
