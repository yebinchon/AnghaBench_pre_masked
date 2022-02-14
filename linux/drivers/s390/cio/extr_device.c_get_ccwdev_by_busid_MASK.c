
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ccw_driver {int driver; } ;
struct ccw_device {int dummy; } ;


 struct device* FUNC_0 (int *,char const*) ;
 struct ccw_device* FUNC_1 (struct device*) ;

struct ccw_device *FUNC_2(struct ccw_driver *VAR_0,
           const char *VAR_1)
{
 struct device *VAR_2;

 VAR_2 = FUNC_0(&VAR_0->driver, VAR_1);

 return VAR_2 ? FUNC_1(VAR_2) : ((void*)0);
}
