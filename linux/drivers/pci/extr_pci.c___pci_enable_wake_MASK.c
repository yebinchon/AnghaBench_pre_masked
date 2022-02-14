
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int wakeup_prepared; } ;
typedef int pci_power_t ;


 int FUNC_0 (struct pci_dev*,int) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_0, pci_power_t VAR_1, bool VAR_2)
{
 int VAR_3 = 0;
 if (!FUNC_2(VAR_0))
  return 0;


 if (!!VAR_2 == !!VAR_0->wakeup_prepared)
  return 0;







 if (VAR_2) {
  int VAR_4;

  if (FUNC_1(VAR_0, VAR_1))
   FUNC_0(VAR_0, 1);
  else
   VAR_3 = 1;
  VAR_4 = FUNC_3(VAR_0, 1);
  if (VAR_3)
   VAR_3 = VAR_4;
  if (!VAR_3)
   VAR_0->wakeup_prepared = 1;
 } else {
  FUNC_3(VAR_0, 0);
  FUNC_0(VAR_0, 0);
  VAR_0->wakeup_prepared = 0;
 }

 return VAR_3;
}
