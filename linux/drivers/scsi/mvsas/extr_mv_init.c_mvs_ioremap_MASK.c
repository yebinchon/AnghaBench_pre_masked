
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mvs_info {int * regs_ex; void* regs; struct pci_dev* pdev; } ;


 unsigned long VAR_0 ;
 void* FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (struct pci_dev*,int) ;
 unsigned long FUNC_3 (struct pci_dev*,int) ;
 unsigned long FUNC_4 (struct pci_dev*,int) ;

int FUNC_5(struct mvs_info *VAR_1, int VAR_2, int VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6, VAR_7 = 0;
 struct pci_dev *VAR_8 = VAR_1->pdev;
 if (VAR_3 != -1) {



  VAR_4 = FUNC_4(VAR_8, VAR_3);
  VAR_5 = FUNC_3(VAR_8, VAR_3);
  if (!VAR_4 || !VAR_5)
   goto err_out;

  VAR_7 = FUNC_2(VAR_8, VAR_3);
  if (VAR_7 & VAR_0)
   VAR_1->regs_ex = FUNC_0(VAR_4, VAR_5);
  else
   VAR_1->regs_ex = (void *)VAR_4;
  if (!VAR_1->regs_ex)
   goto err_out;
 }

 VAR_4 = FUNC_4(VAR_8, VAR_2);
 VAR_5 = FUNC_3(VAR_8, VAR_2);
 if (!VAR_4 || !VAR_5) {
  FUNC_1(VAR_1->regs_ex);
  VAR_1->regs_ex = ((void*)0);
  goto err_out;
 }

 VAR_6 = FUNC_2(VAR_8, VAR_2);
 VAR_1->regs = FUNC_0(VAR_4, VAR_5);

 if (!VAR_1->regs) {
  if (VAR_1->regs_ex && (VAR_7 & VAR_0))
   FUNC_1(VAR_1->regs_ex);
  VAR_1->regs_ex = ((void*)0);
  goto err_out;
 }

 return 0;
err_out:
 return -1;
}
