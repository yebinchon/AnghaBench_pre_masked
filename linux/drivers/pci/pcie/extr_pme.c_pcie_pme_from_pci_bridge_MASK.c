
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int dummy; } ;
struct pci_bus {int self; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct pci_dev* FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_bus*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(struct pci_bus *VAR_2, u8 VAR_3)
{
 struct pci_dev *VAR_4;
 bool VAR_5 = 0;

 if (VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_2->self);
 if (!VAR_4)
  return 0;

 if (FUNC_3(VAR_4) && FUNC_4(VAR_4) == VAR_0) {
  FUNC_0(&VAR_1);
  if (FUNC_5(VAR_2))
   VAR_5 = 1;
  FUNC_6(&VAR_1);
 }

 FUNC_2(VAR_4);
 return VAR_5;
}
