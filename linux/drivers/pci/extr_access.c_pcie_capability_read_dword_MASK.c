
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;

int FUNC_5(struct pci_dev *VAR_3, int VAR_4, u32 *VAR_5)
{
 int VAR_6;

 *VAR_5 = 0;
 if (VAR_4 & 3)
  return -VAR_0;

 if (FUNC_3(VAR_3, VAR_4)) {
  VAR_6 = FUNC_2(VAR_3, FUNC_1(VAR_3) + VAR_4, VAR_5);





  if (VAR_6)
   *VAR_5 = 0;
  return VAR_6;
 }

 if (FUNC_0(VAR_3) && FUNC_4(VAR_3) &&
     VAR_4 == VAR_1)
  *VAR_5 = VAR_2;

 return 0;
}
