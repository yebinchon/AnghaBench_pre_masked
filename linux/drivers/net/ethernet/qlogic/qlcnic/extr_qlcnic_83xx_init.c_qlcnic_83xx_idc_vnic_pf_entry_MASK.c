
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ vnic_state; scalar_t__ prev_state; int vnic_wait_limit; } ;
struct qlcnic_hardware_context {TYPE_1__ idc; } ;
struct qlcnic_adapter {TYPE_2__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;

int FUNC_5(struct qlcnic_adapter *VAR_4)
{
 u32 VAR_5;
 struct qlcnic_hardware_context *VAR_6 = VAR_4->ahw;


 VAR_5 = FUNC_0(VAR_4->ahw, VAR_3);
 if (VAR_5 != VAR_1) {
  if (!VAR_6->idc.vnic_wait_limit--) {
   FUNC_2(VAR_4, 1);
   return -VAR_0;
  }
  FUNC_1(&VAR_4->pdev->dev, "vNIC mode disabled\n");
  return -VAR_0;

 } else {

  if (VAR_6->idc.vnic_state != VAR_1) {
   FUNC_4(VAR_4);



   if (VAR_6->idc.prev_state != VAR_2) {
    if (FUNC_3(VAR_4))
     return -VAR_0;
   }
   VAR_4->ahw->idc.vnic_state = VAR_1;
   FUNC_1(&VAR_4->pdev->dev, "vNIC mode enabled\n");
  }
 }

 return 0;
}
