
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct sdio_driver {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct sdio_func* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct sdio_func*,struct sdio_driver*) ;
 struct sdio_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct sdio_func *VAR_2 = FUNC_0(VAR_0);
 struct sdio_driver *VAR_3 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_2, VAR_3))
  return 1;

 return 0;
}
