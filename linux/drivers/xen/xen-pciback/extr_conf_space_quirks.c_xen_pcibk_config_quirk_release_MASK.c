
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_config_quirk {int quirks_list; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xen_pcibk_config_quirk*) ;
 int FUNC_1 (int *) ;
 struct xen_pcibk_config_quirk* FUNC_2 (struct pci_dev*) ;

int FUNC_3(struct pci_dev *VAR_1)
{
 struct xen_pcibk_config_quirk *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2) {
  VAR_3 = -VAR_0;
  goto out;
 }

 FUNC_1(&VAR_2->quirks_list);
 FUNC_0(VAR_2);

out:
 return VAR_3;
}
