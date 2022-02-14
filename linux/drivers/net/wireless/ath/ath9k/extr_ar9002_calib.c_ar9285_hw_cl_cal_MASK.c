
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int ,int ,int ,int) ;
 int FUNC_5 (struct ath_common*,int ,char*,int) ;

__attribute__((used)) static bool FUNC_6(struct ath_hw *VAR_14, struct ath9k_channel *VAR_15)
{
 struct ath_common *VAR_16 = FUNC_3(VAR_14);

 FUNC_2(VAR_14, VAR_6, VAR_7);
 if (FUNC_0(VAR_15)) {
  FUNC_2(VAR_14, VAR_6, VAR_9);
  FUNC_2(VAR_14, VAR_12, VAR_8);
  FUNC_1(VAR_14, VAR_3,
       VAR_5);
  FUNC_1(VAR_14, VAR_10, VAR_11);
  FUNC_2(VAR_14, VAR_3, VAR_4);
  if (!FUNC_4(VAR_14, VAR_3,
      VAR_4, 0, VAR_0)) {
   FUNC_5(VAR_16, VAR_13,
    "offset calibration failed to complete in %d ms; noisy environment?\n",
    VAR_0 / 1000);
   return 0;
  }
  FUNC_1(VAR_14, VAR_12, VAR_8);
  FUNC_1(VAR_14, VAR_6, VAR_9);
  FUNC_1(VAR_14, VAR_6, VAR_7);
 }
 FUNC_1(VAR_14, VAR_1, VAR_2);
 FUNC_2(VAR_14, VAR_3, VAR_5);
 FUNC_2(VAR_14, VAR_10, VAR_11);
 FUNC_2(VAR_14, VAR_3, VAR_4);
 if (!FUNC_4(VAR_14, VAR_3, VAR_4,
     0, VAR_0)) {
  FUNC_5(VAR_16, VAR_13,
   "offset calibration failed to complete in %d ms; noisy environment?\n",
   VAR_0 / 1000);
  return 0;
 }

 FUNC_2(VAR_14, VAR_1, VAR_2);
 FUNC_1(VAR_14, VAR_6, VAR_7);
 FUNC_1(VAR_14, VAR_3, VAR_5);

 return 1;
}
