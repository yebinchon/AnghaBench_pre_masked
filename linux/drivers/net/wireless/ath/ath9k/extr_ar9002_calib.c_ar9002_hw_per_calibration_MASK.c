
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath_hw {scalar_t__ cal_samples; struct ath9k_hw_cal_data* caldata; } ;
struct ath9k_hw_cal_data {int CalValid; } ;
struct ath9k_channel {int dummy; } ;
struct ath9k_cal_list {scalar_t__ calState; TYPE_1__* calData; } ;
struct TYPE_2__ {scalar_t__ calNumSamples; int calType; int (* calPostProc ) (struct ath_hw*,int) ;int (* calCollect ) (struct ath_hw*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,struct ath9k_cal_list*) ;
 int FUNC_3 (struct ath_hw*,struct ath9k_cal_list*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,int) ;

__attribute__((used)) static bool FUNC_6(struct ath_hw *VAR_4,
          struct ath9k_channel *VAR_5,
          u8 VAR_6,
          struct ath9k_cal_list *VAR_7)
{
 struct ath9k_hw_cal_data *VAR_8 = VAR_4->caldata;
 bool VAR_9 = 0;

 if (VAR_7->calState == VAR_3) {
  if (!(FUNC_1(VAR_4, FUNC_0(0)) &
        VAR_1)) {

   VAR_7->calData->calCollect(VAR_4);
   VAR_4->cal_samples++;

   if (VAR_4->cal_samples >=
       VAR_7->calData->calNumSamples) {
    int VAR_10, VAR_11 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
     if (VAR_6 & (1 << VAR_10))
      VAR_11++;
    }

    VAR_7->calData->calPostProc(VAR_4, VAR_11);
    VAR_8->CalValid |= VAR_7->calData->calType;
    VAR_7->calState = VAR_2;
    VAR_9 = 1;
   } else {
    FUNC_2(VAR_4, VAR_7);
   }
  }
 } else if (!(VAR_8->CalValid & VAR_7->calData->calType)) {
  FUNC_3(VAR_4, VAR_7);
 }

 return VAR_9;
}
