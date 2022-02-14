
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_adapter {int fw_version; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct qlcnic_adapter*,int ) ;
 int FUNC_2 (int *,char*,int ,int ,int ,int ) ;

int FUNC_3(struct qlcnic_adapter *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 struct pci_dev *VAR_8 = VAR_4->pdev;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 VAR_6 = FUNC_1(VAR_4, VAR_1);
 VAR_7 = FUNC_1(VAR_4, VAR_2);
 VAR_4->fw_version = FUNC_0(VAR_5, VAR_6, VAR_7);

 FUNC_2(&VAR_8->dev, "Driver v%s, firmware version %d.%d.%d\n",
   VAR_3, VAR_5, VAR_6, VAR_7);

 return VAR_4->fw_version;
}
