
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qlcnic_hardware_context {int total_nic_func; int max_mc_count; int max_uc_count; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;
 u16 VAR_5 = VAR_4->total_nic_func;
 u16 VAR_6;

 VAR_4->max_mc_count = VAR_1;
 if (VAR_5 <= 2)
  VAR_6 = (VAR_2 - VAR_1) /
    VAR_5;
 else
  VAR_6 = (VAR_0 - VAR_1) /
    VAR_5;
 VAR_4->max_uc_count = VAR_6;
}
