
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct pnv_php_slot {scalar_t__ attention_state; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct hotplug_slot {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int ,int ) ;
 struct pnv_php_slot* FUNC_1 (struct hotplug_slot*) ;

__attribute__((used)) static int FUNC_2(struct hotplug_slot *VAR_4, u8 VAR_5)
{
 struct pnv_php_slot *VAR_6 = FUNC_1(VAR_4);
 struct pci_dev *VAR_7 = VAR_6->pdev;
 u16 VAR_8, VAR_9;

 VAR_6->attention_state = VAR_5;
 if (!VAR_7)
  return 0;

 VAR_9 = VAR_1;

 if (VAR_5)
  VAR_8 = VAR_3;
 else
  VAR_8 = VAR_2;

 FUNC_0(VAR_7, VAR_0, VAR_9, VAR_8);

 return 0;
}
