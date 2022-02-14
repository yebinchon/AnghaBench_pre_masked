
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct chan_centers {scalar_t__ synth_center; scalar_t__ ctl_center; } ;
struct cal_target_power_ht {scalar_t__ bChannel; scalar_t__* tPow2x; } ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct ath_hw*,struct ath9k_channel*,struct chan_centers*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_4(struct ath_hw *VAR_1,
    struct ath9k_channel *VAR_2,
    struct cal_target_power_ht *VAR_3,
    u16 VAR_4,
    struct cal_target_power_ht *VAR_5,
    u16 VAR_6, bool VAR_7)
{
 struct chan_centers VAR_8;
 u16 VAR_9, VAR_10;
 int VAR_11;
 int VAR_12 = -1, VAR_13 = -1;
 u16 VAR_14;

 FUNC_2(VAR_1, VAR_2, &VAR_8);
 VAR_14 = VAR_7 ? VAR_8.synth_center : VAR_8.ctl_center;

 if (VAR_14 <= FUNC_1(VAR_3[0].bChannel, FUNC_0(VAR_2))) {
  VAR_12 = 0;
 } else {
  for (VAR_11 = 0; (VAR_11 < VAR_4) &&
        (VAR_3[VAR_11].bChannel != VAR_0); VAR_11++) {
   if (VAR_14 == FUNC_1(VAR_3[VAR_11].bChannel,
             FUNC_0(VAR_2))) {
    VAR_12 = VAR_11;
    break;
   } else
    if (VAR_14 < FUNC_1(VAR_3[VAR_11].bChannel,
      FUNC_0(VAR_2)) && VAR_11 > 0 &&
        VAR_14 > FUNC_1(VAR_3[VAR_11 - 1].bChannel,
      FUNC_0(VAR_2))) {
     VAR_13 = VAR_11 - 1;
     break;
    }
  }
  if ((VAR_12 == -1) && (VAR_13 == -1))
   VAR_12 = VAR_11 - 1;
 }

 if (VAR_12 != -1) {
  *VAR_5 = VAR_3[VAR_12];
 } else {
  VAR_9 = FUNC_1(VAR_3[VAR_13].bChannel,
      FUNC_0(VAR_2));
  VAR_10 = FUNC_1(VAR_3[VAR_13 + 1].bChannel,
      FUNC_0(VAR_2));

  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
   VAR_5->tPow2x[VAR_11] = (u8)FUNC_3(VAR_14,
      VAR_9, VAR_10,
      VAR_3[VAR_13].tPow2x[VAR_11],
      VAR_3[VAR_13 + 1].tPow2x[VAR_11]);
  }
 }
}
