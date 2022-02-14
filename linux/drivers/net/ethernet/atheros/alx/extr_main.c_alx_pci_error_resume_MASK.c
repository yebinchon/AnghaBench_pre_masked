
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct alx_priv {struct net_device* dev; } ;


 int FUNC_0 (struct alx_priv*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct alx_priv* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct alx_priv *VAR_1 = FUNC_4(VAR_0);
 struct net_device *VAR_2 = VAR_1->dev;

 FUNC_1(&VAR_0->dev, "pci error resume\n");

 FUNC_5();

 if (FUNC_3(VAR_2)) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_2);
 }

 FUNC_6();
}
