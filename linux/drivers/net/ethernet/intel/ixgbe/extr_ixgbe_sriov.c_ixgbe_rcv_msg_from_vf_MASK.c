
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {TYPE_1__* vfinfo; struct ixgbe_hw hw; } ;
typedef int s32 ;
struct TYPE_2__ {int clear_to_send; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_3 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_4 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_5 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_6 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_7 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_8 (struct ixgbe_hw*,int*,int,int) ;
 int FUNC_9 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_10 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_11 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_12 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_13 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_14 (struct ixgbe_adapter*,int*,int) ;
 int FUNC_15 (struct ixgbe_adapter*,int) ;
 int FUNC_16 (struct ixgbe_hw*,int*,int,int) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int FUNC_18(struct ixgbe_adapter *VAR_7, u32 VAR_8)
{
 u32 VAR_9 = VAR_1;
 u32 VAR_10[VAR_1];
 struct ixgbe_hw *VAR_11 = &VAR_7->hw;
 s32 VAR_12;

 VAR_12 = FUNC_8(VAR_11, VAR_10, VAR_9, VAR_8);

 if (VAR_12) {
  FUNC_17("Error receiving message from VF\n");
  return VAR_12;
 }


 if (VAR_10[0] & (VAR_3 | VAR_5))
  return 0;


 FUNC_0(VAR_11);

 if (VAR_10[0] == VAR_2)
  return FUNC_15(VAR_7, VAR_8);





 if (!VAR_7->vfinfo[VAR_8].clear_to_send) {
  VAR_10[0] |= VAR_5;
  FUNC_16(VAR_11, VAR_10, 1, VAR_8);
  return 0;
 }

 switch ((VAR_10[0] & 0xFFFF)) {
 case 131:
  VAR_12 = FUNC_10(VAR_7, VAR_10, VAR_8);
  break;
 case 130:
  VAR_12 = FUNC_12(VAR_7, VAR_10, VAR_8);
  break;
 case 129:
  VAR_12 = FUNC_13(VAR_7, VAR_10, VAR_8);
  break;
 case 133:
  VAR_12 = FUNC_9(VAR_7, VAR_10, VAR_8);
  break;
 case 132:
  VAR_12 = FUNC_11(VAR_7, VAR_10, VAR_8);
  break;
 case 139:
  VAR_12 = FUNC_7(VAR_7, VAR_10, VAR_8);
  break;
 case 138:
  VAR_12 = FUNC_2(VAR_7, VAR_10, VAR_8);
  break;
 case 137:
  VAR_12 = FUNC_3(VAR_7, VAR_10, VAR_8);
  break;
 case 136:
  VAR_12 = FUNC_4(VAR_7, VAR_10, VAR_8);
  break;
 case 128:
  VAR_12 = FUNC_14(VAR_7, VAR_10, VAR_8);
  break;
 case 135:
  VAR_12 = FUNC_5(VAR_7, VAR_10, VAR_8);
  break;
 case 134:
  VAR_12 = FUNC_6(VAR_7, VAR_10, VAR_8);
  break;
 default:
  FUNC_1(VAR_6, "Unhandled Msg %8.8x\n", VAR_10[0]);
  VAR_12 = VAR_0;
  break;
 }


 if (VAR_12)
  VAR_10[0] |= VAR_5;
 else
  VAR_10[0] |= VAR_3;

 VAR_10[0] |= VAR_4;

 FUNC_16(VAR_11, VAR_10, VAR_9, VAR_8);

 return VAR_12;
}
