
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device_driver {int (* probe ) (int ) ;} ;
struct device {int driver; } ;


 int FUNC_0 (struct device*,int) ;
 int FUNC_1 (struct device*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 struct serdev_device_driver* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0)
{
 const struct serdev_device_driver *VAR_1 = FUNC_4(VAR_0->driver);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, 1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = VAR_1->probe(FUNC_3(VAR_0));
 if (VAR_2)
  FUNC_1(VAR_0, 1);

 return VAR_2;
}
