
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_card {int dev; int close_dev_work; int wait_q; } ;
struct TYPE_3__ {int * type; } ;
struct ccwgroup_device {scalar_t__ state; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct qeth_card* FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ccwgroup_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct qeth_card*,int ,int) ;
 scalar_t__ FUNC_6 (struct qeth_card*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(struct ccwgroup_device *VAR_2)
{
 struct qeth_card *VAR_3 = FUNC_1(&VAR_2->dev);

 if (VAR_2->dev.type == &VAR_1)
  FUNC_2(&VAR_2->dev);
 FUNC_5(VAR_3, 0, 1);
 FUNC_8(VAR_3->wait_q, FUNC_6(VAR_3, 0xffffffff) == 0);

 if (VAR_2->state == VAR_0)
  FUNC_3(VAR_2);

 FUNC_0(&VAR_3->close_dev_work);
 if (FUNC_4(VAR_3->dev))
  FUNC_7(VAR_3->dev);
}
