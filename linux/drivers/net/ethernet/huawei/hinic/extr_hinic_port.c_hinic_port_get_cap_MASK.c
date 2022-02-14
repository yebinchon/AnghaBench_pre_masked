
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_port_cap {scalar_t__ status; int func_idx; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct hinic_hwdev*,int ,struct hinic_port_cap*,int,struct hinic_port_cap*,int*) ;

int FUNC_3(struct hinic_dev *VAR_2,
         struct hinic_port_cap *VAR_3)
{
 struct hinic_hwdev *VAR_4 = VAR_2->hwdev;
 struct hinic_hwif *VAR_5 = VAR_4->hwif;
 struct pci_dev *VAR_6 = VAR_5->pdev;
 u16 VAR_7;
 int VAR_8;

 VAR_3->func_idx = FUNC_0(VAR_5);

 VAR_8 = FUNC_2(VAR_4, VAR_1,
     VAR_3, sizeof(*VAR_3),
     VAR_3, &VAR_7);
 if (VAR_8 || (VAR_7 != sizeof(*VAR_3)) || VAR_3->status) {
  FUNC_1(&VAR_6->dev,
   "Failed to get port capabilities, ret = %d\n",
   VAR_3->status);
  return -VAR_0;
 }

 return 0;
}
