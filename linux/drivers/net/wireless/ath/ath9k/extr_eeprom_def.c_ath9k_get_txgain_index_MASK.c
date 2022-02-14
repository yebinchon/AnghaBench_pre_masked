
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct chan_centers {int synth_center; } ;
struct calDataPerFreqOpLoop {scalar_t__** pcdac; scalar_t__** pwrPdg; } ;
struct ath_hw {scalar_t__* originalGain; } ;
struct ath9k_channel {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (struct ath_hw*,struct ath9k_channel*,struct chan_centers*) ;
 int FUNC_3 (scalar_t__,scalar_t__*,size_t,size_t*,size_t*) ;

__attribute__((used)) static void FUNC_4(struct ath_hw *VAR_2,
  struct ath9k_channel *VAR_3,
  struct calDataPerFreqOpLoop *VAR_4,
  u8 *VAR_5, u16 VAR_6, u8 *VAR_7, u8 *VAR_8)
{
 u8 VAR_9, VAR_10 = 0;
 u16 VAR_11 = 0, VAR_12 = 0, VAR_13;
 bool VAR_14;
 struct chan_centers VAR_15;

 FUNC_2(VAR_2, VAR_3, &VAR_15);

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
  if (VAR_5[VAR_13] == VAR_0)
   break;

 VAR_14 = FUNC_3(
   (u8)FUNC_0(VAR_15.synth_center, FUNC_1(VAR_3)),
   VAR_5, VAR_13, &VAR_11, &VAR_12);
 if (VAR_14) {
  VAR_9 = VAR_4[VAR_11].pcdac[0][0];
  *VAR_7 = VAR_4[VAR_11].pwrPdg[0][0];
 } else {
  VAR_9 = VAR_4[VAR_12].pcdac[0][0];
  *VAR_7 = (VAR_4[VAR_11].pwrPdg[0][0] +
    VAR_4[VAR_12].pwrPdg[0][0])/2;
 }

 while (VAR_9 > VAR_2->originalGain[VAR_10] &&
   VAR_10 < (VAR_1 - 1))
  VAR_10++;

 *VAR_8 = VAR_10;
}
