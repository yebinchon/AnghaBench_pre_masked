
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
struct device {int * type; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct device *VAR_1, struct device_driver *VAR_2)
{
 if (VAR_1->type != &VAR_0)
  return 0;


 return 1;
}
