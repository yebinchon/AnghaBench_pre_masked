
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsit_transport {int name; int t_node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int VAR_1 ;

int FUNC_5(struct iscsit_transport *VAR_2)
{
 FUNC_0(&VAR_2->t_node);

 FUNC_2(&VAR_1);
 FUNC_1(&VAR_2->t_node, &VAR_0);
 FUNC_3(&VAR_1);

 FUNC_4("Registered iSCSI transport: %s\n", VAR_2->name);

 return 0;
}
