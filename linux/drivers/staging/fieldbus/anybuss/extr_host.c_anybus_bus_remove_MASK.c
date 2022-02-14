
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;
struct anybuss_client_driver {int (* remove ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct anybuss_client_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct anybuss_client_driver *VAR_1 =
  FUNC_2(VAR_0->driver);

 if (VAR_1->remove)
  return VAR_1->remove(FUNC_1(VAR_0));
 return 0;
}
