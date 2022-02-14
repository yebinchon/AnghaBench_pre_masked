
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chan_centers {scalar_t__ synth_center; scalar_t__ ext_center; scalar_t__ ctl_center; } ;
struct ath_hw {int dummy; } ;
struct ath9k_channel {scalar_t__ channel; } ;
typedef int int8_t ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;

void FUNC_2(struct ath_hw *VAR_1,
      struct ath9k_channel *VAR_2,
      struct chan_centers *VAR_3)
{
 int8_t VAR_4;

 if (!FUNC_0(VAR_2)) {
  VAR_3->ctl_center = VAR_3->ext_center =
   VAR_3->synth_center = VAR_2->channel;
  return;
 }

 if (FUNC_1(VAR_2)) {
  VAR_3->synth_center =
   VAR_2->channel + VAR_0;
  VAR_4 = 1;
 } else {
  VAR_3->synth_center =
   VAR_2->channel - VAR_0;
  VAR_4 = -1;
 }

 VAR_3->ctl_center =
  VAR_3->synth_center - (VAR_4 * VAR_0);

 VAR_3->ext_center =
  VAR_3->synth_center + (VAR_4 * VAR_0);
}
