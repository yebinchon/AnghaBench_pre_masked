
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_pfhwdev {int pf_to_mgmt; struct hinic_hwdev hwdev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_dev_cap {int dummy; } ;
typedef int dev_cap ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hinic_hwdev*,struct hinic_dev_cap*) ;
 int FUNC_2 (int *,int ,int ,struct hinic_dev_cap*,int,struct hinic_dev_cap*,int*,int ) ;

__attribute__((used)) static int FUNC_3(struct hinic_pfhwdev *VAR_3)
{
 struct hinic_hwdev *VAR_4 = &VAR_3->hwdev;
 struct hinic_hwif *VAR_5 = VAR_4->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 struct hinic_dev_cap VAR_7;
 u16 VAR_8, VAR_9;
 int VAR_10;

 VAR_8 = 0;
 VAR_9 = sizeof(VAR_7);

 VAR_10 = FUNC_2(&VAR_3->pf_to_mgmt, VAR_2,
    VAR_0, &VAR_7, VAR_8, &VAR_7,
    &VAR_9, VAR_1);
 if (VAR_10) {
  FUNC_0(&VAR_6->dev, "Failed to get capability from FW\n");
  return VAR_10;
 }

 return FUNC_1(VAR_4, &VAR_7);
}
