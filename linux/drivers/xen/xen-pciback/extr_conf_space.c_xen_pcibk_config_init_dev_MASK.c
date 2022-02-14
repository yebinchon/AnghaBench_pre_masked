
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_dev_data {int config_fields; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 struct xen_pcibk_dev_data* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

int FUNC_6(struct pci_dev *VAR_0)
{
 int VAR_1 = 0;
 struct xen_pcibk_dev_data *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(&VAR_0->dev, "initializing virtual configuration space\n");

 FUNC_0(&VAR_2->config_fields);

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  goto out;

 VAR_1 = FUNC_5(VAR_0);

out:
 return VAR_1;
}
