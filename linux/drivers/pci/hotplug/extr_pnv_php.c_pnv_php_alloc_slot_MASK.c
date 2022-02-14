
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int * ops; } ;
struct pnv_php_slot {int slot_no; int power_state_check; int link; int children; TYPE_1__ slot; int id; struct pci_bus* bus; int pdev; struct device_node* dn; int state; int kref; int name; } ;
struct pci_bus {int self; } ;
struct device_node {scalar_t__ child; } ;
struct TYPE_4__ {int devfn; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct pnv_php_slot*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int ) ;
 struct pnv_php_slot* FUNC_6 (int,int ) ;
 int FUNC_7 (struct device_node*,char*,char const**) ;
 struct pci_bus* FUNC_8 (struct device_node*) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (struct device_node*,int *) ;

__attribute__((used)) static struct pnv_php_slot *FUNC_10(struct device_node *VAR_3)
{
 struct pnv_php_slot *VAR_4;
 struct pci_bus *VAR_5;
 const char *VAR_6;
 uint64_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_7(VAR_3, "ibm,slot-label", &VAR_6);
 if (VAR_8)
  return ((void*)0);

 if (FUNC_9(VAR_3, &VAR_7))
  return ((void*)0);

 VAR_5 = FUNC_8(VAR_3);
 if (!VAR_5)
  return ((void*)0);

 VAR_4 = FUNC_6(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->name = FUNC_5(VAR_6, VAR_0);
 if (!VAR_4->name) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }

 if (VAR_3->child && FUNC_1(VAR_3->child))
  VAR_4->slot_no = FUNC_2(FUNC_1(VAR_3->child)->devfn);
 else
  VAR_4->slot_no = -1;

 FUNC_4(&VAR_4->kref);
 VAR_4->state = VAR_1;
 VAR_4->dn = VAR_3;
 VAR_4->pdev = VAR_5->self;
 VAR_4->bus = VAR_5;
 VAR_4->id = VAR_7;
 VAR_4->power_state_check = 0;
 VAR_4->slot.ops = &VAR_2;

 FUNC_0(&VAR_4->children);
 FUNC_0(&VAR_4->link);

 return VAR_4;
}
