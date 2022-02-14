
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct efx_nic {scalar_t__ vf_count; int net_dev; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 unsigned int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_2, bool VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->pci_dev;
 unsigned int VAR_5 = 0;

 VAR_5 = FUNC_3(VAR_4);

 if (VAR_5 && !VAR_3) {
  FUNC_1(VAR_2, VAR_1, VAR_2->net_dev, "VFs are assigned to guests; "
      "please detach them before disabling SR-IOV\n");
  return -VAR_0;
 }

 if (!VAR_5)
  FUNC_2(VAR_4);

 FUNC_0(VAR_2);
 VAR_2->vf_count = 0;
 return 0;
}
