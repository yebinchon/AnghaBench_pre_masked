
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qlc_83xx_idc {int prev_state; } ;
struct qlcnic_hardware_context {scalar_t__ pci_func; struct qlc_83xx_idc idc; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int VAR_1 ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int ) ;

void FUNC_3(struct qlcnic_adapter *VAR_2)
{
 struct qlcnic_hardware_context *VAR_3 = VAR_2->ahw;
 struct qlc_83xx_idc *VAR_4 = &VAR_3->idc;
 u32 VAR_5;

 VAR_4->prev_state = VAR_0;
 VAR_5 = FUNC_1(VAR_2);
 if (VAR_3->pci_func == VAR_5)
  FUNC_0(VAR_2, 0);

 FUNC_2(VAR_2, VAR_1, 0);
}
