
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_driver {int (* probe ) (struct vop_device*) ;} ;
struct TYPE_2__ {int driver; } ;
struct vop_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 struct vop_device* FUNC_0 (struct device*) ;
 struct vop_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct vop_device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct vop_device *VAR_1 = FUNC_0(VAR_0);
 struct vop_driver *VAR_2 = FUNC_1(VAR_1->dev.driver);

 return VAR_2->probe(VAR_1);
}
