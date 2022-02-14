
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct ccwgroup_device {int count; TYPE_3__** cdev; TYPE_1__ dev; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct ccwgroup_device *VAR_0)
{
 int VAR_1;
 char VAR_2[16];

 for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++) {
  FUNC_0(VAR_2, "cdev%d", VAR_1);
  FUNC_1(&VAR_0->dev.kobj, VAR_2);
  FUNC_1(&VAR_0->cdev[VAR_1]->dev.kobj, "group_device");
 }
}
