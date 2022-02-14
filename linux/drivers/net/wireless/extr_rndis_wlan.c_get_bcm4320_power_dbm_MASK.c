
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rndis_wlan_private {int param_power_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct rndis_wlan_private *VAR_4)
{
 switch (VAR_4->param_power_output) {
 default:
 case 3:
  return VAR_0;
 case 2:
  return VAR_3;
 case 1:
  return VAR_2;
 case 0:
  return VAR_1;
 }
}
