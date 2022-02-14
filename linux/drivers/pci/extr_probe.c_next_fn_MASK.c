
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {scalar_t__ multifunction; } ;
struct pci_bus {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int *) ;

__attribute__((used)) static unsigned FUNC_4(struct pci_bus *VAR_2, struct pci_dev *VAR_3, unsigned VAR_4)
{
 int VAR_5;
 u16 VAR_6 = 0;
 unsigned VAR_7;

 if (FUNC_1(VAR_2)) {
  if (!VAR_3)
   return 0;
  VAR_5 = FUNC_2(VAR_3, VAR_1);
  if (!VAR_5)
   return 0;

  FUNC_3(VAR_3, VAR_5 + VAR_0, &VAR_6);
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 <= VAR_4)
   return 0;

  return VAR_7;
 }


 if (!VAR_3 || VAR_3->multifunction)
  return (VAR_4 + 1) % 8;

 return 0;
}
