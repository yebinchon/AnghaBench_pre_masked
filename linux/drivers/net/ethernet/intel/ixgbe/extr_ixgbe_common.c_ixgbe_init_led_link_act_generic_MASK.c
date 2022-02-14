
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_mac_info {int led_link_act; int type; } ;
struct ixgbe_hw {struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;



s32 FUNC_2(struct ixgbe_hw *VAR_3)
{
 struct ixgbe_mac_info *VAR_4 = &VAR_3->mac;
 u32 VAR_5, VAR_6;
 u16 VAR_7;

 VAR_5 = FUNC_1(VAR_3, VAR_0);


 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  VAR_6 = VAR_5 >> FUNC_0(VAR_7);

  if ((VAR_6 & VAR_2) ==
      VAR_1) {
   VAR_4->led_link_act = VAR_7;
   return 0;
  }
 }




 switch (VAR_3->mac.type) {
 case 128:
  VAR_4->led_link_act = 0;
  break;
 case 129:
  VAR_4->led_link_act = 1;
  break;
 default:
  VAR_4->led_link_act = 2;
 }

 return 0;
}
