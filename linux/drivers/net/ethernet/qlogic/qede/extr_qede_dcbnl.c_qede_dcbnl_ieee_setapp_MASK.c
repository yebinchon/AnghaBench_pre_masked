
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct net_device {int dummy; } ;
struct dcb_app {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dcb; } ;
struct TYPE_3__ {int (* ieee_setapp ) (int ,struct dcb_app*) ;} ;


 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct dcb_app*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
      struct dcb_app *VAR_1)
{
 struct qede_dev *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 return VAR_2->ops->dcb->ieee_setapp(VAR_2->cdev, VAR_1);
}
