
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsit_transport {int name; int t_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;

void FUNC_4(struct iscsit_transport *VAR_1)
{
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_1->t_node);
 FUNC_2(&VAR_0);

 FUNC_3("Unregistered iSCSI transport: %s\n", VAR_1->name);
}
