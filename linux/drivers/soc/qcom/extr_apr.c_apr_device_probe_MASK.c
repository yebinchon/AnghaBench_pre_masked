
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;
struct apr_driver {int (* probe ) (struct apr_device*) ;} ;
struct apr_device {int dummy; } ;


 int FUNC_0 (struct apr_device*) ;
 struct apr_device* FUNC_1 (struct device*) ;
 struct apr_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct apr_device *VAR_1 = FUNC_1(VAR_0);
 struct apr_driver *VAR_2 = FUNC_2(VAR_0->driver);

 return VAR_2->probe(VAR_1);
}
