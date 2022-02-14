
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_php_slot {int slot; int state; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pnv_php_slot* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct pnv_php_slot*) ;
 int FUNC_3 (struct pnv_php_slot*) ;

__attribute__((used)) static void FUNC_4(struct device_node *VAR_1)
{
 struct pnv_php_slot *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return;

 VAR_2->state = VAR_0;
 FUNC_0(&VAR_2->slot);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
}
