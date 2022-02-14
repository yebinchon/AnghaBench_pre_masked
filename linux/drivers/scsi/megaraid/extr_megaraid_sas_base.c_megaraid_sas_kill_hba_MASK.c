
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct megasas_instance {scalar_t__ adapter_type; TYPE_2__* reg_set; int ld_ids; scalar_t__ peerIsPresent; scalar_t__ requestorId; TYPE_1__* pdev; int adprecovery; } ;
struct TYPE_4__ {int inbound_doorbell; int doorbell; } ;
struct TYPE_3__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct megasas_instance*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct megasas_instance *VAR_6)
{

 FUNC_0(&VAR_6->adprecovery, VAR_0);

 FUNC_3(1000);
 if ((VAR_6->pdev->device == VAR_5) ||
  (VAR_6->pdev->device == VAR_4) ||
  (VAR_6->adapter_type != VAR_2)) {
  if (!VAR_6->requestorId) {
   FUNC_5(VAR_3, &VAR_6->reg_set->doorbell);

   FUNC_4(&VAR_6->reg_set->doorbell);
  }
  if (VAR_6->requestorId && VAR_6->peerIsPresent)
   FUNC_2(VAR_6->ld_ids, 0xff, VAR_1);
 } else {
  FUNC_5(VAR_3,
   &VAR_6->reg_set->inbound_doorbell);
 }

 FUNC_1(VAR_6);
}
