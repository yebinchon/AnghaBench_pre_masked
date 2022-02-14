
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* update_drv_state ) (int ,int) ;int (* set_power_state ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct qede_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qede_dev*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct qede_dev *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_1(VAR_2);

 VAR_3->ops->common->set_power_state(VAR_3->cdev, VAR_0);

 VAR_4 = FUNC_2(VAR_3, VAR_1, 0);
 if (VAR_4)
  return VAR_4;

 FUNC_5(VAR_2);

 VAR_3->ops->common->update_drv_state(VAR_3->cdev, 1);

 return 0;
}
