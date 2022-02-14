
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* caldata; } ;
struct ath9k_channel {int dummy; } ;
struct TYPE_2__ {int* caldac; int cal_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (struct ath_hw*,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*,int) ;
 int FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_hw*) ;
 int FUNC_10 (struct ath_hw*) ;
 int FUNC_11 (int ,char*) ;
 scalar_t__ FUNC_12 (int ,int *) ;

bool FUNC_13(struct ath_hw *VAR_5, struct ath9k_channel *VAR_6)
{
 bool VAR_7;

 if (!VAR_5->caldata)
  return 0;

 if (FUNC_12(VAR_4, &VAR_5->caldata->cal_flags)) {
  if (FUNC_1(VAR_6)){
   FUNC_2(VAR_5, FUNC_0(0),
          VAR_0,
          VAR_5->caldata->caldac[0]);
   FUNC_2(VAR_5, FUNC_0(1),
          VAR_0,
          VAR_5->caldata->caldac[1]);
  } else {
   FUNC_2(VAR_5, FUNC_0(0),
          VAR_1,
          VAR_5->caldata->caldac[0]);
   FUNC_2(VAR_5, FUNC_0(1),
          VAR_1,
          VAR_5->caldata->caldac[1]);
  }
  FUNC_2(VAR_5, FUNC_0(1),
         VAR_2, 0x1);
  FUNC_2(VAR_5, FUNC_0(0),
         VAR_2, 0x1);
 }

 if (!FUNC_12(VAR_3, &VAR_5->caldata->cal_flags))
  return 0;

 FUNC_4(VAR_5);

 if (FUNC_12(VAR_4, &VAR_5->caldata->cal_flags))
  FUNC_7(VAR_5, 0x30);
 else
  FUNC_7(VAR_5, 0x10);

 if (!FUNC_10(VAR_5)) {
  FUNC_11(FUNC_8(VAR_5), "Could not stop baseband\n");
  VAR_7 = 0;
  goto fail;
 }

 FUNC_6(VAR_5);
 VAR_7 = FUNC_5(VAR_5);

fail:
 FUNC_9(VAR_5);
 FUNC_3(VAR_5);
 return VAR_7;
}
