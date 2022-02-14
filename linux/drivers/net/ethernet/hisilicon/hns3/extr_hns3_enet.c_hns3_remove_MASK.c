
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hnae3_ae_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hnae3_ae_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 struct hnae3_ae_dev* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct hnae3_ae_dev *VAR_2 = FUNC_4(VAR_1);

 if (FUNC_3(VAR_1) && FUNC_0(VAR_0))
  FUNC_2(VAR_1);

 FUNC_1(VAR_2);
 FUNC_5(VAR_1, ((void*)0));
}
