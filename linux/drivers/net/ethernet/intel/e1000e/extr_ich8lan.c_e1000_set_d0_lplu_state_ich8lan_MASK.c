
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct e1000_phy_info {scalar_t__ type; scalar_t__ smart_speed; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_9, bool VAR_10)
{
 struct e1000_phy_info *VAR_11 = &VAR_9->phy;
 u32 VAR_12;
 s32 VAR_13 = 0;
 u16 VAR_14;

 if (VAR_11->type == VAR_5)
  return 0;

 VAR_12 = FUNC_3(VAR_3);

 if (VAR_10) {
  VAR_12 |= VAR_0;
  FUNC_4(VAR_3, VAR_12);

  if (VAR_11->type != VAR_6)
   return 0;




  if (VAR_9->mac.type == VAR_4)
   FUNC_0(VAR_9);


  VAR_13 = FUNC_1(VAR_9, VAR_1, &VAR_14);
  if (VAR_13)
   return VAR_13;
  VAR_14 &= ~VAR_2;
  VAR_13 = FUNC_2(VAR_9, VAR_1, VAR_14);
  if (VAR_13)
   return VAR_13;
 } else {
  VAR_12 &= ~VAR_0;
  FUNC_4(VAR_3, VAR_12);

  if (VAR_11->type != VAR_6)
   return 0;






  if (VAR_11->smart_speed == VAR_8) {
   VAR_13 = FUNC_1(VAR_9, VAR_1,
        &VAR_14);
   if (VAR_13)
    return VAR_13;

   VAR_14 |= VAR_2;
   VAR_13 = FUNC_2(VAR_9, VAR_1,
        VAR_14);
   if (VAR_13)
    return VAR_13;
  } else if (VAR_11->smart_speed == VAR_7) {
   VAR_13 = FUNC_1(VAR_9, VAR_1,
        &VAR_14);
   if (VAR_13)
    return VAR_13;

   VAR_14 &= ~VAR_2;
   VAR_13 = FUNC_2(VAR_9, VAR_1,
        VAR_14);
   if (VAR_13)
    return VAR_13;
  }
 }

 return 0;
}
