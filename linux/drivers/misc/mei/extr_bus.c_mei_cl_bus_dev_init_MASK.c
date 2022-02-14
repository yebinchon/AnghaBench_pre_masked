
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_me_client {int bus_added; } ;
struct mei_device {int device_list; int dev; int cl_bus_lock; } ;
struct mei_cl_device {int bus_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int *) ;
 struct mei_cl_device* FUNC_3 (struct mei_device*,struct mei_me_client*) ;
 int FUNC_4 (struct mei_me_client*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mei_device *VAR_0,
    struct mei_me_client *VAR_1)
{
 struct mei_cl_device *VAR_2;

 FUNC_0(!FUNC_5(&VAR_0->cl_bus_lock));

 FUNC_1(VAR_0->dev, "initializing %pUl", FUNC_4(VAR_1));

 if (VAR_1->bus_added)
  return;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (!VAR_2)
  return;

 VAR_1->bus_added = 1;
 FUNC_2(&VAR_2->bus_list, &VAR_0->device_list);

}
