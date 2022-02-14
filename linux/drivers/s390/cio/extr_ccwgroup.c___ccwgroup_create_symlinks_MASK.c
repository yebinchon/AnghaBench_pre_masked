
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
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct ccwgroup_device *VAR_0)
{
 char VAR_1[16];
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  VAR_3 = FUNC_1(&VAR_0->cdev[VAR_2]->dev.kobj,
           &VAR_0->dev.kobj, "group_device");
  if (VAR_3) {
   for (--VAR_2; VAR_2 >= 0; VAR_2--)
    FUNC_2(&VAR_0->cdev[VAR_2]->dev.kobj,
        "group_device");
   return VAR_3;
  }
 }
 for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
  FUNC_0(VAR_1, "cdev%d", VAR_2);
  VAR_3 = FUNC_1(&VAR_0->dev.kobj,
           &VAR_0->cdev[VAR_2]->dev.kobj, VAR_1);
  if (VAR_3) {
   for (--VAR_2; VAR_2 >= 0; VAR_2--) {
    FUNC_0(VAR_1, "cdev%d", VAR_2);
    FUNC_2(&VAR_0->dev.kobj, VAR_1);
   }
   for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++)
    FUNC_2(&VAR_0->cdev[VAR_2]->dev.kobj,
        "group_device");
   return VAR_3;
  }
 }
 return 0;
}
