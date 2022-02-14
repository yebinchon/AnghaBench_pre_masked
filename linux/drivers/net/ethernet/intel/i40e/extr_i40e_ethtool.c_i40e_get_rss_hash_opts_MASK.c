
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;






 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;






 scalar_t__ FUNC_1 (struct i40e_hw*,int ) ;

__attribute__((used)) static int FUNC_2(struct i40e_pf *VAR_15, struct ethtool_rxnfc *VAR_16)
{
 struct i40e_hw *VAR_17 = &VAR_15->hw;
 u8 VAR_18 = 0;
 u64 VAR_19 = 0;

 VAR_16->data = 0;

 switch (VAR_16->flow_type) {
 case 131:
  VAR_18 = VAR_1;
  break;
 case 129:
  VAR_18 = VAR_2;
  break;
 case 130:
  VAR_18 = VAR_3;
  break;
 case 128:
  VAR_18 = VAR_4;
  break;
 case 133:
 case 141:
 case 139:
 case 137:
 case 135:
 case 132:
 case 140:
 case 138:
 case 136:
 case 134:

  VAR_16->data |= VAR_12 | VAR_11;
  break;
 default:
  return -VAR_0;
 }


 if (VAR_18) {
  VAR_19 = (u64)FUNC_1(VAR_17, FUNC_0(0,
           VAR_18)) |
   ((u64)FUNC_1(VAR_17, FUNC_0(1,
            VAR_18)) << 32);
 }


 if (VAR_19) {
  if (VAR_19 & VAR_10)
   VAR_16->data |= VAR_13;
  if (VAR_19 & VAR_9)
   VAR_16->data |= VAR_14;

  if (VAR_16->flow_type == 131 ||
      VAR_16->flow_type == 129) {
   if (VAR_19 & VAR_6)
    VAR_16->data |= VAR_12;
   if (VAR_19 & VAR_5)
    VAR_16->data |= VAR_11;
  } else if (VAR_16->flow_type == 130 ||
     VAR_16->flow_type == 128) {
   if (VAR_19 & VAR_8)
    VAR_16->data |= VAR_12;
   if (VAR_19 & VAR_7)
    VAR_16->data |= VAR_11;
  }
 }

 return 0;
}
