
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlc_83xx_idc {scalar_t__ vnic_wait_limit; } ;
struct qlcnic_hardware_context {struct qlc_83xx_idc idc; } ;
struct qlcnic_adapter {TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int) ;

int FUNC_3(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;
 struct qlc_83xx_idc *VAR_5 = &VAR_4->idc;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 while (VAR_6 != VAR_1 && VAR_5->vnic_wait_limit) {
  VAR_5->vnic_wait_limit--;
  FUNC_2(1000);
  VAR_6 = FUNC_0(VAR_4, VAR_2);
 }

 if (VAR_6 != VAR_1) {
  FUNC_1(&VAR_3->pdev->dev,
   "vNIC mode not operational, state check timed out.\n");
  return -VAR_0;
 }

 return 0;
}
