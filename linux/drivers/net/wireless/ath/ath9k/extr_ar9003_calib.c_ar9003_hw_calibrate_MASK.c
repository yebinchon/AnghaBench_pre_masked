
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_hw {int curchan; struct ath9k_cal_list* cal_list_curr; } ;
struct ath9k_channel {int dummy; } ;
struct ath9k_cal_list {scalar_t__ calState; struct ath9k_cal_list* calNext; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ath_hw*,struct ath9k_channel*,int ,struct ath9k_cal_list*) ;
 scalar_t__ FUNC_1 (struct ath_hw*,struct ath9k_channel*) ;
 int FUNC_2 (struct ath_hw*,int ) ;
 int FUNC_3 (struct ath_hw*,struct ath9k_cal_list*) ;
 int FUNC_4 (struct ath_hw*,int) ;

__attribute__((used)) static int FUNC_5(struct ath_hw *VAR_2, struct ath9k_channel *VAR_3,
          u8 VAR_4, bool VAR_5)
{
 bool VAR_6 = 1;
 struct ath9k_cal_list *VAR_7 = VAR_2->cal_list_curr;
 int VAR_8;
 if (VAR_7 &&
     (VAR_7->calState == VAR_0 ||
      VAR_7->calState == VAR_1)) {
  VAR_6 = FUNC_0(VAR_2, VAR_3,
            VAR_4, VAR_7);
  if (VAR_6) {
   VAR_2->cal_list_curr = VAR_7 = VAR_7->calNext;

   if (VAR_7->calState == VAR_1) {
    VAR_6 = 0;
    FUNC_3(VAR_2, VAR_7);
   }
  }
 }





 if (VAR_5 && FUNC_1(VAR_2, VAR_3)) {





  VAR_8 = FUNC_2(VAR_2, VAR_2->curchan);
  if (VAR_8 < 0)
   return VAR_8;


  FUNC_4(VAR_2, 0);
 }

 return VAR_6;
}
