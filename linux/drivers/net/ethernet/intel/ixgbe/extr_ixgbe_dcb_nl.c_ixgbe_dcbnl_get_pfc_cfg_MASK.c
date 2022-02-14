
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* tc_config; } ;
struct ixgbe_adapter {TYPE_2__ dcb_cfg; } ;
struct TYPE_3__ {int dcb_pfc; } ;


 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, int VAR_1,
        u8 *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->dcb_cfg.tc_config[VAR_1].dcb_pfc;
}
