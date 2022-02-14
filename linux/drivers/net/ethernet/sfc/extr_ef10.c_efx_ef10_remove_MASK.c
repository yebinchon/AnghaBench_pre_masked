
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct efx_nic {TYPE_1__* pci_dev; int net_dev; struct efx_ef10_nic_data* nic_data; } ;
struct efx_ef10_nic_data {int vf_index; int mcdi_buf; int udp_tunnels_lock; int udp_tunnels; int must_restore_piobufs; scalar_t__ wc_membase; int vlan_lock; struct ef10_vf* vf; } ;
struct ef10_vf {int * efx; } ;
struct TYPE_2__ {int dev; struct pci_dev* physfn; scalar_t__ is_virtfn; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*,int) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*,int *) ;
 int FUNC_11 (struct efx_nic*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct efx_ef10_nic_data*) ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct efx_nic*,int ,int ,char*) ;
 struct efx_nic* FUNC_19 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_20(struct efx_nic *VAR_3)
{
 struct efx_ef10_nic_data *VAR_4 = VAR_3->nic_data;
 int VAR_5;
 FUNC_2(VAR_3);
 FUNC_15(&VAR_4->vlan_lock);

 FUNC_11(VAR_3);

 FUNC_9(VAR_3);

 FUNC_5(VAR_3);

 if (VAR_4->wc_membase)
  FUNC_12(VAR_4->wc_membase);

 VAR_5 = FUNC_4(VAR_3);
 FUNC_0(VAR_5 != 0);

 if (!VAR_4->must_restore_piobufs)
  FUNC_3(VAR_3);

 FUNC_1(&VAR_3->pci_dev->dev, &VAR_1);
 FUNC_1(&VAR_3->pci_dev->dev, &VAR_0);

 FUNC_7(VAR_3);

 FUNC_14(VAR_4->udp_tunnels, 0, sizeof(VAR_4->udp_tunnels));
 FUNC_16(&VAR_4->udp_tunnels_lock);
 (void)FUNC_6(VAR_3, 1);
 FUNC_17(&VAR_4->udp_tunnels_lock);

 FUNC_15(&VAR_4->udp_tunnels_lock);

 FUNC_8(VAR_3);
 FUNC_10(VAR_3, &VAR_4->mcdi_buf);
 FUNC_13(VAR_4);
}
