
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct e1000_phy_info {scalar_t__ type; scalar_t__ smart_speed; scalar_t__ autoneg_advertised; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_11, bool VAR_12)
{
 struct e1000_phy_info *VAR_13 = &VAR_11->phy;
 u32 VAR_14;
 s32 VAR_15 = 0;
 u16 VAR_16;

 VAR_14 = FUNC_3(VAR_6);

 if (!VAR_12) {
  VAR_14 &= ~VAR_3;
  FUNC_4(VAR_6, VAR_14);

  if (VAR_13->type != VAR_8)
   return 0;






  if (VAR_13->smart_speed == VAR_10) {
   VAR_15 = FUNC_1(VAR_11, VAR_4,
        &VAR_16);
   if (VAR_15)
    return VAR_15;

   VAR_16 |= VAR_5;
   VAR_15 = FUNC_2(VAR_11, VAR_4,
        VAR_16);
   if (VAR_15)
    return VAR_15;
  } else if (VAR_13->smart_speed == VAR_9) {
   VAR_15 = FUNC_1(VAR_11, VAR_4,
        &VAR_16);
   if (VAR_15)
    return VAR_15;

   VAR_16 &= ~VAR_5;
   VAR_15 = FUNC_2(VAR_11, VAR_4,
        VAR_16);
   if (VAR_15)
    return VAR_15;
  }
 } else if ((VAR_13->autoneg_advertised == VAR_2) ||
     (VAR_13->autoneg_advertised == VAR_1) ||
     (VAR_13->autoneg_advertised == VAR_0)) {
  VAR_14 |= VAR_3;
  FUNC_4(VAR_6, VAR_14);

  if (VAR_13->type != VAR_8)
   return 0;




  if (VAR_11->mac.type == VAR_7)
   FUNC_0(VAR_11);


  VAR_15 = FUNC_1(VAR_11, VAR_4, &VAR_16);
  if (VAR_15)
   return VAR_15;

  VAR_16 &= ~VAR_5;
  VAR_15 = FUNC_2(VAR_11, VAR_4, VAR_16);
 }

 return VAR_15;
}
