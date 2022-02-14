
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ism_dev {int smcd; } ;


 struct ism_dev* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ism_dev*) ;
 int FUNC_3 (struct ism_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct ism_dev *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(VAR_1);

 FUNC_6(VAR_1->smcd);
 FUNC_5(VAR_0);
 FUNC_4(VAR_0);
 FUNC_1(&VAR_0->dev, ((void*)0));
 FUNC_3(VAR_1);
}
