
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {struct pci_bus* bus; } ;
struct pci_bus {struct pci_bus* parent; struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (struct pci_dev*) ;
 int const FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;

int FUNC_4(struct pci_dev *VAR_6, u32 VAR_7)
{
 struct pci_bus *VAR_8 = VAR_6->bus;
 struct pci_dev *VAR_9;
 u32 VAR_10, VAR_11;

 if (!FUNC_0(VAR_6))
  return -VAR_0;
 switch (FUNC_1(VAR_6)) {
 case 132:
 case 131:
 case 130:
  break;
 default:
  return -VAR_0;
 }

 while (VAR_8->parent) {
  VAR_9 = VAR_8->self;

  FUNC_2(VAR_9, VAR_1, &VAR_10);

  switch (FUNC_1(VAR_9)) {

  case 128:
  case 133:
   if (!(VAR_10 & VAR_2))
    return -VAR_0;
   break;


  case 129:
   if ((VAR_10 & VAR_7) != VAR_7)
    return -VAR_0;
   break;
  }


  if (FUNC_1(VAR_9) == 128) {
   FUNC_2(VAR_9, VAR_3,
         &VAR_11);
   if (VAR_11 & VAR_4)
    return -VAR_0;
  }

  VAR_8 = VAR_8->parent;
 }

 FUNC_3(VAR_6, VAR_3,
     VAR_5);
 return 0;
}
