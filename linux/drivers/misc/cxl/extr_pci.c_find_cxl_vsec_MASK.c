
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int,int ) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_2)
{
 int VAR_3 = 0;
 u16 VAR_4;

 while ((VAR_3 = FUNC_0(VAR_2, VAR_3, VAR_1))) {
  FUNC_1(VAR_2, VAR_3 + 0x4, &VAR_4);
  if (VAR_4 == VAR_0)
   return VAR_3;
 }
 return 0;

}
