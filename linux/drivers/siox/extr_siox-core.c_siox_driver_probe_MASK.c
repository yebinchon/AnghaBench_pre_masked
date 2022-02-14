
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siox_driver {int (* probe ) (struct siox_device*) ;} ;
struct siox_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct siox_device*) ;
 struct siox_device* FUNC_1 (struct device*) ;
 struct siox_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct siox_driver *VAR_1 = FUNC_2(VAR_0->driver);
 struct siox_device *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = VAR_1->probe(VAR_2);
 return VAR_3;
}
