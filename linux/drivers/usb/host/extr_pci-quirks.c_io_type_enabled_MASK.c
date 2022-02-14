
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,unsigned int*) ;

__attribute__((used)) static inline int FUNC_1(struct pci_dev *VAR_1, unsigned int VAR_2)
{
 u16 VAR_3;
 return !FUNC_0(VAR_1, VAR_0, &VAR_3) && (VAR_3 & VAR_2);
}
