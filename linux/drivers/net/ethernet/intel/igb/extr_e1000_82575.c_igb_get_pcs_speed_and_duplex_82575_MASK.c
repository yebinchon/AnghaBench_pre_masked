
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_mac_info {int serdes_has_link; scalar_t__ type; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_16, u16 *VAR_17,
      u16 *VAR_18)
{
 struct e1000_mac_info *VAR_19 = &VAR_16->mac;
 u32 VAR_20, VAR_21;


 VAR_19->serdes_has_link = 0;
 *VAR_17 = 0;
 *VAR_18 = 0;





 VAR_20 = FUNC_1(VAR_0);





 if ((VAR_20 & VAR_2) && (VAR_20 & VAR_5)) {
  VAR_19->serdes_has_link = 1;


  if (VAR_20 & VAR_4)
   *VAR_17 = VAR_13;
  else if (VAR_20 & VAR_3)
   *VAR_17 = VAR_12;
  else
   *VAR_17 = VAR_11;


  if (VAR_20 & VAR_1)
   *VAR_18 = VAR_9;
  else
   *VAR_18 = VAR_10;


  if (VAR_19->type == VAR_15) {
   VAR_21 = FUNC_1(VAR_6);
   if ((VAR_21 & VAR_7) &&
       !(VAR_21 & VAR_8)) {
    *VAR_17 = VAR_14;
    *VAR_18 = VAR_9;
    FUNC_0("2500 Mbs, ");
    FUNC_0("Full Duplex\n");
   }
  }

 }

 return 0;
}
