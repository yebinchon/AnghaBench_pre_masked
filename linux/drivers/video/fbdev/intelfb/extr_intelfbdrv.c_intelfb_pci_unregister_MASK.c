
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct intelfb_info {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct intelfb_info*) ;
 struct intelfb_info* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct intelfb_info *VAR_1 = FUNC_2(VAR_0);

 FUNC_0("intelfb_pci_unregister\n");

 if (!VAR_1)
  return;

 FUNC_1(VAR_1);
}
