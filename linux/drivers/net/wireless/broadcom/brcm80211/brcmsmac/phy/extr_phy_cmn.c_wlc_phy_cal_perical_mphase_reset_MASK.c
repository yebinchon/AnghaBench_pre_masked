
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_phy {scalar_t__ mphase_txcal_cmdidx; int mphase_cal_phase_id; int cal_type_override; int phycal_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct brcms_phy *VAR_2)
{
 FUNC_0(VAR_2->phycal_timer);

 VAR_2->cal_type_override = VAR_1;
 VAR_2->mphase_cal_phase_id = VAR_0;
 VAR_2->mphase_txcal_cmdidx = 0;
}
