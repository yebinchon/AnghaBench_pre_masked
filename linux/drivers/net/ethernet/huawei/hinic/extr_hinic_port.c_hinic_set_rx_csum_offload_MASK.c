
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
struct hinic_checksum_offload {scalar_t__ status; int rx_csum_offload; int func_id; int member_0; } ;
typedef int rx_csum_cfg ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_checksum_offload*,int,struct hinic_checksum_offload*,int *) ;

int FUNC_3(struct hinic_dev *VAR_2, u32 VAR_3)
{
 struct hinic_checksum_offload VAR_4 = {0};
 struct hinic_hwdev *VAR_5 = VAR_2->hwdev;
 struct hinic_hwif *VAR_6;
 struct pci_dev *VAR_7;
 u16 VAR_8;
 int VAR_9;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_5->hwif;
 VAR_7 = VAR_6->pdev;
 VAR_4.func_id = FUNC_0(VAR_6);
 VAR_4.rx_csum_offload = VAR_3;

 VAR_9 = FUNC_2(VAR_5, VAR_1,
     &VAR_4, sizeof(VAR_4),
     &VAR_4, &VAR_8);
 if (VAR_9 || !VAR_8 || VAR_4.status) {
  FUNC_1(&VAR_7->dev,
   "Failed to set rx csum offload, ret = %d\n",
   VAR_4.status);
  return -VAR_0;
 }

 return 0;
}
