
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int) ;
 int FUNC_6 (struct ath_hw*,int ,int) ;
 int FUNC_7 (struct ath_hw*,int,int) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_10,
       struct ath9k_channel *VAR_11)
{
 u32 VAR_12;






 FUNC_6(VAR_10, VAR_3, (VAR_2 | VAR_1));

 if (FUNC_3(VAR_10)) {







  VAR_12 = FUNC_5(VAR_10, VAR_4) &
   (~VAR_0);

  if (!FUNC_2(VAR_10))
   VAR_12 &= ~VAR_6;

  if (FUNC_4(VAR_10))
   VAR_12 = VAR_12 & (~VAR_7);

  VAR_12 |= VAR_5;

  FUNC_7(VAR_10, VAR_4, VAR_12);
 }

 if (FUNC_3(VAR_10))
  return;




 FUNC_7(VAR_10, 0x9800 + (651 << 2), 0x11);





 if (FUNC_0(VAR_10) || FUNC_1(VAR_10)) {
  VAR_12 = FUNC_5(VAR_10, VAR_8);
  VAR_12 &= ~VAR_9;
  FUNC_7(VAR_10, VAR_8, VAR_12);
 }
}
