
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int class; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,char*,int,int) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_1)
{
 u32 VAR_2 = VAR_1->class;





 if (VAR_2)
  return;

 VAR_1->class = VAR_0 << 8;
 FUNC_0(VAR_1, "NCR 53c810 rev 1 PCI class overridden (%#08x -> %#08x)\n",
   VAR_2, VAR_1->class);
}
