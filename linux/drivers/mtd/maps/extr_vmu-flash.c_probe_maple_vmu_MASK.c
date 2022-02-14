
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_driver {int dummy; } ;
struct maple_device {struct maple_driver* driver; int fileerr_handler; int can_unload; } ;
struct device {int driver; } ;


 struct maple_device* FUNC_0 (struct device*) ;
 struct maple_driver* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct maple_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 int VAR_3;
 struct maple_device *VAR_4 = FUNC_0(VAR_2);
 struct maple_driver *VAR_5 = FUNC_1(VAR_2->driver);

 VAR_4->can_unload = VAR_0;
 VAR_4->fileerr_handler = VAR_1;
 VAR_4->driver = VAR_5;

 VAR_3 = FUNC_2(VAR_4);
 if (VAR_3)
  return VAR_3;

 return 0;
}
