
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_saved_state {struct pci_cap_saved_data* cap; int config_space; } ;
struct pci_dev {int state_saved; int saved_config_space; } ;
struct TYPE_2__ {int size; int data; } ;
struct pci_cap_saved_state {TYPE_1__ cap; } ;
struct pci_cap_saved_data {int size; int data; int cap_extended; int cap_nr; } ;


 int VAR_0 ;
 struct pci_cap_saved_state* FUNC_0 (struct pci_dev*,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct pci_dev *VAR_1,
    struct pci_saved_state *VAR_2)
{
 struct pci_cap_saved_data *VAR_3;

 VAR_1->state_saved = 0;

 if (!VAR_2)
  return 0;

 FUNC_1(VAR_1->saved_config_space, VAR_2->config_space,
        sizeof(VAR_2->config_space));

 VAR_3 = VAR_2->cap;
 while (VAR_3->size) {
  struct pci_cap_saved_state *VAR_4;

  VAR_4 = FUNC_0(VAR_1, VAR_3->cap_nr, VAR_3->cap_extended);
  if (!VAR_4 || VAR_4->cap.size != VAR_3->size)
   return -VAR_0;

  FUNC_1(VAR_4->cap.data, VAR_3->data, VAR_4->cap.size);
  VAR_3 = (struct pci_cap_saved_data *)((u8 *)VAR_3 +
         sizeof(struct pci_cap_saved_data) + VAR_3->size);
 }

 VAR_1->state_saved = 1;
 return 0;
}
