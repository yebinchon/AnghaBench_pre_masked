
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_phy_info {int addr; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
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
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

s32 FUNC_4(struct e1000_hw *VAR_9, u32 VAR_10, u16 VAR_11)
{
 struct e1000_phy_info *VAR_12 = &VAR_9->phy;
 u32 VAR_13, VAR_14 = 0;
 u16 VAR_15;


 if ((VAR_9->phy.addr == 0) || (VAR_9->phy.addr > 7)) {
  FUNC_0("PHY I2C Address %d is out of range.\n",
     VAR_9->phy.addr);
  return -VAR_0;
 }


 VAR_15 = ((VAR_11 >> 8) & 0x00FF) | ((VAR_11 << 8) & 0xFF00);





 VAR_14 = ((VAR_10 << VAR_8) |
    (VAR_12->addr << VAR_5) |
    VAR_4 |
    VAR_15);

 FUNC_3(VAR_2, VAR_14);


 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  FUNC_2(50);
  VAR_14 = FUNC_1(VAR_2);
  if (VAR_14 & VAR_7)
   break;
 }
 if (!(VAR_14 & VAR_7)) {
  FUNC_0("I2CCMD Write did not complete\n");
  return -VAR_1;
 }
 if (VAR_14 & VAR_3) {
  FUNC_0("I2CCMD Error bit set\n");
  return -VAR_1;
 }

 return 0;
}
