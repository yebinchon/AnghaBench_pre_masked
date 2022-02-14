
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_resource {int length; int base; struct pci_resource* next; } ;


 int FUNC_0 (struct pci_resource**) ;
 int FUNC_1 (struct pci_resource*) ;

__attribute__((used)) static struct pci_resource *FUNC_2(struct pci_resource **VAR_0, u32 VAR_1)
{
 struct pci_resource *VAR_2 = ((void*)0);
 struct pci_resource *VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_0);

 if (VAR_4)
  return ((void*)0);

 VAR_3 = *VAR_0;

 while (VAR_3->next) {
  VAR_2 = VAR_3;
  VAR_3 = VAR_3->next;
  FUNC_1(VAR_2);
 }

 if (VAR_3->length < VAR_1)
  goto error;

 if (VAR_3->base & (VAR_1 - 1)) {

  VAR_5 = (VAR_3->base | (VAR_1-1)) + 1;
  if ((VAR_3->length - (VAR_5 - VAR_3->base)) < VAR_1)
   goto error;

  VAR_3->length -= (VAR_5 - VAR_3->base);
  VAR_3->base = VAR_5;
 }

 if (VAR_3->length & (VAR_1 - 1))

  goto error;

 return VAR_3;
error:
 FUNC_1(VAR_3);
 return ((void*)0);
}
