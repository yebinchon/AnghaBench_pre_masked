
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ power_mgmt; scalar_t__ operation_mode; } ;
struct ks_wlan_private {TYPE_1__ reg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ks_wlan_private*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct ks_wlan_private *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 if (VAR_5->reg.power_mgmt != VAR_2 &&
     VAR_5->reg.power_mgmt != VAR_3) {
  VAR_6 = VAR_1;
  VAR_7 = 0;
  VAR_8 = 0;
 } else {
  VAR_6 = (VAR_5->reg.operation_mode == VAR_0) ?
   VAR_4 : VAR_1;
  VAR_7 = 0;
  VAR_8 = (VAR_5->reg.operation_mode == VAR_0 &&
     VAR_5->reg.power_mgmt == VAR_3);
 }

 FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
}
