
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qede_dev {scalar_t__ state; int ndev; int * cdev; int dp_level; int dp_module; int pdev; TYPE_2__* ops; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* recovery_prolog ) (int *) ;} ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qede_dev*,int ,int) ;
 int FUNC_6 (struct qede_dev*) ;
 int FUNC_7 (struct qede_dev*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct qede_dev *VAR_6)
{
 u32 VAR_7 = VAR_6->state;
 int VAR_8;

 FUNC_0(VAR_6, "Starting a recovery process\n");




 VAR_6->state = VAR_4;

 VAR_6->ops->common->recovery_prolog(VAR_6->cdev);

 if (VAR_7 == VAR_3)
  FUNC_7(VAR_6, VAR_5, 1);

 FUNC_3(VAR_6->pdev, VAR_2);

 VAR_8 = FUNC_2(VAR_6->pdev, VAR_6->dp_module, VAR_6->dp_level,
     FUNC_1(VAR_6), VAR_1);
 if (VAR_8) {
  VAR_6->cdev = ((void*)0);
  goto err;
 }

 if (VAR_7 == VAR_3) {
  VAR_8 = FUNC_5(VAR_6, VAR_0, 1);
  if (VAR_8)
   goto err;

  FUNC_4(VAR_6->ndev);
  FUNC_9(VAR_6->ndev);
 }

 VAR_6->state = VAR_7;

 FUNC_0(VAR_6, "Recovery handling is done\n");

 return;

err:
 FUNC_6(VAR_6);
}
