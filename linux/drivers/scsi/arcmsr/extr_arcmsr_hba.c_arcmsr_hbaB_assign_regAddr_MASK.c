
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MessageUnit_B {void* message_rwbuffer; void* message_rbuffer; void* message_wbuffer; void* iop2drv_doorbell_mask; void* iop2drv_doorbell; void* drv2iop_doorbell_mask; void* drv2iop_doorbell; } ;
struct AdapterControlBlock {TYPE_1__* pdev; struct MessageUnit_B* pmuB; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_2(struct AdapterControlBlock *VAR_12)
{
 struct MessageUnit_B *VAR_13 = VAR_12->pmuB;

 if (VAR_12->pdev->device == VAR_11) {
  VAR_13->drv2iop_doorbell = FUNC_0(VAR_1);
  VAR_13->drv2iop_doorbell_mask = FUNC_0(VAR_3);
  VAR_13->iop2drv_doorbell = FUNC_0(VAR_5);
  VAR_13->iop2drv_doorbell_mask = FUNC_0(VAR_7);
 } else {
  VAR_13->drv2iop_doorbell= FUNC_0(VAR_0);
  VAR_13->drv2iop_doorbell_mask = FUNC_0(VAR_2);
  VAR_13->iop2drv_doorbell = FUNC_0(VAR_4);
  VAR_13->iop2drv_doorbell_mask = FUNC_0(VAR_6);
 }
 VAR_13->message_wbuffer = FUNC_1(VAR_10);
 VAR_13->message_rbuffer = FUNC_1(VAR_8);
 VAR_13->message_rwbuffer = FUNC_1(VAR_9);
}
