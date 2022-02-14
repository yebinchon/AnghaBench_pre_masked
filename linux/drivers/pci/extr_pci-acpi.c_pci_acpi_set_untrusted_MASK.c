
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int untrusted; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_1)
{
 u8 VAR_2;

 if (FUNC_1(VAR_1) != VAR_0)
  return;
 if (FUNC_0(&VAR_1->dev, "ExternalFacingPort", &VAR_2))
  return;






 if (VAR_2)
  VAR_1->untrusted = 1;
}
