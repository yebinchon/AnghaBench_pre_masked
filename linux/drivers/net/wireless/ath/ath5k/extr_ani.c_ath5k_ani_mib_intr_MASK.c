
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath5k_ani_state {scalar_t__ ani_mode; scalar_t__ ofdm_errors; scalar_t__ cck_errors; } ;
struct TYPE_2__ {int cap_has_phyerr_counters; } ;
struct ath5k_hw {int ani_tasklet; struct ath5k_ani_state ani_state; TYPE_1__ ah_capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct ath5k_hw*,struct ath5k_ani_state*) ;
 int FUNC_1 (struct ath5k_hw*,int ,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ath5k_hw *VAR_5)
{
 struct ath5k_ani_state *VAR_6 = &VAR_5->ani_state;



 if (!VAR_5->ah_capabilities.cap_has_phyerr_counters)
  return;


 FUNC_1(VAR_5, 0, VAR_1);
 FUNC_1(VAR_5, 0, VAR_0);

 if (VAR_5->ani_state.ani_mode != VAR_3)
  return;




 if (FUNC_0(VAR_5, VAR_6) == 0)
  return;

 if (VAR_6->ofdm_errors > VAR_4 ||
     VAR_6->cck_errors > VAR_2)
  FUNC_2(&VAR_5->ani_tasklet);
}
