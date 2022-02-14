
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct css_driver {int (* settle ) () ;} ;


 int FUNC_0 () ;
 struct css_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2(struct device_driver *VAR_0, void *VAR_1)
{
 struct css_driver *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->settle)
  return VAR_2->settle();
 return 0;
}
