
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int is_hotplug_bridge; int is_thunderbolt; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

bool FUNC_6(struct pci_dev *VAR_3)
{
 if (!FUNC_2(VAR_3))
  return 0;

 switch (FUNC_3(VAR_3)) {
 case 129:
 case 128:
 case 130:
  if (VAR_1)
   return 0;





  if (VAR_3->is_hotplug_bridge && !FUNC_4(VAR_3))
   return 0;

  if (VAR_2)
   return 1;


  if (VAR_3->is_thunderbolt)
   return 1;


  if (FUNC_5(VAR_3))
   return 1;






  if (VAR_3->is_hotplug_bridge)
   return 0;

  if (FUNC_0(VAR_0))
   return 0;





  if (FUNC_1() >= 2015)
   return 1;
  break;
 }

 return 0;
}
