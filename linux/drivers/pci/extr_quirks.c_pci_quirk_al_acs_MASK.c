
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_6, u16 VAR_7)
{
 if (FUNC_0(VAR_6) != VAR_5)
  return -VAR_0;
 VAR_7 &= ~(VAR_3 | VAR_2 | VAR_1 | VAR_4);

 return VAR_7 ? 0 : 1;
}
