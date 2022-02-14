
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* update_drv_state ) (int ,int) ;} ;


 int VAR_0 ;
 struct qede_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct qede_dev*,int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1)
{
 struct qede_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2, VAR_0, 0);

 VAR_2->ops->common->update_drv_state(VAR_2->cdev, 0);

 return 0;
}
