
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pdn_table {int dummy; } ;
struct TYPE_4__ {void* nic_type; void* dft_eps_id; scalar_t__ activate; } ;
struct nic {TYPE_2__ pdn_table; TYPE_1__* phy_dev; } ;
struct net_device {int dummy; } ;
struct hci_pdn_table_ind {int nic_type; int dft_eps_id; scalar_t__ activate; } ;
struct TYPE_3__ {int priv_dev; int (* get_endian ) (int ) ;} ;


 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 struct nic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0, char *VAR_1, int VAR_2)
{
 struct nic *VAR_3 = FUNC_3(VAR_0);
 struct hci_pdn_table_ind *VAR_4 = (struct hci_pdn_table_ind *)VAR_1;
 u8 VAR_5 = VAR_3->phy_dev->get_endian(VAR_3->phy_dev->priv_dev);

 if (!VAR_4->activate) {
  FUNC_1(&VAR_3->pdn_table, 0x00, sizeof(struct pdn_table));
  FUNC_2(VAR_0, "pdn deactivated\n");

  return;
 }

 VAR_3->pdn_table.activate = VAR_4->activate;
 VAR_3->pdn_table.dft_eps_id = FUNC_0(VAR_5, VAR_4->dft_eps_id);
 VAR_3->pdn_table.nic_type = FUNC_0(VAR_5, VAR_4->nic_type);

 FUNC_2(VAR_0, "pdn activated, nic_type=0x%x\n",
      VAR_3->pdn_table.nic_type);
}
