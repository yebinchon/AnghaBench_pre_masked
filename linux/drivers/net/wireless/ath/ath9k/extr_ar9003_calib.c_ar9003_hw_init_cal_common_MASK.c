
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int * cal_list_curr; int * cal_list; int iq_caldata; int * cal_list_last; struct ath9k_hw_cal_data* caldata; } ;
struct ath9k_hw_cal_data {scalar_t__ CalValid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ath_hw*,int *) ;
 int FUNC_2 (struct ath_hw*,int *) ;

__attribute__((used)) static void FUNC_3(struct ath_hw *VAR_0)
{
 struct ath9k_hw_cal_data *VAR_1 = VAR_0->caldata;


 VAR_0->cal_list = VAR_0->cal_list_last = VAR_0->cal_list_curr = ((void*)0);

 FUNC_0(&VAR_0->iq_caldata);
 FUNC_1(VAR_0, &VAR_0->iq_caldata);


 VAR_0->cal_list_curr = VAR_0->cal_list;

 if (VAR_0->cal_list_curr)
  FUNC_2(VAR_0, VAR_0->cal_list_curr);

 if (VAR_1)
  VAR_1->CalValid = 0;
}
