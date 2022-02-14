
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbus_driver {int (* probe ) (struct mbus_device*) ;int (* scan ) (struct mbus_device*) ;} ;
struct TYPE_2__ {int driver; } ;
struct mbus_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 struct mbus_device* FUNC_0 (struct device*) ;
 struct mbus_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct mbus_device*) ;
 int FUNC_3 (struct mbus_device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 int VAR_1;
 struct mbus_device *VAR_2 = FUNC_0(VAR_0);
 struct mbus_driver *VAR_3 = FUNC_1(VAR_2->dev.driver);

 VAR_1 = VAR_3->probe(VAR_2);
 if (!VAR_1)
  if (VAR_3->scan)
   VAR_3->scan(VAR_2);
 return VAR_1;
}
