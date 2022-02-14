
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int revision; int dev; } ;
struct hclgevf_dev {struct pci_dev* pdev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hclgevf_dev*) ;
 int FUNC_3 (struct hclgevf_dev*,int) ;
 int FUNC_4 (struct hclgevf_dev*) ;
 int FUNC_5 (struct hclgevf_dev*) ;
 int FUNC_6 (struct hclgevf_dev*) ;
 int FUNC_7 (struct hclgevf_dev*,int) ;

__attribute__((used)) static int FUNC_8(struct hclgevf_dev *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;
 int VAR_2;

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_1->dev, "pci reset failed %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_1->dev, "cmd failed %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_0->pdev->dev,
   "failed(%d) to initialize RSS\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_0, 1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_0->pdev->dev,
   "failed(%d) to initialize VLAN config\n", VAR_2);
  return VAR_2;
 }

 if (VAR_1->revision >= 0x21) {
  VAR_2 = FUNC_7(VAR_0, 1);
  if (VAR_2)
   return VAR_2;
 }

 FUNC_1(&VAR_0->pdev->dev, "Reset done\n");

 return 0;
}
