
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hnae3_ae_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct hnae3_ae_dev*) ;
 int FUNC_1 (struct hnae3_ae_dev*) ;
 struct hnae3_ae_dev* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int *) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3)
{
 struct hnae3_ae_dev *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_4);
 FUNC_0(&VAR_3->dev, VAR_4);
 FUNC_3(VAR_3, ((void*)0));

 if (VAR_2 == VAR_1)
  FUNC_4(VAR_3, VAR_0);
}
