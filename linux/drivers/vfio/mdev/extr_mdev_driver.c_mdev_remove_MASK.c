
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_driver {int (* remove ) (struct device*) ;} ;
struct mdev_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct mdev_device*) ;
 int FUNC_1 (struct device*) ;
 struct mdev_device* FUNC_2 (struct device*) ;
 struct mdev_driver* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct mdev_driver *VAR_1 = FUNC_3(VAR_0->driver);
 struct mdev_device *VAR_2 = FUNC_2(VAR_0);

 if (VAR_1 && VAR_1->remove)
  VAR_1->remove(VAR_0);

 FUNC_0(VAR_2);

 return 0;
}
