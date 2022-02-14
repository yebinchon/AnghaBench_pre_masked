
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_listener {struct uio_device* dev; } ;
struct uio_device {int dev; int owner; int info_lock; TYPE_1__* info; } ;
struct inode {int dummy; } ;
struct file {struct uio_listener* private_data; } ;
struct TYPE_2__ {int (* release ) (TYPE_1__*,struct inode*) ;} ;


 int FUNC_0 (struct uio_listener*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,struct inode*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 int VAR_2 = 0;
 struct uio_listener *VAR_3 = VAR_1->private_data;
 struct uio_device *VAR_4 = VAR_3->dev;

 FUNC_2(&VAR_4->info_lock);
 if (VAR_4->info && VAR_4->info->release)
  VAR_2 = VAR_4->info->release(VAR_4->info, VAR_0);
 FUNC_3(&VAR_4->info_lock);

 FUNC_1(VAR_4->owner);
 FUNC_0(VAR_3);
 FUNC_4(&VAR_4->dev);
 return VAR_2;
}
