
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int requested_mode; int disable_fc_autoneg; scalar_t__ strict_ieee; } ;
struct TYPE_7__ {int lan_id; } ;
struct TYPE_5__ {int (* write_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int) ;int (* read_iosf_sb_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct ixgbe_hw {int device_id; TYPE_4__ fc; TYPE_3__ bus; TYPE_2__ mac; } ;
typedef int s32 ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 int VAR_5 ;




 int FUNC_2 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_6)
{
 bool VAR_7, VAR_8;
 u32 VAR_9;
 s32 VAR_10 = 0;


 if (VAR_6->fc.strict_ieee && VAR_6->fc.requested_mode == 129) {
  FUNC_1(VAR_6, "ixgbe_fc_rx_pause not valid in strict IEEE mode\n");
  return VAR_1;
 }




 if (VAR_6->fc.requested_mode == VAR_5)
  VAR_6->fc.requested_mode = 131;


 switch (VAR_6->fc.requested_mode) {
 case 130:
  VAR_7 = 0;
  VAR_8 = 0;
  break;
 case 128:
  VAR_7 = 0;
  VAR_8 = 1;
  break;
 case 129:
 case 131:
  VAR_7 = 1;
  VAR_8 = 1;
  break;
 default:
  FUNC_1(VAR_6, "Flow control param set incorrectly\n");
  return VAR_0;
 }

 switch (VAR_6->device_id) {
 case 133:
 case 135:
 case 134:
  VAR_10 = VAR_6->mac.ops.read_iosf_sb_reg(VAR_6,
         FUNC_0(VAR_6->bus.lan_id),
         VAR_4,
         &VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_9 &= ~(VAR_3 |
        VAR_2);
  if (VAR_7)
   VAR_9 |= VAR_3;
  if (VAR_8)
   VAR_9 |= VAR_2;
  VAR_10 = VAR_6->mac.ops.write_iosf_sb_reg(VAR_6,
         FUNC_0(VAR_6->bus.lan_id),
         VAR_4,
         VAR_9);


  VAR_6->fc.disable_fc_autoneg = 1;
  break;
 case 132:
  VAR_6->fc.disable_fc_autoneg = 1;
  break;
 default:
  break;
 }
 return VAR_10;
}
