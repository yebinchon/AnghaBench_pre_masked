
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;
struct anybuss_client_driver {int (* probe ) (struct anybuss_client*) ;} ;
struct anybuss_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct anybuss_client*) ;
 struct anybuss_client* FUNC_1 (struct device*) ;
 struct anybuss_client_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct anybuss_client_driver *VAR_2 =
  FUNC_2(VAR_1->driver);
 struct anybuss_client *VAR_3 =
  FUNC_1(VAR_1);

 if (!VAR_2->probe)
  return -VAR_0;
 return VAR_2->probe(VAR_3);
}
