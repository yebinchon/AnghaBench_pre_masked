
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_parent {TYPE_1__* ops; } ;
struct mdev_device {struct mdev_parent* parent; } ;
struct TYPE_2__ {long (* ioctl ) (struct mdev_device*,unsigned int,unsigned long) ;} ;


 long VAR_0 ;
 long FUNC_0 (struct mdev_device*,unsigned int,unsigned long) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static long FUNC_2(void *VAR_1,
         unsigned int VAR_2, unsigned long VAR_3)
{
 struct mdev_device *VAR_4 = VAR_1;
 struct mdev_parent *VAR_5 = VAR_4->parent;

 if (FUNC_1(!VAR_5->ops->ioctl))
  return -VAR_0;

 return VAR_5->ops->ioctl(VAR_4, VAR_2, VAR_3);
}
