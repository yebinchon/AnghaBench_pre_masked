
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct cosm_driver {int (* probe ) (struct cosm_device*) ;} ;
struct TYPE_2__ {int driver; } ;
struct cosm_device {TYPE_1__ dev; } ;


 struct cosm_device* FUNC_0 (struct device*) ;
 struct cosm_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct cosm_device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct cosm_device *VAR_1 = FUNC_0(VAR_0);
 struct cosm_driver *VAR_2 = FUNC_1(VAR_1->dev.driver);

 return VAR_2->probe(VAR_1);
}
