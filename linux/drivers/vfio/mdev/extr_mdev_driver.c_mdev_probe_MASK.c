
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_driver {int (* probe ) (struct device*) ;} ;
struct mdev_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct mdev_device*) ;
 int FUNC_1 (struct mdev_device*) ;
 int FUNC_2 (struct device*) ;
 struct mdev_device* FUNC_3 (struct device*) ;
 struct mdev_driver* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 struct mdev_driver *VAR_1 = FUNC_4(VAR_0->driver);
 struct mdev_device *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 if (VAR_1 && VAR_1->probe) {
  VAR_3 = VAR_1->probe(VAR_0);
  if (VAR_3)
   FUNC_1(VAR_2);
 }

 return VAR_3;
}
