
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct efx_nic {int vf_count; int net_dev; struct pci_dev* pci_dev; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_3 (struct pci_dev*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct efx_nic *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct pci_dev *VAR_4 = VAR_1->pci_dev;

 VAR_1->vf_count = VAR_2;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  goto fail1;

 VAR_3 = FUNC_3(VAR_4, VAR_2);
 if (VAR_3)
  goto fail2;

 return 0;
fail2:
 FUNC_1(VAR_1);
fail1:
 VAR_1->vf_count = 0;
 FUNC_2(VAR_1, VAR_0, VAR_1->net_dev,
    "Failed to enable SRIOV VFs\n");
 return VAR_3;
}
