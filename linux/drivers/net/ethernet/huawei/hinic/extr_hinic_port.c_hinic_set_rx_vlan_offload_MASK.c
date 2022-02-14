
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlan_cfg ;
typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_vlan_cfg {scalar_t__ status; int vlan_rx_offload; int func_id; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int,scalar_t__,int ) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_vlan_cfg*,int,struct hinic_vlan_cfg*,int *) ;

int FUNC_3(struct hinic_dev *VAR_2, u8 VAR_3)
{
 struct hinic_hwdev *VAR_4 = VAR_2->hwdev;
 struct hinic_vlan_cfg VAR_5;
 struct hinic_hwif *VAR_6;
 struct pci_dev *VAR_7;
 u16 VAR_8;
 int VAR_9;

 if (!VAR_4)
  return -VAR_0;

 VAR_6 = VAR_4->hwif;
 VAR_7 = VAR_6->pdev;
 VAR_5.func_id = FUNC_0(VAR_6);
 VAR_5.vlan_rx_offload = VAR_3;

 VAR_9 = FUNC_2(VAR_4, VAR_1,
     &VAR_5, sizeof(VAR_5),
     &VAR_5, &VAR_8);
 if (VAR_9 || !VAR_8 || VAR_5.status) {
  FUNC_1(&VAR_7->dev,
   "Failed to set rx vlan offload, err: %d, status: 0x%x, out size: 0x%x\n",
   VAR_9, VAR_5.status, VAR_8);
  return -VAR_0;
 }

 return 0;
}
