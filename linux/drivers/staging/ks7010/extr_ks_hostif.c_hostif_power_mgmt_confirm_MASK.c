
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int confirm_wait; } ;
struct TYPE_3__ {scalar_t__ power_mgmt; scalar_t__ operation_mode; } ;
struct ks_wlan_private {int dev_state; TYPE_2__ psstatus; TYPE_1__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ks_wlan_private*) ;

__attribute__((used)) static
void FUNC_2(struct ks_wlan_private *VAR_4)
{
 if (VAR_4->reg.power_mgmt > VAR_3 &&
     VAR_4->reg.operation_mode == VAR_2) {
  FUNC_0(&VAR_4->psstatus.confirm_wait, 0);
  VAR_4->dev_state = VAR_1;
  FUNC_1(VAR_4);
 } else {
  VAR_4->dev_state = VAR_0;
 }
}
