
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int tso_cfg ;
struct pci_dev {int dev; } ;
struct hinic_tso_config {int tso_en; scalar_t__ status; int func_id; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef enum hinic_tso_state { ____Placeholder_hinic_tso_state } hinic_tso_state ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_tso_config*,int,struct hinic_tso_config*,int*) ;

int FUNC_3(struct hinic_dev *VAR_2, enum hinic_tso_state VAR_3)
{
 struct hinic_hwdev *VAR_4 = VAR_2->hwdev;
 struct hinic_hwif *VAR_5 = VAR_4->hwif;
 struct hinic_tso_config VAR_6 = {0};
 struct pci_dev *VAR_7 = VAR_5->pdev;
 u16 VAR_8;
 int VAR_9;

 VAR_6.func_id = FUNC_0(VAR_5);
 VAR_6.tso_en = VAR_3;

 VAR_9 = FUNC_2(VAR_4, VAR_1,
     &VAR_6, sizeof(VAR_6),
     &VAR_6, &VAR_8);
 if (VAR_9 || VAR_8 != sizeof(VAR_6) || VAR_6.status) {
  FUNC_1(&VAR_7->dev,
   "Failed to set port tso, ret = %d\n",
   VAR_6.status);
  return -VAR_0;
 }

 return 0;
}
