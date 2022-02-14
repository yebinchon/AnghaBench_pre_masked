
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tee_client_device_id {int uuid; } ;
struct TYPE_3__ {int uuid; } ;
struct tee_client_device {TYPE_1__ id; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct tee_client_device_id* id_table; } ;


 struct tee_client_device* FUNC_0 (struct device*) ;
 TYPE_2__* FUNC_1 (struct device_driver*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0,
       struct device_driver *VAR_1)
{
 const struct tee_client_device_id *VAR_2;
 struct tee_client_device *VAR_3;

 VAR_2 = FUNC_1(VAR_1)->id_table;
 VAR_3 = FUNC_0(VAR_0);

 while (!FUNC_3(&VAR_2->uuid)) {
  if (FUNC_2(&VAR_3->id.uuid, &VAR_2->uuid))
   return 1;
  VAR_2++;
 }

 return 0;
}
