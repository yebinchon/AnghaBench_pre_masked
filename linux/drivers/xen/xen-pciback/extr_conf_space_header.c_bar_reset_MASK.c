
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pci_bar_info {scalar_t__ which; } ;



__attribute__((used)) static void FUNC_0(struct pci_dev *VAR_0, int VAR_1, void *VAR_2)
{
 struct pci_bar_info *VAR_3 = VAR_2;

 VAR_3->which = 0;
}
