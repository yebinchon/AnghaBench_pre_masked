
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_parent {TYPE_1__* ops; } ;
struct mdev_device {struct mdev_parent* parent; } ;
struct TYPE_2__ {int (* release ) (struct mdev_device*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int (*) (struct mdev_device*)) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mdev_device*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct mdev_device *VAR_2 = VAR_1;
 struct mdev_parent *VAR_3 = VAR_2->parent;

 if (FUNC_0(VAR_3->ops->release))
  VAR_3->ops->release(VAR_2);

 FUNC_1(VAR_0);
}
