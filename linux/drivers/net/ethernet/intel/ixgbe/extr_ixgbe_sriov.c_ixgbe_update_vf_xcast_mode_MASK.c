
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {TYPE_2__* vfinfo; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int vf_api; int xcast_mode; int trusted; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (size_t) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (struct ixgbe_hw*,int ,size_t) ;
 int VAR_9 ;
 int FUNC_3 (int ,char*) ;
 int VAR_10 ;




__attribute__((used)) static int FUNC_4(struct ixgbe_adapter *VAR_11,
          u32 *VAR_12, u32 VAR_13)
{
 struct ixgbe_hw *VAR_14 = &VAR_11->hw;
 int VAR_15 = VAR_12[1];
 u32 VAR_16, VAR_17, VAR_18, VAR_19;


 switch (VAR_11->vfinfo[VAR_13].vf_api) {
 case 130:

  if (VAR_15 == 131)
   return -VAR_0;

 case 129:
 case 128:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_15 > 133 &&
     !VAR_11->vfinfo[VAR_13].trusted) {
  VAR_15 = 133;
 }

 if (VAR_11->vfinfo[VAR_13].xcast_mode == VAR_15)
  goto out;

 switch (VAR_15) {
 case 132:
  VAR_18 = VAR_4 | VAR_6 |
     VAR_5 | VAR_7 | VAR_8;
  VAR_19 = 0;
  break;
 case 133:
  VAR_18 = VAR_5 | VAR_7 | VAR_8;
  VAR_19 = VAR_4 | VAR_6;
  break;
 case 134:
  VAR_18 = VAR_7 | VAR_8;
  VAR_19 = VAR_4 | VAR_6 | VAR_5;
  break;
 case 131:
  if (VAR_14->mac.type <= VAR_10)
   return -VAR_0;

  VAR_17 = FUNC_0(VAR_14, VAR_2);
  if (!(VAR_17 & VAR_3)) {

   FUNC_3(VAR_9,
          "Enabling VF promisc requires PF in promisc\n");
   return -VAR_1;
  }

  VAR_18 = 0;
  VAR_19 = VAR_4 | VAR_6 |
    VAR_5 | VAR_7 | VAR_8;
  break;
 default:
  return -VAR_0;
 }

 VAR_16 = FUNC_0(VAR_14, FUNC_1(VAR_13));
 VAR_16 &= ~VAR_18;
 VAR_16 |= VAR_19;
 FUNC_2(VAR_14, FUNC_1(VAR_13), VAR_16);

 VAR_11->vfinfo[VAR_13].xcast_mode = VAR_15;

out:
 VAR_12[1] = VAR_15;

 return 0;
}
