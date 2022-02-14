
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ lanes; } ;
struct sun6i_dphy {int regs; TYPE_1__ config; } ;
struct phy {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int) ;
 int VAR_17 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int VAR_18 ;
 int FUNC_16 (scalar_t__) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int VAR_22 ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int VAR_23 ;
 int FUNC_24 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_25 (int) ;
 int FUNC_26 (int) ;
 int VAR_26 ;
 struct sun6i_dphy* FUNC_27 (struct phy*) ;
 int FUNC_28 (int ,int ,int,int) ;
 int FUNC_29 (int ,int ,int) ;
 int FUNC_30 (int) ;

__attribute__((used)) static int FUNC_31(struct phy *VAR_27)
{
 struct sun6i_dphy *VAR_28 = FUNC_27(VAR_27);
 u8 VAR_29 = FUNC_0(VAR_28->config.lanes - 1, 0);

 FUNC_29(VAR_28->regs, VAR_21,
       VAR_20);

 FUNC_29(VAR_28->regs, VAR_22,
       FUNC_19(14) |
       FUNC_17(6) |
       FUNC_18(10));

 FUNC_29(VAR_28->regs, VAR_23,
       FUNC_22(7) |
       FUNC_23(50) |
       FUNC_21(3) |
       FUNC_20(10));

 FUNC_29(VAR_28->regs, VAR_24,
       FUNC_24(30));

 FUNC_29(VAR_28->regs, VAR_25, 0);

 FUNC_29(VAR_28->regs, VAR_26,
       FUNC_25(3) |
       FUNC_26(3));

 FUNC_29(VAR_28->regs, VAR_19,
       FUNC_16(VAR_28->config.lanes) |
       VAR_18);

 FUNC_29(VAR_28->regs, VAR_0,
       VAR_2 |
       VAR_1 |
       FUNC_3(7) |
       FUNC_2(VAR_29) |
       FUNC_1(VAR_29));

 FUNC_29(VAR_28->regs, VAR_3,
       FUNC_4(1) |
       FUNC_5(7));

 FUNC_29(VAR_28->regs, VAR_16,
       FUNC_8(1) |
       FUNC_10(1) |
       FUNC_11(1) |
       FUNC_12(1) |
       FUNC_13(1) |
       FUNC_14(1) |
       FUNC_15(1) |
       VAR_17 |
       FUNC_9(VAR_29));

 FUNC_29(VAR_28->regs, VAR_7,
       VAR_8);
 FUNC_30(5);

 FUNC_29(VAR_28->regs, VAR_15,
       VAR_12 |
       VAR_10 |
       VAR_11);
 FUNC_30(1);

 FUNC_28(VAR_28->regs, VAR_15,
      VAR_13 |
      VAR_14,
      VAR_13 |
      FUNC_7(VAR_29));
 FUNC_30(1);

 FUNC_28(VAR_28->regs, VAR_15,
      VAR_9,
      VAR_9);
 FUNC_30(1);

 FUNC_28(VAR_28->regs, VAR_7,
      VAR_5,
      VAR_5);
 FUNC_30(1);

 FUNC_28(VAR_28->regs, VAR_3,
      VAR_4,
      VAR_4);

 FUNC_28(VAR_28->regs, VAR_7,
      VAR_6,
      FUNC_6(VAR_29));

 return 0;
}
