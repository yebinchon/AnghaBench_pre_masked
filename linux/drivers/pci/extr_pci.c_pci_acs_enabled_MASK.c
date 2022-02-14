
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int multifunction; } ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;

bool FUNC_4(struct pci_dev *VAR_0, u16 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 >= 0)
  return VAR_2 > 0;






 if (!FUNC_2(VAR_0))
  return 0;

 switch (FUNC_3(VAR_0)) {





 case 133:






 case 132:
 case 131:
  return 0;





 case 136:
 case 129:
  return FUNC_0(VAR_0, VAR_1);







 case 135:
 case 128:
 case 134:
 case 130:
  if (!VAR_0->multifunction)
   break;

  return FUNC_0(VAR_0, VAR_1);
 }





 return 1;
}
