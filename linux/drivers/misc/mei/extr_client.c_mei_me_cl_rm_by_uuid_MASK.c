
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_le ;
struct mei_me_client {int dummy; } ;
struct mei_device {int me_clients_rwsem; int dev; } ;


 struct mei_me_client* FUNC_0 (struct mei_device*,int const*) ;
 int FUNC_1 (struct mei_device*,struct mei_me_client*) ;
 int FUNC_2 (int ,char*,int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mei_device *VAR_0, const uuid_le *VAR_1)
{
 struct mei_me_client *VAR_2;

 FUNC_2(VAR_0->dev, "remove %pUl\n", VAR_1);

 FUNC_3(&VAR_0->me_clients_rwsem);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_2);
 FUNC_4(&VAR_0->me_clients_rwsem);
}
