
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hnae3_ae_dev {struct hclgevf_dev* priv; struct pci_dev* pdev; } ;
struct hclgevf_dev {struct hnae3_ae_dev* ae_dev; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hclgevf_dev* FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct hnae3_ae_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct hclgevf_dev *VAR_4;

 VAR_4 = FUNC_0(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->pdev = VAR_3;
 VAR_4->ae_dev = VAR_2;
 VAR_2->priv = VAR_4;

 return 0;
}
