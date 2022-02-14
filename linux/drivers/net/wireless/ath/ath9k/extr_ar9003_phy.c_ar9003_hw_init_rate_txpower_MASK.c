
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 int FUNC_3 (struct ath_hw*,int *) ;
 int FUNC_4 (struct ath_hw*,int *,int ,int ,int ,scalar_t__) ;
 int FUNC_5 (struct ath_hw*,int *,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int ,int ) ;

void FUNC_7(struct ath_hw *VAR_8, u8 *VAR_9,
     struct ath9k_channel *VAR_10)
{
 if (FUNC_0(VAR_10)) {
  FUNC_5(VAR_8, VAR_9,
         VAR_3);
  if (FUNC_1(VAR_10) || FUNC_2(VAR_10)) {
   FUNC_4(VAR_8, VAR_9,
        VAR_1,
        VAR_0,
        VAR_2,
        FUNC_2(VAR_10));
   FUNC_6(VAR_8,
          VAR_1,
          VAR_0,
          VAR_2);
  }
 } else {
  FUNC_3(VAR_8, VAR_9);
  FUNC_5(VAR_8, VAR_9,
         VAR_7);
  if (FUNC_1(VAR_10) || FUNC_2(VAR_10)) {
   FUNC_4(VAR_8, VAR_9,
        VAR_5,
        VAR_4,
        VAR_6,
        FUNC_2(VAR_10));
   FUNC_6(VAR_8,
          VAR_5,
          VAR_4,
          VAR_6);
  }
 }
}
