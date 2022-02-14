
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {scalar_t__ name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*,struct device_driver*) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct device_driver *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2))
  return 1;

 if (VAR_2->name)
  return FUNC_2(FUNC_0(VAR_1), VAR_2->name,
          VAR_0) == 0;

 return 0;
}
