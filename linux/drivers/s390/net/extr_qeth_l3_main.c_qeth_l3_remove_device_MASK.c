
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_card {int cmd_wq; int dev; int close_dev_work; int wait_q; } ;
struct TYPE_3__ {int * type; } ;
struct ccwgroup_device {scalar_t__ state; TYPE_1__ dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct qeth_card* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct qeth_card*,int ) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct ccwgroup_device*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct qeth_card*,int ,int) ;
 scalar_t__ FUNC_10 (struct qeth_card*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static void FUNC_13(struct ccwgroup_device *VAR_2)
{
 struct qeth_card *VAR_3 = FUNC_2(&VAR_2->dev);

 if (VAR_2->dev.type == &VAR_1)
  FUNC_6(&VAR_2->dev);

 FUNC_9(VAR_3, 0, 1);
 FUNC_12(VAR_3->wait_q, FUNC_10(VAR_3, 0xffffffff) == 0);

 if (VAR_2->state == VAR_0)
  FUNC_7(VAR_2);

 FUNC_0(&VAR_3->close_dev_work);
 if (FUNC_8(VAR_3->dev))
  FUNC_11(VAR_3->dev);

 FUNC_3(VAR_3->cmd_wq);
 FUNC_1(VAR_3->cmd_wq);
 FUNC_4(VAR_3, 0);
 FUNC_5(VAR_3);
}
