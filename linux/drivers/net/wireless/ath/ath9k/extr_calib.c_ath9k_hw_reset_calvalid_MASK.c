
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ath_hw {int supp_cals; TYPE_3__* caldata; TYPE_2__* curchan; struct ath9k_cal_list* cal_list_curr; } ;
struct ath_common {int dummy; } ;
struct ath9k_cal_list {scalar_t__ calState; TYPE_4__* calData; } ;
struct TYPE_8__ {int calType; } ;
struct TYPE_7__ {int CalValid; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct TYPE_5__ {int center_freq; } ;


 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,int,...) ;

bool FUNC_4(struct ath_hw *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_2(VAR_3);
 struct ath9k_cal_list *VAR_5 = VAR_3->cal_list_curr;

 if (!VAR_3->caldata)
  return 1;

 if (!FUNC_0(VAR_3) && !FUNC_1(VAR_3))
  return 1;

 if (VAR_5 == ((void*)0))
  return 1;

 if (VAR_5->calState != VAR_1) {
  FUNC_3(VAR_4, VAR_0, "Calibration state incorrect, %d\n",
   VAR_5->calState);
  return 1;
 }

 if (!(VAR_3->supp_cals & VAR_5->calData->calType))
  return 1;

 FUNC_3(VAR_4, VAR_0, "Resetting Cal %d state for channel %u\n",
  VAR_5->calData->calType, VAR_3->curchan->chan->center_freq);

 VAR_3->caldata->CalValid &= ~VAR_5->calData->calType;
 VAR_5->calState = VAR_2;

 return 0;
}
