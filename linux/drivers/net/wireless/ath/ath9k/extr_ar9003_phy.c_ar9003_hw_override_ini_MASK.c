
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {scalar_t__ is_clk_25mhz; int enabled_cals; } ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*,int ) ;
 scalar_t__ FUNC_7 (struct ath_hw*,int ,int ) ;
 int FUNC_8 (struct ath_hw*,int ,int) ;
 int FUNC_9 (struct ath_hw*,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ath_hw *VAR_19)
{
 u32 VAR_20;






 FUNC_8(VAR_19, VAR_5, (VAR_4 | VAR_3));
 VAR_20 = FUNC_6(VAR_19, VAR_8) & (~VAR_0);
 VAR_20 |= VAR_2 |
        VAR_1 |
        VAR_9;
 FUNC_9(VAR_19, VAR_8, VAR_20);

 if (FUNC_1(VAR_19) || FUNC_5(VAR_19)) {
  FUNC_9(VAR_19, VAR_7,
     VAR_6);

  if (FUNC_7(VAR_19, VAR_12,
       VAR_13))
   VAR_19->enabled_cals |= VAR_18;
  else
   VAR_19->enabled_cals &= ~VAR_18;

 }

 if (FUNC_6(VAR_19, VAR_10) & VAR_11)
  VAR_19->enabled_cals |= VAR_17;
 else
  VAR_19->enabled_cals &= ~VAR_17;

 if (FUNC_0(VAR_19) || FUNC_2(VAR_19) || FUNC_3(VAR_19) ||
     FUNC_4(VAR_19)) {
  if (VAR_19->is_clk_25mhz) {
   FUNC_9(VAR_19, VAR_14, 0x17c << 1);
   FUNC_9(VAR_19, VAR_16, 0x0010f3d7);
   FUNC_9(VAR_19, VAR_15, 0x0001e7ae);
  } else {
   FUNC_9(VAR_19, VAR_14, 0x261 << 1);
   FUNC_9(VAR_19, VAR_16, 0x0010f400);
   FUNC_9(VAR_19, VAR_15, 0x0001e800);
  }
  FUNC_10(100);
 }
}
