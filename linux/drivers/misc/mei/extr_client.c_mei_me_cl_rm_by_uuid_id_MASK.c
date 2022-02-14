
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_le ;
typedef int u8 ;
struct mei_me_client {int dummy; } ;
struct mei_device {int me_clients_rwsem; int dev; } ;


 struct mei_me_client* FUNC_0 (struct mei_device*,int const*,int ) ;
 int FUNC_1 (struct mei_device*,struct mei_me_client*) ;
 int FUNC_2 (int ,char*,int const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mei_device *VAR_0, const uuid_le *VAR_1, u8 VAR_2)
{
 struct mei_me_client *VAR_3;

 FUNC_2(VAR_0->dev, "remove %pUl %d\n", VAR_1, VAR_2);

 FUNC_3(&VAR_0->me_clients_rwsem);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_3);
 FUNC_4(&VAR_0->me_clients_rwsem);
}
