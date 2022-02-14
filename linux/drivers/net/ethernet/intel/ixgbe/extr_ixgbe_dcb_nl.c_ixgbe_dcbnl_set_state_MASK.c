
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int pg_tcs; } ;
struct TYPE_4__ {TYPE_1__ num_tcs; } ;
struct ixgbe_adapter {int dcbx_cap; int flags; TYPE_2__ dcb_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_2, u8 VAR_3)
{
 struct ixgbe_adapter *VAR_4 = FUNC_1(VAR_2);


 if (!(VAR_4->dcbx_cap & VAR_0))
  return 1;


 if (!VAR_3 == !(VAR_4->flags & VAR_1))
  return 0;

 return !!FUNC_0(VAR_2,
    VAR_3 ? VAR_4->dcb_cfg.num_tcs.pg_tcs : 0);
}
