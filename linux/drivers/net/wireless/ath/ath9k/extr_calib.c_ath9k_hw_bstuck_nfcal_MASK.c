
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int curchan; struct ath9k_hw_cal_data* caldata; } ;
struct ath9k_hw_cal_data {int cal_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct ath_hw *VAR_4)
{
 struct ath9k_hw_cal_data *VAR_5 = VAR_4->caldata;

 if (FUNC_5(!VAR_5))
  return;
 if (!FUNC_4(VAR_3, &VAR_5->cal_flags))
  FUNC_2(VAR_4, 1);
 else if (!(FUNC_0(VAR_4, VAR_0) & VAR_1))
  FUNC_1(VAR_4, VAR_4->curchan);

 FUNC_3(VAR_2, &VAR_5->cal_flags);
}
