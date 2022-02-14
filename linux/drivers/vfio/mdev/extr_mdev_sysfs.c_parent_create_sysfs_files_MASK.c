
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdev_parent {int mdev_types_kset; TYPE_1__* ops; TYPE_2__* dev; int type_list; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {int dev_attr_groups; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mdev_parent*) ;
 int FUNC_2 (char*,int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

int FUNC_6(struct mdev_parent *VAR_1)
{
 int VAR_2;

 VAR_1->mdev_types_kset = FUNC_2("mdev_supported_types",
            ((void*)0), &VAR_1->dev->kobj);

 if (!VAR_1->mdev_types_kset)
  return -VAR_0;

 FUNC_0(&VAR_1->type_list);

 VAR_2 = FUNC_4(&VAR_1->dev->kobj,
      VAR_1->ops->dev_attr_groups);
 if (VAR_2)
  goto create_err;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  FUNC_5(&VAR_1->dev->kobj,
        VAR_1->ops->dev_attr_groups);
 else
  return VAR_2;

create_err:
 FUNC_3(VAR_1->mdev_types_kset);
 return VAR_2;
}
