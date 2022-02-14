
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {int flags; int hw_features; TYPE_1__* pdev; struct i40e_hw hw; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;
struct TYPE_2__ {int dev; } ;






 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int,scalar_t__) ;
 int VAR_17 ;
 int FUNC_2 (int) ;


 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;






 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (struct ethtool_rxnfc*,int) ;
 scalar_t__ FUNC_6 (struct i40e_hw*,int ) ;
 int FUNC_7 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct i40e_pf *VAR_22, struct ethtool_rxnfc *VAR_23)
{
 struct i40e_hw *VAR_24 = &VAR_22->hw;
 u64 VAR_25 = (u64)FUNC_6(VAR_24, FUNC_2(0)) |
     ((u64)FUNC_6(VAR_24, FUNC_2(1)) << 32);
 u8 VAR_26 = 0;
 u64 VAR_27, VAR_28;

 if (VAR_22->flags & VAR_16) {
  FUNC_3(&VAR_22->pdev->dev,
   "Change of RSS hash input set is not supported when MFP mode is enabled\n");
  return -VAR_1;
 }




 if (VAR_23->data & ~(VAR_19 | VAR_18 |
     VAR_20 | VAR_21))
  return -VAR_0;

 switch (VAR_23->flow_type) {
 case 131:
  VAR_26 = VAR_5;
  if (VAR_22->hw_features & VAR_17)
   VAR_25 |=
     FUNC_0(VAR_6);
  break;
 case 130:
  VAR_26 = VAR_9;
  if (VAR_22->hw_features & VAR_17)
   VAR_25 |=
     FUNC_0(VAR_6);
  if (VAR_22->hw_features & VAR_17)
   VAR_25 |=
     FUNC_0(VAR_10);
  break;
 case 129:
  VAR_26 = VAR_7;
  if (VAR_22->hw_features & VAR_17)
   VAR_25 |=
     FUNC_0(VAR_14) |
     FUNC_0(VAR_12);

  VAR_25 |= FUNC_0(VAR_2);
  break;
 case 128:
  VAR_26 = VAR_11;
  if (VAR_22->hw_features & VAR_17)
   VAR_25 |=
     FUNC_0(VAR_15) |
     FUNC_0(VAR_13);

  VAR_25 |= FUNC_0(VAR_3);
  break;
 case 141:
 case 139:
 case 137:
 case 133:
  if ((VAR_23->data & VAR_20) ||
      (VAR_23->data & VAR_21))
   return -VAR_0;
  VAR_25 |= FUNC_0(VAR_4);
  break;
 case 140:
 case 138:
 case 136:
 case 132:
  if ((VAR_23->data & VAR_20) ||
      (VAR_23->data & VAR_21))
   return -VAR_0;
  VAR_25 |= FUNC_0(VAR_8);
  break;
 case 135:
  VAR_25 |= FUNC_0(VAR_4) |
   FUNC_0(VAR_2);
  break;
 case 134:
  VAR_25 |= FUNC_0(VAR_8) |
   FUNC_0(VAR_3);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_26) {
  VAR_28 = (u64)FUNC_6(VAR_24, FUNC_1(0,
            VAR_26)) |
   ((u64)FUNC_6(VAR_24, FUNC_1(1,
            VAR_26)) << 32);
  VAR_27 = FUNC_5(VAR_23, VAR_28);
  FUNC_7(VAR_24, FUNC_1(0, VAR_26),
      (u32)VAR_27);
  FUNC_7(VAR_24, FUNC_1(1, VAR_26),
      (u32)(VAR_27 >> 32));
  VAR_25 |= FUNC_0(VAR_26);
 }

 FUNC_7(VAR_24, FUNC_2(0), (u32)VAR_25);
 FUNC_7(VAR_24, FUNC_2(1), (u32)(VAR_25 >> 32));
 FUNC_4(VAR_24);

 return 0;
}
