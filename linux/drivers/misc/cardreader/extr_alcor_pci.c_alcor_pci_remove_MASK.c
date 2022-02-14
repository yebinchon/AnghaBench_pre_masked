
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct alcor_pci_priv {int id; } ;


 int FUNC_0 (struct alcor_pci_priv*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct alcor_pci_priv* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct alcor_pci_priv *VAR_2;

 VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_2, 1);

 FUNC_2(&VAR_1->dev);

 FUNC_1(&VAR_0, VAR_2->id);

 FUNC_4(VAR_1);
 FUNC_5(VAR_1, ((void*)0));
}
