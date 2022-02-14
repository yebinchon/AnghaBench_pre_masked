
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ (* identify_sfp ) (struct ixgbe_hw*) ;scalar_t__ (* reset ) (struct ixgbe_hw*) ;} ;
struct TYPE_9__ {int sfp_type; TYPE_1__ ops; } ;
struct TYPE_7__ {scalar_t__ (* setup_sfp ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_4__ phy; TYPE_3__ mac; } ;
struct ixgbe_adapter {int flags2; TYPE_5__* netdev; int state; int flags; scalar_t__ sfp_poll_time; struct ixgbe_hw hw; } ;
typedef scalar_t__ s32 ;
struct TYPE_10__ {scalar_t__ reg_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_9(struct ixgbe_adapter *VAR_11)
{
 struct ixgbe_hw *VAR_12 = &VAR_11->hw;
 s32 VAR_13;


 if (!(VAR_11->flags2 & VAR_2) &&
     !(VAR_11->flags2 & VAR_3))
  return;

 if (VAR_11->sfp_poll_time &&
     FUNC_7(VAR_11->sfp_poll_time, VAR_9))
  return;


 if (FUNC_6(VAR_7, &VAR_11->state))
  return;

 VAR_11->sfp_poll_time = VAR_9 + VAR_5 - 1;

 VAR_13 = VAR_12->phy.ops.identify_sfp(VAR_12);
 if (VAR_13 == VAR_1)
  goto sfp_out;

 if (VAR_13 == VAR_0) {


  VAR_11->flags2 |= VAR_3;
 }


 if (VAR_13)
  goto sfp_out;


 if (!(VAR_11->flags2 & VAR_3))
  goto sfp_out;

 VAR_11->flags2 &= ~VAR_3;






 if (VAR_12->mac.type == VAR_8)
  VAR_13 = VAR_12->phy.ops.reset(VAR_12);
 else
  VAR_13 = VAR_12->mac.ops.setup_sfp(VAR_12);

 if (VAR_13 == VAR_1)
  goto sfp_out;

 VAR_11->flags |= VAR_4;
 FUNC_2(VAR_10, "detected SFP+: %d\n", VAR_12->phy.sfp_type);

sfp_out:
 FUNC_0(VAR_7, &VAR_11->state);

 if ((VAR_13 == VAR_1) &&
     (VAR_11->netdev->reg_state == VAR_6)) {
  FUNC_1("failed to initialize because an unsupported "
     "SFP+ module type was detected.\n");
  FUNC_1("Reload the driver after installing a "
     "supported module.\n");
  FUNC_8(VAR_11->netdev);
 }
}
