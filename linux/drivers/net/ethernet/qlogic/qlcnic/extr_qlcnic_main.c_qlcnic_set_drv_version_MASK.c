
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_hardware_context {int* extra_capability; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;

void FUNC_3(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;
 u32 VAR_5 = 0;

 if (FUNC_0(VAR_3))
  VAR_5 = VAR_0;
 else if (FUNC_1(VAR_3))
  VAR_5 = VAR_1;

 if (VAR_4->extra_capability[0] & VAR_2)
  FUNC_2(VAR_3, VAR_5);
}
