
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_me_client {int dummy; } ;
struct mei_device {int me_clients_rwsem; } ;


 int FUNC_0 (struct mei_device*,struct mei_me_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mei_device *VAR_0, struct mei_me_client *VAR_1)
{
 FUNC_1(&VAR_0->me_clients_rwsem);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->me_clients_rwsem);
}
