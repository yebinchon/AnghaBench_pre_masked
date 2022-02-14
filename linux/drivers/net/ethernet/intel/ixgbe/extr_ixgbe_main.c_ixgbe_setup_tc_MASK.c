
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int requested_mode; } ;
struct TYPE_7__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ fc; TYPE_2__ mac; } ;
struct TYPE_6__ {scalar_t__ pg_tcs; } ;
struct TYPE_10__ {int pfc_mode_enable; TYPE_1__ num_tcs; } ;
struct TYPE_9__ {int pfc_mode_enable; } ;
struct ixgbe_adapter {TYPE_5__ dcb_cfg; TYPE_4__ temp_dcb_cfg; scalar_t__ hw_tcs; int flags; int last_lfc_mode; struct ixgbe_hw hw; scalar_t__ xdp_prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct ixgbe_adapter*,scalar_t__) ;
 struct ixgbe_adapter* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 int VAR_5 ;

int FUNC_13(struct net_device *VAR_6, u8 VAR_7)
{
 struct ixgbe_adapter *VAR_8 = FUNC_9(VAR_6);
 struct ixgbe_hw *VAR_9 = &VAR_8->hw;


 if (VAR_7 > VAR_8->dcb_cfg.num_tcs.pg_tcs)
  return -VAR_0;

 if (VAR_9->mac.type == VAR_4 && VAR_7 && VAR_7 < VAR_2)
  return -VAR_0;





 if (FUNC_12(VAR_6))
  FUNC_2(VAR_6);
 else
  FUNC_6(VAR_8);

 FUNC_1(VAR_8);
 FUNC_4(VAR_8);

 FUNC_3(VAR_6);

 if (FUNC_12(VAR_6))
  return FUNC_5(VAR_6);

 return 0;
}
