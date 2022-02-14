
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdev_type {int kobj; int * devices_kobj; TYPE_1__* group; } ;
struct attribute {int dummy; } ;
struct TYPE_4__ {int attr; } ;
struct TYPE_3__ {scalar_t__ attrs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,struct attribute const**) ;

__attribute__((used)) static void FUNC_4(struct mdev_type *VAR_1)
{
 FUNC_3(&VAR_1->kobj,
      (const struct attribute **)VAR_1->group->attrs);
 FUNC_1(VAR_1->devices_kobj);
 FUNC_2(&VAR_1->kobj, &VAR_0.attr);
 FUNC_0(&VAR_1->kobj);
 FUNC_1(&VAR_1->kobj);
}
