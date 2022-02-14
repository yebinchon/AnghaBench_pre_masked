
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {int cdev; TYPE_2__* ops; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int len; scalar_t__ version; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* dbg_all_data ) (int ,void*) ;} ;


 int FUNC_0 (void*,int ,int ) ;
 struct qede_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
     struct ethtool_regs *VAR_1, void *VAR_2)
{
 struct qede_dev *VAR_3 = FUNC_1(VAR_0);

 VAR_1->version = 0;
 FUNC_0(VAR_2, 0, VAR_1->len);

 if (VAR_3->ops && VAR_3->ops->common)
  VAR_3->ops->common->dbg_all_data(VAR_3->cdev, VAR_2);
}
