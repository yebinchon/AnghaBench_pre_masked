
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pci_func {int configured; struct pci_func* next; } ;


 int VAR_0 ;
 struct pci_func** VAR_1 ;
 struct pci_func* FUNC_0 (int,int ) ;

struct pci_func *FUNC_1(u8 VAR_2)
{
 struct pci_func *VAR_3;
 struct pci_func *VAR_4;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (VAR_3 == ((void*)0))
  return VAR_3;

 VAR_3->next = ((void*)0);
 VAR_3->configured = 1;

 if (VAR_1[VAR_2] == ((void*)0)) {
  VAR_1[VAR_2] = VAR_3;
 } else {
  VAR_4 = VAR_1[VAR_2];
  while (VAR_4->next != ((void*)0))
   VAR_4 = VAR_4->next;
  VAR_4->next = VAR_3;
 }
 return VAR_3;
}
