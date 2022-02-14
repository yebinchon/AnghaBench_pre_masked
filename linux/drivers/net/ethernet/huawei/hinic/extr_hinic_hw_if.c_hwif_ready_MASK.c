
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hinic_hwif*,int ) ;

__attribute__((used)) static int FUNC_3(struct hinic_hwif *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 u32 VAR_5, VAR_6;

 VAR_5 = VAR_1;
 VAR_6 = FUNC_2(VAR_3, VAR_5);

 if (!FUNC_0(VAR_6, VAR_2)) {
  FUNC_1(&VAR_4->dev, "hwif status is not ready\n");
  return -VAR_0;
 }

 return 0;
}
