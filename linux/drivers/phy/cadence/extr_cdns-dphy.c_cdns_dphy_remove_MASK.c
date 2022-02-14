
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct cdns_dphy {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* remove ) (struct cdns_dphy*) ;} ;


 struct cdns_dphy* FUNC_0 (int *) ;
 int FUNC_1 (struct cdns_dphy*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct cdns_dphy *VAR_1 = FUNC_0(&VAR_0->dev);

 if (VAR_1->ops->remove)
  VAR_1->ops->remove(VAR_1);

 return 0;
}
