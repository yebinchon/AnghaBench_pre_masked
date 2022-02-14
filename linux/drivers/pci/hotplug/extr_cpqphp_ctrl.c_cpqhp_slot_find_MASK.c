
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct pci_func {size_t device; struct pci_func* next; } ;


 struct pci_func** VAR_0 ;

struct pci_func *FUNC_0(u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = -1;
 struct pci_func *VAR_5;

 VAR_5 = VAR_0[VAR_1];

 if ((VAR_5 == ((void*)0)) || ((VAR_5->device == VAR_2) && (VAR_3 == 0)))
  return VAR_5;

 if (VAR_5->device == VAR_2)
  VAR_4++;

 while (VAR_5->next != ((void*)0)) {
  VAR_5 = VAR_5->next;

  if (VAR_5->device == VAR_2)
   VAR_4++;

  if (VAR_4 == VAR_3)
   return VAR_5;
 }

 return ((void*)0);
}
