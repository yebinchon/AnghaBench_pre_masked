
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ mac_type; scalar_t__ media_type; int phy_reset_disable; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_8)
{
 s32 VAR_9;
 u16 VAR_10;

 if ((VAR_8->mac_type == VAR_6) &&
     (VAR_8->media_type == VAR_7)) {
  VAR_9 =
      FUNC_0(VAR_8, VAR_2, 1,
          &VAR_10);
  if (VAR_9)
   return VAR_9;

  if ((VAR_10 != VAR_3) &&
      (VAR_10 & VAR_1)) {
   VAR_9 =
       FUNC_1(VAR_8, VAR_5,
      0x000B);
   if (VAR_9)
    return VAR_9;
   VAR_9 =
       FUNC_1(VAR_8, VAR_4,
      0x8104);
   if (VAR_9)
    return VAR_9;

   VAR_8->phy_reset_disable = 0;
  }
 }

 return VAR_0;
}
