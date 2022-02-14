
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_parent {TYPE_1__* ops; } ;
struct mdev_device {struct mdev_parent* parent; } ;
struct TYPE_2__ {int (* open ) (struct mdev_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mdev_device*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void *VAR_3)
{
 struct mdev_device *VAR_4 = VAR_3;
 struct mdev_parent *VAR_5 = VAR_4->parent;
 int VAR_6;

 if (FUNC_3(!VAR_5->ops->open))
  return -VAR_0;

 if (!FUNC_2(VAR_2))
  return -VAR_1;

 VAR_6 = VAR_5->ops->open(VAR_4);
 if (VAR_6)
  FUNC_0(VAR_2);

 return VAR_6;
}
