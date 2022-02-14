
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* discipline; int wait_q; } ;
struct ccwgroup_device {scalar_t__ state; int dev; } ;
struct TYPE_2__ {int (* set_offline ) (struct ccwgroup_device*) ;} ;


 scalar_t__ VAR_0 ;
 struct qeth_card* FUNC_0 (int *) ;
 int FUNC_1 (struct qeth_card*,int ,int) ;
 scalar_t__ FUNC_2 (struct qeth_card*,int) ;
 int FUNC_3 (struct ccwgroup_device*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct ccwgroup_device *VAR_1)
{
 struct qeth_card *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_1(VAR_2, 0, 1);
 FUNC_4(VAR_2->wait_q, FUNC_2(VAR_2, 0xffffffff) == 0);
 if (VAR_1->state == VAR_0)
  return 0;

 VAR_2->discipline->set_offline(VAR_1);
 return 0;
}
