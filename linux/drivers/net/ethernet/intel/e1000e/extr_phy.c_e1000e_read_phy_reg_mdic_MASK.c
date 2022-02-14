
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_phy_info {int addr; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; struct e1000_phy_info phy; } ;
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
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

s32 FUNC_4(struct e1000_hw *VAR_12, u32 VAR_13, u16 *VAR_14)
{
 struct e1000_phy_info *VAR_15 = &VAR_12->phy;
 u32 VAR_16, VAR_17 = 0;

 if (VAR_13 > VAR_9) {
  FUNC_0("PHY Address %d is out of range\n", VAR_13);
  return -VAR_0;
 }





 VAR_17 = ((VAR_13 << VAR_8) |
  (VAR_15->addr << VAR_5) |
  (VAR_4));

 FUNC_2(VAR_10, VAR_17);





 for (VAR_16 = 0; VAR_16 < (VAR_2 * 3); VAR_16++) {
  FUNC_3(50);
  VAR_17 = FUNC_1(VAR_10);
  if (VAR_17 & VAR_6)
   break;
 }
 if (!(VAR_17 & VAR_6)) {
  FUNC_0("MDI Read did not complete\n");
  return -VAR_1;
 }
 if (VAR_17 & VAR_3) {
  FUNC_0("MDI Error\n");
  return -VAR_1;
 }
 if (((VAR_17 & VAR_7) >> VAR_8) != VAR_13) {
  FUNC_0("MDI Read offset error - requested %d, returned %d\n",
        VAR_13,
        (VAR_17 & VAR_7) >> VAR_8);
  return -VAR_1;
 }
 *VAR_14 = (u16)VAR_17;




 if (VAR_12->mac.type == VAR_11)
  FUNC_3(100);

 return 0;
}
