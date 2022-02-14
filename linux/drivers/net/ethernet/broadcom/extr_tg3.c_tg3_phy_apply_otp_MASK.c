
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int phy_otp; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_0 (struct tg3*,int) ;
 int FUNC_1 (struct tg3*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_24)
{
 u32 VAR_25, VAR_26;

 if (!VAR_24->phy_otp)
  return;

 VAR_25 = VAR_24->phy_otp;

 if (FUNC_0(VAR_24, 1))
  return;

 VAR_26 = ((VAR_25 & VAR_10) >> VAR_11);
 VAR_26 |= VAR_7;
 FUNC_1(VAR_24, VAR_6, VAR_26);

 VAR_26 = ((VAR_25 & VAR_12) >> VAR_13) |
       ((VAR_25 & VAR_14) >> VAR_15);
 FUNC_1(VAR_24, VAR_0, VAR_26);

 VAR_26 = ((VAR_25 & VAR_16) >> VAR_17);
 VAR_26 |= VAR_2;
 FUNC_1(VAR_24, VAR_1, VAR_26);

 VAR_26 = ((VAR_25 & VAR_22) >> VAR_23);
 FUNC_1(VAR_24, VAR_3, VAR_26);

 VAR_26 = ((VAR_25 & VAR_8) >> VAR_9);
 FUNC_1(VAR_24, VAR_4, VAR_26);

 VAR_26 = ((VAR_25 & VAR_20) >> VAR_21) |
       ((VAR_25 & VAR_18) >> VAR_19);
 FUNC_1(VAR_24, VAR_5, VAR_26);

 FUNC_0(VAR_24, 0);
}
