
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int phy_flags; int pci_fn; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tg3*) ;

__attribute__((used)) static bool FUNC_1(struct tg3 *VAR_2)
{
 switch (FUNC_0(VAR_2)) {
 case 133:
 case 132:
  return 1;
 case 128:
  if (VAR_2->phy_flags & VAR_0)
   return 1;
  return 0;
 case 131:
  if (!VAR_2->pci_fn)
   return 1;
  return 0;
 case 130:
 case 129:
  if ((VAR_2->phy_flags & VAR_1) &&
      !VAR_2->pci_fn)
   return 1;
  return 0;
 }

 return 0;
}
