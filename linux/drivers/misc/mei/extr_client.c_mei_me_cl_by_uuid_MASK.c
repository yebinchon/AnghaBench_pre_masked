
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_le ;
struct mei_me_client {int dummy; } ;
struct mei_device {int me_clients_rwsem; } ;


 struct mei_me_client* FUNC_0 (struct mei_device*,int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct mei_me_client *FUNC_3(struct mei_device *VAR_0,
     const uuid_le *VAR_1)
{
 struct mei_me_client *VAR_2;

 FUNC_1(&VAR_0->me_clients_rwsem);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->me_clients_rwsem);

 return VAR_2;
}
