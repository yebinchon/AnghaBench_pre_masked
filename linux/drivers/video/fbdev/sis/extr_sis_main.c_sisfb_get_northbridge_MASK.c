
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
 int VAR_0 ;





 struct pci_dev* FUNC_0 (int ,unsigned short const,int *) ;

__attribute__((used)) static struct pci_dev *FUNC_1(int VAR_1)
{
 struct pci_dev *VAR_2 = ((void*)0);
 int VAR_3, VAR_4, VAR_5;
 static const unsigned short VAR_6[] = {
  144,
  142,
  137,
  143,
  141,
  140,
  136,
  138,
  135,
  139,
  134,
  133
 };

 switch(VAR_1) {
 default: return ((void*)0);
 }
 for(VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if((VAR_2 = FUNC_0(VAR_0,
    VAR_6[VAR_4+VAR_5], ((void*)0))))
   break;
 }
 return VAR_2;
}
