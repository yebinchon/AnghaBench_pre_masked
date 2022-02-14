
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_pf {int dummy; } ;
struct i40e_hw {int dummy; } ;
struct TYPE_2__ {int duplex; int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_pf*,struct ethtool_link_ksettings*) ;

__attribute__((used)) static void FUNC_1(struct i40e_hw *VAR_2,
     struct ethtool_link_ksettings *VAR_3,
     struct i40e_pf *VAR_4)
{



 FUNC_0(VAR_4, VAR_3);


 VAR_3->base.speed = VAR_1;
 VAR_3->base.duplex = VAR_0;
}
