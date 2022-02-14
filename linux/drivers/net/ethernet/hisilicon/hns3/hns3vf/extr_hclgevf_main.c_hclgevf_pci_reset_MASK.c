
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hclgevf_dev {scalar_t__ reset_type; int state; struct pci_dev* pdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hclgevf_dev*) ;
 int FUNC_3 (struct hclgevf_dev*) ;
 int FUNC_4 (struct hclgevf_dev*) ;
 int FUNC_5 (struct hclgevf_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct hclgevf_dev *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 int VAR_4 = 0;

 if (VAR_2->reset_type == VAR_1 &&
     FUNC_8(VAR_0, &VAR_2->state)) {
  FUNC_4(VAR_2);
  FUNC_5(VAR_2);
  FUNC_0(VAR_0, &VAR_2->state);
 }

 if (!FUNC_8(VAR_0, &VAR_2->state)) {
  FUNC_6(VAR_3);
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4) {
   FUNC_1(&VAR_3->dev,
    "failed(%d) to init MSI/MSI-X\n", VAR_4);
   return VAR_4;
  }

  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4) {
   FUNC_5(VAR_2);
   FUNC_1(&VAR_3->dev, "failed(%d) to init Misc IRQ(vector0)\n",
    VAR_4);
   return VAR_4;
  }

  FUNC_7(VAR_0, &VAR_2->state);
 }

 return VAR_4;
}
