
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* next; } ;
struct lkdtm_list {TYPE_1__ node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;

void FUNC_5(void)
{
 FUNC_0(VAR_0);
 struct lkdtm_list VAR_1;
 void *VAR_2[2] = { };
 void *VAR_3 = &VAR_2;

 FUNC_1(&VAR_1.node, &VAR_0);

 FUNC_4("attempting good list removal\n");
 FUNC_2(&VAR_1.node);

 FUNC_4("attempting corrupted list removal\n");
 FUNC_1(&VAR_1.node, &VAR_0);


 VAR_1.node.next = VAR_3;
 FUNC_2(&VAR_1.node);

 if (VAR_2[0] == ((void*)0) && VAR_2[1] == ((void*)0))
  FUNC_3("Overwrite did not happen, but no BUG?!\n");
 else
  FUNC_3("list_del() corruption not detected!\n");
}
