
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int fc_was_autonegged; int requested_mode; int current_mode; scalar_t__ disable_fc_autoneg; } ;
struct TYPE_7__ {int lan_id; } ;
struct TYPE_5__ {scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ fc; TYPE_3__ bus; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 int FUNC_4 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int,int,int ,int ,int ,int ) ;
 int FUNC_6 (struct ixgbe_hw*,int *,int*,int) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_10(struct ixgbe_hw *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 s32 VAR_11 = VAR_0;
 ixgbe_link_speed VAR_12;
 bool VAR_13;






 if (VAR_7->fc.disable_fc_autoneg) {
  FUNC_4(VAR_7, "Flow control autoneg is disabled");
  goto out;
 }

 VAR_7->mac.ops.check_link(VAR_7, &VAR_12, &VAR_13, 0);
 if (!VAR_13) {
  FUNC_4(VAR_7, "The link is down");
  goto out;
 }


 VAR_11 = VAR_7->mac.ops.read_iosf_sb_reg(VAR_7,
     FUNC_1(VAR_7->bus.lan_id),
     VAR_6, &VAR_8);

 if (VAR_11 || (VAR_8 & VAR_3) == 0) {
  FUNC_3(VAR_7, "Auto-Negotiation did not complete\n");
  VAR_11 = VAR_0;
  goto out;
 }




 VAR_11 = VAR_7->mac.ops.read_iosf_sb_reg(VAR_7,
    FUNC_0(VAR_7->bus.lan_id),
    VAR_6, &VAR_10);

 if (VAR_11) {
  FUNC_3(VAR_7, "Auto-Negotiation did not complete\n");
  goto out;
 }

 VAR_11 = VAR_7->mac.ops.read_iosf_sb_reg(VAR_7,
    FUNC_2(VAR_7->bus.lan_id),
    VAR_6, &VAR_9);

 if (VAR_11) {
  FUNC_3(VAR_7, "Auto-Negotiation did not complete\n");
  goto out;
 }

 VAR_11 = FUNC_5(VAR_7, VAR_10, VAR_9,
        VAR_2,
        VAR_1,
        VAR_5,
        VAR_4);

out:
 if (!VAR_11) {
  VAR_7->fc.fc_was_autonegged = 1;
 } else {
  VAR_7->fc.fc_was_autonegged = 0;
  VAR_7->fc.current_mode = VAR_7->fc.requested_mode;
 }
}
