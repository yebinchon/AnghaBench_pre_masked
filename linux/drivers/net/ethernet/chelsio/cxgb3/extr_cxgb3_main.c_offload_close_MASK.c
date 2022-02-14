
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t3cdev {TYPE_2__* lldev; } ;
struct t3c_data {int tid_release_task; } ;
struct adapter {int open_device_map; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct t3c_data* FUNC_0 (struct t3cdev*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct adapter*) ;
 int FUNC_3 (struct t3cdev*) ;
 int FUNC_4 (struct t3cdev*) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct adapter*,int ) ;
 struct adapter* FUNC_9 (struct t3cdev*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct t3cdev *VAR_2)
{
 struct adapter *VAR_3 = FUNC_9(VAR_2);
 struct t3c_data *VAR_4 = FUNC_0(VAR_2);

 if (!FUNC_10(VAR_0, &VAR_3->open_device_map))
  return 0;


 FUNC_3(VAR_2);

 FUNC_7(&VAR_2->lldev->dev.kobj, &VAR_1);


 FUNC_6(&VAR_4->tid_release_task);

 VAR_2->lldev = ((void*)0);
 FUNC_4(VAR_2);
 FUNC_8(VAR_3, 0);
 FUNC_1(VAR_0, &VAR_3->open_device_map);

 if (!VAR_3->open_device_map)
  FUNC_5(VAR_3, 0);

 FUNC_2(VAR_3);
 return 0;
}
