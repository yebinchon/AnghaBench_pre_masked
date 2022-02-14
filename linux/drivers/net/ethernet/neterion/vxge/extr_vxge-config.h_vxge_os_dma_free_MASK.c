
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (void*) ;

__attribute__((used)) static inline void FUNC_1(struct pci_dev *VAR_0, const void *VAR_1,
   struct pci_dev **VAR_2)
{
 unsigned long VAR_3 = *(unsigned long *)VAR_2;
 u8 *VAR_4 = (u8 *)VAR_1;
 VAR_4 -= VAR_3;
 FUNC_0((void *)VAR_4);
}
