
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_php_slot {int state; int link; int children; struct pnv_php_slot* parent; int pdev; int name; int slot_no; int bus; int slot; struct device_node* dn; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 struct pnv_php_slot* FUNC_6 (struct device_node*) ;
 int VAR_2 ;
 int FUNC_7 (struct pnv_php_slot*) ;
 int VAR_3 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct pnv_php_slot *VAR_4)
{
 struct pnv_php_slot *VAR_5;
 struct device_node *VAR_6 = VAR_4->dn;
 unsigned long VAR_7;
 int VAR_8;


 VAR_5 = FUNC_6(VAR_4->dn);
 if (VAR_5) {
  FUNC_7(VAR_5);
  return -VAR_0;
 }


 VAR_8 = FUNC_4(&VAR_4->slot, VAR_4->bus,
         VAR_4->slot_no, VAR_4->name);
 if (VAR_8) {
  FUNC_5(VAR_4->pdev, "Error %d registering slot\n", VAR_8);
  return VAR_8;
 }


 while ((VAR_6 = FUNC_2(VAR_6))) {
  if (!FUNC_0(VAR_6)) {
   FUNC_3(VAR_6);
   break;
  }

  VAR_5 = FUNC_6(VAR_6);
  if (VAR_5) {
   FUNC_3(VAR_6);
   break;
  }

  FUNC_3(VAR_6);
 }

 FUNC_8(&VAR_2, VAR_7);
 VAR_4->parent = VAR_5;
 if (VAR_5)
  FUNC_1(&VAR_4->link, &VAR_5->children);
 else
  FUNC_1(&VAR_4->link, &VAR_3);
 FUNC_9(&VAR_2, VAR_7);

 VAR_4->state = VAR_1;
 return 0;
}
