
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int work; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 struct xenbus_device* FUNC_1 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct device*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3)
{
 if (VAR_1 == VAR_0) {
  struct xenbus_device *VAR_4 = FUNC_1(VAR_3);
  FUNC_0(&VAR_4->work, VAR_2);
 }

 return FUNC_2(VAR_3);
}
