
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlc_83xx_idc {int status; } ;
struct qlcnic_hardware_context {scalar_t__ nic_mode; struct qlc_83xx_idc idc; } ;
struct qlcnic_adapter {int idc_aen_work; int fw_work; struct qlcnic_hardware_context* ahw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int ) ;

void FUNC_5(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_hardware_context *VAR_3 = VAR_2->ahw;
 struct qlc_83xx_idc *VAR_4 = &VAR_3->idc;

 FUNC_1(VAR_1, &VAR_4->status);
 FUNC_0(&VAR_2->fw_work);

 if (VAR_3->nic_mode == VAR_0)
  FUNC_2(VAR_2, 1);

 FUNC_3(VAR_2);
 FUNC_4(VAR_2, 0);

 FUNC_0(&VAR_2->idc_aen_work);
}
