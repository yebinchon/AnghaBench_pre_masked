
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int work; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct xenbus_device* FUNC_1 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{




 if (VAR_1 == VAR_0) {
  struct xenbus_device *VAR_3 = FUNC_1(VAR_2);

  FUNC_0(&VAR_3->work);

  return 0;
 }

 return FUNC_2(VAR_2);
}
