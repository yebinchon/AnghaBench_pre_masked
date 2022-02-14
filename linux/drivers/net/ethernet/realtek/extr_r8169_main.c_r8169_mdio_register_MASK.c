
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int phydev; struct pci_dev* pci_dev; } ;
struct pci_dev {int dev; } ;
struct mii_bus {char* name; int write; int read; int id; int * irq; int * parent; struct rtl8169_private* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mii_bus* FUNC_0 (int *) ;
 int FUNC_1 (struct mii_bus*,int ) ;
 int FUNC_2 (struct mii_bus*) ;
 int FUNC_3 (struct mii_bus*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_7(struct rtl8169_private *VAR_6)
{
 struct pci_dev *VAR_7 = VAR_6->pci_dev;
 struct mii_bus *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(&VAR_7->dev);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->name = "r8169";
 VAR_8->priv = VAR_6;
 VAR_8->parent = &VAR_7->dev;
 VAR_8->irq[0] = VAR_3;
 FUNC_6(VAR_8->id, VAR_2, "r8169-%x", FUNC_4(VAR_7));

 VAR_8->read = VAR_4;
 VAR_8->write = VAR_5;

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_6->phydev = FUNC_1(VAR_8, 0);
 if (!VAR_6->phydev) {
  FUNC_3(VAR_8);
  return -VAR_0;
 }


 FUNC_5(VAR_6->phydev);

 return 0;
}
