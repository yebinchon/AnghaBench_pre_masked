
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_pf_to_mgmt {struct hinic_hwif* hwif; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
typedef enum hinic_mod_type { ____Placeholder_hinic_mod_type } hinic_mod_type ;
typedef enum hinic_mgmt_msg_type { ____Placeholder_hinic_mgmt_msg_type } hinic_mgmt_msg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hinic_pf_to_mgmt*,int,int ,void*,int ,void*,int *,int ,int ) ;

int FUNC_3(struct hinic_pf_to_mgmt *VAR_4,
        enum hinic_mod_type VAR_5, u8 VAR_6,
        void *VAR_7, u16 VAR_8, void *VAR_9, u16 *VAR_10,
        enum hinic_mgmt_msg_type VAR_11)
{
 struct hinic_hwif *VAR_12 = VAR_4->hwif;
 struct pci_dev *VAR_13 = VAR_12->pdev;

 if (VAR_11 != VAR_1) {
  FUNC_1(&VAR_13->dev, "Invalid MGMT msg type\n");
  return -VAR_0;
 }

 if (!FUNC_0(VAR_8)) {
  FUNC_1(&VAR_13->dev, "Invalid MGMT msg buffer size\n");
  return -VAR_0;
 }

 return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
    VAR_9, VAR_10, VAR_2,
    VAR_3);
}
