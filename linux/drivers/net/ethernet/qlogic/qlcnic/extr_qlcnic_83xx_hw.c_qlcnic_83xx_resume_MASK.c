
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlc_83xx_idc {int delay; } ;
struct qlcnic_hardware_context {scalar_t__ nic_mode; scalar_t__ op_mode; struct qlc_83xx_idc idc; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int VAR_2 ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;
 struct qlc_83xx_idc *VAR_5 = &VAR_4->idc;
 int VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6)
  return VAR_6;

 if (VAR_4->nic_mode == VAR_1) {
  if (VAR_4->op_mode == VAR_0) {
   FUNC_3(VAR_3);
  } else {
   VAR_6 = FUNC_0(VAR_3);
   if (VAR_6)
    return VAR_6;
  }
 }

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_4(VAR_3, VAR_2,
        VAR_5->delay);
 return VAR_6;
}
