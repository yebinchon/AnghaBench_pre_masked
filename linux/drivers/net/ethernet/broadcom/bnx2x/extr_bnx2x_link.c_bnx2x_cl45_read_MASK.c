
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct bnx2x_phy {int flags; int addr; scalar_t__ mdio_ctrl; } ;
struct bnx2x {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct bnx2x*,scalar_t__) ;
 int FUNC_2 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int ) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,int ) ;
 int FUNC_5 (struct bnx2x*,int,scalar_t__) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct bnx2x *VAR_15, struct bnx2x_phy *VAR_16,
      u8 VAR_17, u16 VAR_18, u16 *VAR_19)
{
 u32 VAR_20;
 u16 VAR_21;
 int VAR_22 = 0;
 u32 VAR_23;
 if (VAR_16->flags & VAR_11) {
  VAR_23 = (FUNC_1(VAR_15, VAR_12) << 16) |
     ((FUNC_1(VAR_15, VAR_13) & 0xf) << 12);
  FUNC_5(VAR_15, VAR_23, VAR_16->mdio_ctrl);
 }

 if (VAR_16->flags & VAR_10)
  FUNC_4(VAR_15, VAR_16->mdio_ctrl + VAR_7,
         VAR_5);

 VAR_20 = ((VAR_16->addr << 21) | (VAR_17 << 16) | VAR_18 |
        VAR_1 |
        VAR_4);
 FUNC_2(VAR_15, VAR_16->mdio_ctrl + VAR_6, VAR_20);

 for (VAR_21 = 0; VAR_21 < 50; VAR_21++) {
  FUNC_7(10);

  VAR_20 = FUNC_1(VAR_15, VAR_16->mdio_ctrl + VAR_6);
  if (!(VAR_20 & VAR_4)) {
   FUNC_7(5);
   break;
  }
 }
 if (VAR_20 & VAR_4) {
  FUNC_0(VAR_14, "read phy register failed\n");
  FUNC_6(VAR_15->dev, "MDC/MDIO access timeout\n");
  *VAR_19 = 0;
  VAR_22 = -VAR_0;
 } else {

  VAR_20 = ((VAR_16->addr << 21) | (VAR_17 << 16) |
         VAR_2 |
         VAR_4);
  FUNC_2(VAR_15, VAR_16->mdio_ctrl + VAR_6, VAR_20);

  for (VAR_21 = 0; VAR_21 < 50; VAR_21++) {
   FUNC_7(10);

   VAR_20 = FUNC_1(VAR_15, VAR_16->mdio_ctrl +
         VAR_6);
   if (!(VAR_20 & VAR_4)) {
    *VAR_19 = (u16)(VAR_20 & VAR_3);
    break;
   }
  }
  if (VAR_20 & VAR_4) {
   FUNC_0(VAR_14, "read phy register failed\n");
   FUNC_6(VAR_15->dev, "MDC/MDIO access timeout\n");
   *VAR_19 = 0;
   VAR_22 = -VAR_0;
  }
 }

 if (VAR_16->flags & VAR_9) {
  VAR_16->flags ^= VAR_8;
  if (VAR_16->flags & VAR_8) {
   u16 VAR_24;
   FUNC_8(VAR_15, VAR_16, VAR_17, 0xf, &VAR_24);
  }
 }

 if (VAR_16->flags & VAR_10)
  FUNC_3(VAR_15, VAR_16->mdio_ctrl + VAR_7,
          VAR_5);
 return VAR_22;
}
