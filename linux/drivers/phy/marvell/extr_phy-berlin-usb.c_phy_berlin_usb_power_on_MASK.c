
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_berlin_usb_priv {int pll_divider; scalar_t__ base; int rst_ctrl; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_10 (int) ;
 struct phy_berlin_usb_priv* FUNC_11 (struct phy*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct phy *VAR_21)
{
 struct phy_berlin_usb_priv *VAR_22 = FUNC_11(VAR_21);

 FUNC_12(VAR_22->rst_ctrl);

 FUNC_13(VAR_22->pll_divider,
        VAR_22->base + VAR_15);
 FUNC_13(VAR_2 | VAR_10 | VAR_9 | VAR_7 |
        VAR_1, VAR_22->base + VAR_16);
 FUNC_13(FUNC_10(0x5) | VAR_11 | FUNC_0(0x5),
        VAR_22->base + VAR_14);
 FUNC_13(VAR_8 | VAR_0 | VAR_12 |
        VAR_3 | FUNC_7(0xa) | FUNC_6(0x2) |
        VAR_6, VAR_22->base + VAR_17);

 FUNC_13(VAR_13 | FUNC_9(0x3), VAR_22->base + VAR_19);
 FUNC_13(VAR_4 | FUNC_5(0x3) | FUNC_3(0x4),
        VAR_22->base + VAR_18);

 FUNC_13(VAR_4 | FUNC_5(0x3) | FUNC_3(0x4) |
        FUNC_2(0x2), VAR_22->base + VAR_18);

 FUNC_13(VAR_4 | FUNC_5(0x3) | FUNC_3(0x4),
        VAR_22->base + VAR_18);
 FUNC_13(FUNC_8(0xf) | FUNC_1(0x3) | VAR_5 |
        FUNC_4(0xd), VAR_22->base + VAR_20);

 return 0;
}
