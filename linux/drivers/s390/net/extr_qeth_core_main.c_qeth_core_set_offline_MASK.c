
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* discipline; } ;
struct ccwgroup_device {int dev; } ;
struct TYPE_2__ {int (* set_offline ) (struct ccwgroup_device*) ;} ;


 struct qeth_card* FUNC_0 (int *) ;
 int FUNC_1 (struct ccwgroup_device*) ;

__attribute__((used)) static int FUNC_2(struct ccwgroup_device *VAR_0)
{
 struct qeth_card *VAR_1 = FUNC_0(&VAR_0->dev);
 return VAR_1->discipline->set_offline(VAR_0);
}
