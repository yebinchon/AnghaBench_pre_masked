
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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 scalar_t__ FUNC_3 (struct ath9k_channel*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int) ;
 int FUNC_7 (struct ath_hw*,struct ath9k_channel*) ;

__attribute__((used)) static void FUNC_8(struct ath_hw *VAR_12,
           struct ath9k_channel *VAR_13)
{
 u32 VAR_14;
 u32 VAR_15 = 0;

 if (FUNC_0(VAR_12))
  VAR_15 = (FUNC_5(VAR_12, VAR_11) &
      VAR_6);

 VAR_14 = VAR_7 | VAR_8
  | VAR_9 | VAR_10 | VAR_15;

 if (FUNC_2(VAR_13)) {
  VAR_14 |= VAR_4;

  if (FUNC_3(VAR_13))
   VAR_14 |= VAR_5;

 }
 FUNC_1(VAR_12);
 FUNC_6(VAR_12, VAR_11, VAR_14);



 FUNC_7(VAR_12, VAR_13);

 FUNC_6(VAR_12, VAR_2, 25 << VAR_3);
 FUNC_6(VAR_12, VAR_0, 0xF << VAR_1);

 FUNC_4(VAR_12);
}
