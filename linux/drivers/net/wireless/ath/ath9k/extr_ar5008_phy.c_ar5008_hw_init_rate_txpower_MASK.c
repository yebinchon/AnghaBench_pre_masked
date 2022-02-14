
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 scalar_t__ FUNC_2 (struct ath9k_channel*) ;
 int FUNC_3 (struct ath_hw*,int *) ;
 int FUNC_4 (struct ath_hw*,int *,int ,int ,scalar_t__,int) ;
 int FUNC_5 (struct ath_hw*,int *,int ) ;

void FUNC_6(struct ath_hw *VAR_6, int16_t *VAR_7,
     struct ath9k_channel *VAR_8, int VAR_9)
{
 if (FUNC_0(VAR_8)) {
  FUNC_5(VAR_6, VAR_7,
         VAR_2);
  if (FUNC_1(VAR_8) || FUNC_2(VAR_8)) {
   FUNC_4(VAR_6, VAR_7,
        VAR_1,
        VAR_0,
        FUNC_2(VAR_8),
        VAR_9);
  }
 } else {
  FUNC_3(VAR_6, VAR_7);
  FUNC_5(VAR_6, VAR_7,
         VAR_5);
  if (FUNC_1(VAR_8) || FUNC_2(VAR_8)) {
   FUNC_4(VAR_6, VAR_7,
        VAR_4,
        VAR_3,
        FUNC_2(VAR_8),
        VAR_9);
  }
 }
}
