
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ phy; TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_8)
{
 s32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11;

 FUNC_3(VAR_8);


 if (VAR_8->mac.type >= VAR_5) {
  FUNC_0(VAR_8);
 } else {
  VAR_9 = FUNC_2(VAR_8);
  if (VAR_9) {




   FUNC_5("Auto Read Done did not complete\n");
   VAR_9 = 0;
  }
 }


 VAR_11 = FUNC_6(VAR_4);
 if (VAR_11 & VAR_2)
  FUNC_7(VAR_4, VAR_11 & ~VAR_2);
 else
  FUNC_5("PHY Reset Asserted not set - needs delay\n");


 if (VAR_8->mac.type <= VAR_6) {
  if (!(FUNC_6(VAR_3) & VAR_0) &&
      (VAR_8->phy.type == VAR_7)) {
   FUNC_4(VAR_8);
  }
 } else {
  if (FUNC_1(VAR_8, &VAR_10)) {

   FUNC_5("EEPROM not present\n");
   VAR_9 = -VAR_1;
  }
 }

 return VAR_9;
}
