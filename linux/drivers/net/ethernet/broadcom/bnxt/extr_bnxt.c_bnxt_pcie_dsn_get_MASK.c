
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct bnxt {int dev; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_2, u8 VAR_3[])
{
 struct pci_dev *VAR_4 = VAR_2->pdev;
 int VAR_5 = FUNC_1(VAR_4, VAR_1);
 u32 VAR_6;

 if (!VAR_5) {
  FUNC_0(VAR_2->dev, "Unable do read adapter's DSN");
  return -VAR_0;
 }


 VAR_5 += 4;
 FUNC_2(VAR_4, VAR_5, &VAR_6);
 FUNC_3(VAR_6, &VAR_3[0]);
 FUNC_2(VAR_4, VAR_5 + 4, &VAR_6);
 FUNC_3(VAR_6, &VAR_3[4]);
 return 0;
}
