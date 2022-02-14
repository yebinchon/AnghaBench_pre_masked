
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_type {int dummy; } ;
struct mdev_parent {TYPE_1__* ops; int unreg_sem; } ;
struct mdev_device {int dev; struct mdev_parent* parent; int type_kobj; } ;
struct TYPE_2__ {int (* remove ) (struct mdev_device*) ;} ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mdev_parent*) ;
 int FUNC_4 (int *,struct mdev_type*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mdev_device*) ;
 struct mdev_type* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct mdev_device *VAR_0)
{
 struct mdev_parent *VAR_1;
 struct mdev_type *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_7(VAR_0->type_kobj);
 FUNC_4(&VAR_0->dev, VAR_2);
 FUNC_1(&VAR_0->dev);
 VAR_1 = VAR_0->parent;
 FUNC_2(&VAR_1->unreg_sem);
 VAR_3 = VAR_1->ops->remove(VAR_0);
 if (VAR_3)
  FUNC_0(&VAR_0->dev, "Remove failed: err=%d\n", VAR_3);


 FUNC_5(&VAR_0->dev);
 FUNC_3(VAR_1);
}
