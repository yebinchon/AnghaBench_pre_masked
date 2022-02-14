
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_dev {int hw; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct rtw_dev*,char*) ;

__attribute__((used)) static int FUNC_5(struct rtw_dev *VAR_0, struct pci_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_4(VAR_0, "failed to enable pci device\n");
  return VAR_2;
 }

 FUNC_3(VAR_1);
 FUNC_2(VAR_1, VAR_0->hw);
 FUNC_0(VAR_0->hw, &VAR_1->dev);

 return 0;
}
