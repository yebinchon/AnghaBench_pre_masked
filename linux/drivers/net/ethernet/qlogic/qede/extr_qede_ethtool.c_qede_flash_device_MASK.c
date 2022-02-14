
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct net_device {int dummy; } ;
struct ethtool_flash {int data; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* nvm_flash ) (int ,int ) ;} ;


 struct qede_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
        struct ethtool_flash *VAR_1)
{
 struct qede_dev *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->ops->common->nvm_flash(VAR_2->cdev, VAR_1->data);
}
