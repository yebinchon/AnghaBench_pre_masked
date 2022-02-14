
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_me_client {int list; } ;
struct mei_device {int me_clients_rwsem; int me_clients; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mei_device *VAR_0, struct mei_me_client *VAR_1)
{
 FUNC_0(&VAR_0->me_clients_rwsem);
 FUNC_1(&VAR_1->list, &VAR_0->me_clients);
 FUNC_2(&VAR_0->me_clients_rwsem);
}
