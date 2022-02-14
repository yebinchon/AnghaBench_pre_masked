
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int (* write_reg ) (struct ixgbe_hw*,int ,int ,int) ;int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;} ;
struct TYPE_10__ {int media_type; TYPE_4__ ops; } ;
struct TYPE_7__ {scalar_t__ (* prot_autoc_write ) (struct ixgbe_hw*,int,int) ;scalar_t__ (* prot_autoc_read ) (struct ixgbe_hw*,int*,int*) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_6__ {int requested_mode; scalar_t__ strict_ieee; } ;
struct ixgbe_hw {TYPE_5__ phy; TYPE_3__ mac; TYPE_1__ fc; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct ixgbe_hw*,char*,...) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int VAR_13 ;




 scalar_t__ VAR_14 ;



 scalar_t__ FUNC_4 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int,int) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int ,int) ;

s32 FUNC_8(struct ixgbe_hw *VAR_15)
{
 s32 VAR_16 = 0;
 u32 VAR_17 = 0, VAR_18 = 0;
 u16 VAR_19 = 0;
 bool VAR_20 = 0;





 if (VAR_15->fc.strict_ieee && VAR_15->fc.requested_mode == 132) {
  FUNC_2(VAR_15, "ixgbe_fc_rx_pause not valid in strict IEEE mode\n");
  return VAR_3;
 }





 if (VAR_15->fc.requested_mode == VAR_13)
  VAR_15->fc.requested_mode = 134;






 switch (VAR_15->phy.media_type) {
 case 130:

  VAR_16 = VAR_15->mac.ops.prot_autoc_read(VAR_15, &VAR_20, &VAR_18);
  if (VAR_16)
   return VAR_16;


 case 128:
  VAR_17 = FUNC_0(VAR_15, VAR_4);

  break;
 case 129:
  VAR_15->phy.ops.read_reg(VAR_15, VAR_11,
     VAR_12, &VAR_19);
  break;
 default:
  break;
 }
 switch (VAR_15->fc.requested_mode) {
 case 133:

  VAR_17 &= ~(VAR_6 | VAR_5);
  if (VAR_15->phy.media_type == 130)
   VAR_18 &= ~(VAR_1 |
        VAR_0);
  else if (VAR_15->phy.media_type == 129)
   VAR_19 &= ~(VAR_10 | VAR_9);
  break;
 case 131:




  VAR_17 |= VAR_5;
  VAR_17 &= ~VAR_6;
  if (VAR_15->phy.media_type == 130) {
   VAR_18 |= VAR_0;
   VAR_18 &= ~VAR_1;
  } else if (VAR_15->phy.media_type == 129) {
   VAR_19 |= VAR_9;
   VAR_19 &= ~VAR_10;
  }
  break;
 case 132:
 case 134:

  VAR_17 |= VAR_6 | VAR_5;
  if (VAR_15->phy.media_type == 130)
   VAR_18 |= VAR_1 |
      VAR_0;
  else if (VAR_15->phy.media_type == 129)
   VAR_19 |= VAR_10 | VAR_9;
  break;
 default:
  FUNC_2(VAR_15, "Flow control param set incorrectly\n");
  return VAR_2;
 }

 if (VAR_15->mac.type != VAR_14) {




  FUNC_1(VAR_15, VAR_4, VAR_17);
  VAR_17 = FUNC_0(VAR_15, VAR_7);


  if (VAR_15->fc.strict_ieee)
   VAR_17 &= ~VAR_8;

  FUNC_1(VAR_15, VAR_7, VAR_17);
  FUNC_2(VAR_15, "Set up FC; PCS1GLCTL = 0x%08X\n", VAR_17);
 }






 if (VAR_15->phy.media_type == 130) {




  VAR_16 = VAR_15->mac.ops.prot_autoc_write(VAR_15, VAR_18, VAR_20);
  if (VAR_16)
   return VAR_16;

 } else if ((VAR_15->phy.media_type == 129) &&
     FUNC_3(VAR_15)) {
  VAR_15->phy.ops.write_reg(VAR_15, VAR_11,
          VAR_12, VAR_19);
 }

 FUNC_2(VAR_15, "Set up FC; IXGBE_AUTOC = 0x%08X\n", VAR_17);
 return VAR_16;
}
