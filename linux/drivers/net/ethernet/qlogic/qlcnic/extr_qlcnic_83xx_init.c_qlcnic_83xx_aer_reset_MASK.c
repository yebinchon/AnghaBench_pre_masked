
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qlc_83xx_idc {int (* state_entry ) (struct qlcnic_adapter*) ;int prev_state; } ;
struct qlcnic_hardware_context {scalar_t__ pci_func; struct qlc_83xx_idc idc; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

int FUNC_4(struct qlcnic_adapter *VAR_1)
{
 struct qlcnic_hardware_context *VAR_2 = VAR_1->ahw;
 struct qlc_83xx_idc *VAR_3 = &VAR_2->idc;
 int VAR_4 = 0;
 u32 VAR_5;





 VAR_3->prev_state = VAR_0;
 VAR_5 = FUNC_1(VAR_1);
 if (VAR_2->pci_func == VAR_5) {
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_4 < 0)
   return VAR_4;
  FUNC_0(VAR_1, 0);
 }

 VAR_4 = VAR_3->state_entry(VAR_1);
 return VAR_4;
}
