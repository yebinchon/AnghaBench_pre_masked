
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_info {TYPE_1__* mem; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ internal_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct uio_info*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct uio_info* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct uio_info*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_1)
{
 struct uio_info *VAR_2 = FUNC_4(VAR_1);


 FUNC_1(0, VAR_2->mem[0].internal_addr + VAR_0);
 FUNC_6(VAR_2);
 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 FUNC_0(VAR_2->mem[0].internal_addr);

 FUNC_2(VAR_2);
}
