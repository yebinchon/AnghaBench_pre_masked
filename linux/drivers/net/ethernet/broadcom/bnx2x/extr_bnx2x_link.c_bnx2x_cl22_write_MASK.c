
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bnx2x_phy {int addr; scalar_t__ mdio_ctrl; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_7,
           struct bnx2x_phy *VAR_8,
           u16 VAR_9, u16 VAR_10)
{
 u32 VAR_11, VAR_12;
 u8 VAR_13;
 int VAR_14 = 0;

 VAR_12 = FUNC_1(VAR_7, VAR_8->mdio_ctrl + VAR_5);
 FUNC_2(VAR_7, VAR_8->mdio_ctrl + VAR_5,
        VAR_12 & ~VAR_3);


 VAR_11 = ((VAR_8->addr << 21) | (VAR_9 << 16) | VAR_10 |
        VAR_1 |
        VAR_2);
 FUNC_2(VAR_7, VAR_8->mdio_ctrl + VAR_4, VAR_11);

 for (VAR_13 = 0; VAR_13 < 50; VAR_13++) {
  FUNC_3(10);

  VAR_11 = FUNC_1(VAR_7, VAR_8->mdio_ctrl + VAR_4);
  if (!(VAR_11 & VAR_2)) {
   FUNC_3(5);
   break;
  }
 }
 if (VAR_11 & VAR_2) {
  FUNC_0(VAR_6, "write phy register failed\n");
  VAR_14 = -VAR_0;
 }
 FUNC_2(VAR_7, VAR_8->mdio_ctrl + VAR_5, VAR_12);
 return VAR_14;
}
