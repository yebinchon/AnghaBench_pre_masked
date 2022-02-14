
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {int dev; TYPE_1__* discipline; } ;
struct ccwgroup_device {int dev; } ;
struct TYPE_2__ {int (* remove ) (struct ccwgroup_device*) ;} ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 struct qeth_card* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (struct ccwgroup_device*) ;

__attribute__((used)) static void FUNC_7(struct ccwgroup_device *VAR_0)
{
 struct qeth_card *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_1, 2, "removedv");

 if (VAR_1->discipline) {
  VAR_1->discipline->remove(VAR_0);
  FUNC_5(VAR_1);
 }

 FUNC_2(VAR_1->dev);
 FUNC_4(VAR_1);
 FUNC_3(&VAR_0->dev);
}
