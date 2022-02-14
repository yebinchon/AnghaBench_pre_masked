
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lkdtm_list {int node; } ;
struct TYPE_4__ {void* next; } ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_0 ;

void FUNC_4(void)
{





 FUNC_0(VAR_0);
 struct lkdtm_list VAR_1, VAR_2;
 void *VAR_3[2] = { };
 void *VAR_4 = &VAR_3;

 FUNC_3("attempting good list addition\n");
 FUNC_1(&VAR_1.node, &VAR_0);

 FUNC_3("attempting corrupted list addition\n");





 VAR_0.next = VAR_4;
 FUNC_1(&VAR_2.node, &VAR_0);

 if (VAR_3[0] == ((void*)0) && VAR_3[1] == ((void*)0))
  FUNC_2("Overwrite did not happen, but no BUG?!\n");
 else
  FUNC_2("list_add() corruption not detected!\n");
}
