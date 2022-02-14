
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_driver {int dummy; } ;
struct TYPE_2__ {int driver; } ;
struct rpmsg_device {TYPE_1__ dev; } ;
struct delta_dev {int * rpmsg_device; } ;


 struct delta_dev* FUNC_0 (struct rpmsg_driver*) ;
 struct rpmsg_driver* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rpmsg_device *VAR_0)
{
 struct rpmsg_driver *VAR_1 = FUNC_1(VAR_0->dev.driver);
 struct delta_dev *VAR_2 = FUNC_0(VAR_1);

 VAR_2->rpmsg_device = ((void*)0);
}
