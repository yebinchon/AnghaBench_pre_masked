
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* commit ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {int mdix; TYPE_1__ ops; scalar_t__ disable_polarity_correction; } ;
struct TYPE_5__ {int (* check_mng_mode ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct e1000_hw {TYPE_3__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 int FUNC_8 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_24)
{
 struct e1000_phy_info *VAR_25 = &VAR_24->phy;
 s32 VAR_26;
 u32 VAR_27;
 u16 VAR_28;

 VAR_26 = FUNC_2(VAR_24, VAR_13, &VAR_28);
 if (VAR_26)
  return VAR_26;

 VAR_28 |= VAR_9;

 VAR_28 |= VAR_10;

 VAR_26 = FUNC_3(VAR_24, VAR_13, VAR_28);
 if (VAR_26)
  return VAR_26;
 VAR_26 = FUNC_2(VAR_24, VAR_15, &VAR_28);
 if (VAR_26)
  return VAR_26;

 VAR_28 &= ~VAR_20;

 switch (VAR_25->mdix) {
 case 1:
  VAR_28 |= VAR_21;
  break;
 case 2:
  VAR_28 |= VAR_22;
  break;
 case 0:
 default:
  VAR_28 |= VAR_19;
  break;
 }







 VAR_28 &= ~VAR_23;
 if (VAR_25->disable_polarity_correction)
  VAR_28 |= VAR_23;

 VAR_26 = FUNC_3(VAR_24, VAR_15, VAR_28);
 if (VAR_26)
  return VAR_26;


 VAR_26 = VAR_24->phy.ops.commit(VAR_24);
 if (VAR_26) {
  FUNC_4("Error Resetting the PHY\n");
  return VAR_26;
 }


 VAR_27 = VAR_4;
 VAR_28 = (VAR_2 |
  VAR_3);
 VAR_26 = FUNC_1(VAR_24, VAR_27, VAR_28);
 if (VAR_26)
  return VAR_26;

 VAR_27 = VAR_5;
 VAR_26 = FUNC_0(VAR_24, VAR_27, &VAR_28);
 if (VAR_26)
  return VAR_26;
 VAR_28 |= VAR_6;
 VAR_26 = FUNC_1(VAR_24, VAR_27, VAR_28);
 if (VAR_26)
  return VAR_26;

 VAR_26 = FUNC_2(VAR_24, VAR_16, &VAR_28);
 if (VAR_26)
  return VAR_26;

 VAR_28 &= ~VAR_18;
 VAR_26 = FUNC_3(VAR_24, VAR_16, VAR_28);
 if (VAR_26)
  return VAR_26;

 VAR_27 = FUNC_5(VAR_0);
 VAR_27 &= ~VAR_1;
 FUNC_6(VAR_0, VAR_27);

 VAR_26 = FUNC_2(VAR_24, VAR_14, &VAR_28);
 if (VAR_26)
  return VAR_26;





 if (!VAR_24->mac.ops.check_mng_mode(VAR_24)) {

  VAR_28 |= VAR_17;
  VAR_26 = FUNC_3(VAR_24, VAR_14, VAR_28);
  if (VAR_26)
   return VAR_26;

  VAR_26 = FUNC_2(VAR_24, VAR_12, &VAR_28);
  if (VAR_26)
   return VAR_26;

  VAR_28 &= ~VAR_8;
  VAR_26 = FUNC_3(VAR_24, VAR_12, VAR_28);
  if (VAR_26)
   return VAR_26;
 }




 VAR_26 = FUNC_2(VAR_24, VAR_11, &VAR_28);
 if (VAR_26)
  return VAR_26;

 VAR_28 |= VAR_7;
 VAR_26 = FUNC_3(VAR_24, VAR_11, VAR_28);
 if (VAR_26)
  return VAR_26;

 return 0;
}
