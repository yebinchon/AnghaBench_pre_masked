
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_caps; } ;
struct ath_hw {int rxchainmask; TYPE_1__ caps; struct ath9k_hw_cal_data* caldata; } ;
struct ath9k_hw_cal_data {void** caldac; int cal_flags; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 void* FUNC_2 (struct ath_hw*,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct ath_hw*,int,scalar_t__) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_5,
            struct ath9k_channel *VAR_6,
            bool VAR_7)
{
 struct ath9k_hw_cal_data *VAR_8 = VAR_5->caldata;
 int VAR_9;

 if ((VAR_5->caps.hw_caps & VAR_3) && !VAR_7)
  return;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (!(VAR_5->rxchainmask & (1 << VAR_9)))
   continue;
  FUNC_3(VAR_5, VAR_9, FUNC_1(VAR_6));
 }

 if (VAR_8)
  FUNC_4(VAR_4, &VAR_8->cal_flags);

 if ((VAR_5->caps.hw_caps & VAR_3) && VAR_8) {
  if (FUNC_1(VAR_6)){
   VAR_8->caldac[0] = FUNC_2(VAR_5,
          FUNC_0(0),
          VAR_1);
   VAR_8->caldac[1] = FUNC_2(VAR_5,
          FUNC_0(1),
          VAR_1);
  } else {
   VAR_8->caldac[0] = FUNC_2(VAR_5,
          FUNC_0(0),
          VAR_2);
   VAR_8->caldac[1] = FUNC_2(VAR_5,
          FUNC_0(1),
          VAR_2);
  }
 }
}
