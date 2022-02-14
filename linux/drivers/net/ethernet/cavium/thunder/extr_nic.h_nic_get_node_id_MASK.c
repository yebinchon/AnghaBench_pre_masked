
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct pci_dev *VAR_3)
{
 u64 VAR_4 = FUNC_0(VAR_3, VAR_2);
 return ((VAR_4 >> VAR_1) & VAR_0);
}
