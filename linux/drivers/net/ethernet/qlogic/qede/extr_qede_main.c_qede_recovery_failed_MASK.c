
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qede_dev {scalar_t__ cdev; TYPE_2__* ops; int ndev; } ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* set_power_state ) (scalar_t__,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct qede_dev *VAR_1)
{
 FUNC_0(VAR_1->ndev, "Recovery handling has failed. Power cycle is needed.\n");

 FUNC_1(VAR_1->ndev);

 if (VAR_1->cdev)
  VAR_1->ops->common->set_power_state(VAR_1->cdev, VAR_0);
}
