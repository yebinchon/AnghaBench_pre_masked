
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hnae3_ae_dev {struct hclgevf_dev* priv; struct pci_dev* pdev; } ;
struct hclgevf_dev {int keep_alive_task; int keep_alive_timer; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hnae3_ae_dev*) ;
 int FUNC_3 (struct hclgevf_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hnae3_ae_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct hclgevf_dev *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "hclge device allocation failed\n");
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_2->priv);
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "hclge device initialization failed\n");
  return VAR_5;
 }

 VAR_4 = VAR_2->priv;
 FUNC_4(&VAR_4->keep_alive_timer, VAR_1, 0);
 FUNC_0(&VAR_4->keep_alive_task, VAR_0);

 return 0;
}
