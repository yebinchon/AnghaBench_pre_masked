
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct igc_hw {TYPE_1__ mac; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;

s32 FUNC_2(struct igc_hw *VAR_12, u16 *VAR_13,
        u16 *VAR_14)
{
 u32 VAR_15;

 VAR_15 = FUNC_1(VAR_2);
 if (VAR_15 & VAR_5) {




  if (VAR_12->mac.type == VAR_11 &&
      (VAR_15 & VAR_6)) {
   *VAR_13 = VAR_10;
   FUNC_0("2500 Mbs, ");
  } else {
   *VAR_13 = VAR_9;
   FUNC_0("1000 Mbs, ");
  }
 } else if (VAR_15 & VAR_4) {
  *VAR_13 = VAR_8;
  FUNC_0("100 Mbs, ");
 } else {
  *VAR_13 = VAR_7;
  FUNC_0("10 Mbs, ");
 }

 if (VAR_15 & VAR_3) {
  *VAR_14 = VAR_0;
  FUNC_0("Full Duplex\n");
 } else {
  *VAR_14 = VAR_1;
  FUNC_0("Half Duplex\n");
 }

 return 0;
}
