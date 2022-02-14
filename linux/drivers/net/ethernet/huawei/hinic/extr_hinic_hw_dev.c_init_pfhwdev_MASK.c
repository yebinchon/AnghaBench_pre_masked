
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_pfhwdev {int pf_to_mgmt; struct hinic_hwdev hwdev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct hinic_hwif*) ;
 int FUNC_2 (int *,int ,struct hinic_pfhwdev*,int ) ;
 int FUNC_3 (struct hinic_hwif*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct hinic_pfhwdev *VAR_3)
{
 struct hinic_hwdev *VAR_4 = &VAR_3->hwdev;
 struct hinic_hwif *VAR_5 = VAR_4->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_3->pf_to_mgmt, VAR_5);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "Failed to initialize PF to MGMT channel\n");
  return VAR_7;
 }

 FUNC_2(&VAR_3->pf_to_mgmt, VAR_0,
       VAR_3, VAR_2);

 FUNC_3(VAR_5, VAR_1);
 return 0;
}
