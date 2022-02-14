
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_info {struct uio_info* priv; TYPE_1__* mem; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ internal_addr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct uio_info*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct uio_info* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct uio_info*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct uio_info *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_5(VAR_1);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 for (VAR_2 = 0; VAR_2 < 5; VAR_2++) {
  if (VAR_1->mem[VAR_2].internal_addr)
   FUNC_0(VAR_1->mem[VAR_2].internal_addr);
 }
 FUNC_1(VAR_1->priv);
 FUNC_1(VAR_1);
}
