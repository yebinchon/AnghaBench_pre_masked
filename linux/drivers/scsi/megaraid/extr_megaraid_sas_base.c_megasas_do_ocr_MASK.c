
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {int work_init; int fw_outstanding; scalar_t__ issuepend_done; int adprecovery; TYPE_1__* instancet; int * consumer; TYPE_2__* pdev; } ;
struct TYPE_4__ {scalar_t__ device; } ;
struct TYPE_3__ {int (* disable_intr ) (struct megasas_instance*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct megasas_instance*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct megasas_instance*) ;

__attribute__((used)) static void FUNC_5(struct megasas_instance *VAR_5)
{
 if ((VAR_5->pdev->device == VAR_3) ||
 (VAR_5->pdev->device == VAR_2) ||
 (VAR_5->pdev->device == VAR_4)) {
  *VAR_5->consumer = FUNC_1(VAR_0);
 }
 VAR_5->instancet->disable_intr(VAR_5);
 FUNC_0(&VAR_5->adprecovery, VAR_1);
 VAR_5->issuepend_done = 0;

 FUNC_0(&VAR_5->fw_outstanding, 0);
 FUNC_2(VAR_5);
 FUNC_3(&VAR_5->work_init);
}
