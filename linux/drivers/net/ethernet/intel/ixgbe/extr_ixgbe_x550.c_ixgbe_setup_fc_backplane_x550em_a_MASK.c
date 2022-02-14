
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int lan_id; } ;
struct TYPE_6__ {scalar_t__ (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int) ;scalar_t__ (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_7__ {TYPE_2__ ops; } ;
struct TYPE_5__ {int requested_mode; scalar_t__ strict_ieee; } ;
struct ixgbe_hw {TYPE_4__ bus; TYPE_3__ mac; TYPE_1__ fc; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 int VAR_5 ;




 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,int ,int) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_6)
{
 s32 VAR_7 = 0;
 u32 VAR_8 = 0;


 if (VAR_6->fc.strict_ieee && VAR_6->fc.requested_mode == 129) {
  FUNC_2(VAR_6, "ixgbe_fc_rx_pause not valid in strict IEEE mode\n");
  return VAR_1;
 }

 if (VAR_6->fc.requested_mode == VAR_5)
  VAR_6->fc.requested_mode = 131;





 VAR_7 = VAR_6->mac.ops.read_iosf_sb_reg(VAR_6,
     FUNC_0(VAR_6->bus.lan_id),
     VAR_4, &VAR_8);

 if (VAR_7) {
  FUNC_1(VAR_6, "Auto-Negotiation did not complete\n");
  return VAR_7;
 }
 switch (VAR_6->fc.requested_mode) {
 case 130:

  VAR_8 &= ~(VAR_3 |
        VAR_2);
  break;
 case 128:



  VAR_8 |= VAR_2;
  VAR_8 &= ~VAR_3;
  break;
 case 129:
 case 131:

  VAR_8 |= VAR_3 |
      VAR_2;
  break;
 default:
  FUNC_2(VAR_6, "Flow control param set incorrectly\n");
  return VAR_0;
 }

 VAR_7 = VAR_6->mac.ops.write_iosf_sb_reg(VAR_6,
     FUNC_0(VAR_6->bus.lan_id),
     VAR_4, VAR_8);


 VAR_7 = FUNC_3(VAR_6);

 return VAR_7;
}
