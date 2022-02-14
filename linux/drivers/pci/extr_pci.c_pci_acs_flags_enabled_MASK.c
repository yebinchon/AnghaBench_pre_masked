
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_4, u16 VAR_5)
{
 int VAR_6;
 u16 VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_4, VAR_3);
 if (!VAR_6)
  return 0;






 FUNC_1(VAR_4, VAR_6 + VAR_0, &VAR_7);
 VAR_5 &= (VAR_7 | VAR_2);

 FUNC_1(VAR_4, VAR_6 + VAR_1, &VAR_8);
 return (VAR_8 & VAR_5) == VAR_5;
}
