
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct brcms_phy {int phynoise_state; scalar_t__ phynoise_chan_watchdog; TYPE_1__* sh; } ;
typedef int s8 ;
struct TYPE_2__ {size_t phy_noise_index; int * phy_noise_window; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_3, u8 VAR_4, s8 VAR_5)
{
 if (!VAR_3->phynoise_state)
  return;

 if (VAR_3->phynoise_state & VAR_2) {
  if (VAR_3->phynoise_chan_watchdog == VAR_4) {
   VAR_3->sh->phy_noise_window[VAR_3->sh->phy_noise_index] =
    VAR_5;
   VAR_3->sh->phy_noise_index =
    FUNC_0(VAR_3->sh->phy_noise_index, VAR_0);
  }
  VAR_3->phynoise_state &= ~VAR_2;
 }

 if (VAR_3->phynoise_state & VAR_1)
  VAR_3->phynoise_state &= ~VAR_1;

}
