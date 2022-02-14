
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pci_dev*,int,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 u16 VAR_7, VAR_8;

 while ((VAR_6 = FUNC_0(VAR_4, VAR_6,
          VAR_2))) {
  FUNC_1(VAR_4, VAR_6 + VAR_1,
    &VAR_7);
  FUNC_1(VAR_4, VAR_6 + VAR_0, &VAR_8);
  if (VAR_7 == VAR_3 && VAR_8 == VAR_5)
   return VAR_6;
 }
 return 0;
}
