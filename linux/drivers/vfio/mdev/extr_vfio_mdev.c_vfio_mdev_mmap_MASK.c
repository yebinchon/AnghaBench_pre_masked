
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct mdev_parent {TYPE_1__* ops; } ;
struct mdev_device {struct mdev_parent* parent; } ;
struct TYPE_2__ {int (* mmap ) (struct mdev_device*,struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mdev_device*,struct vm_area_struct*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, struct vm_area_struct *VAR_2)
{
 struct mdev_device *VAR_3 = VAR_1;
 struct mdev_parent *VAR_4 = VAR_3->parent;

 if (FUNC_1(!VAR_4->ops->mmap))
  return -VAR_0;

 return VAR_4->ops->mmap(VAR_3, VAR_2);
}
