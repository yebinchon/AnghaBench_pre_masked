
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct brcms_phy {scalar_t__ nphy_perical; int phycal_timer; int mphase_cal_phase_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct brcms_phy *VAR_3, uint VAR_4)
{

 if ((VAR_3->nphy_perical != VAR_2) &&
     (VAR_3->nphy_perical != VAR_1))
  return;

 FUNC_1(VAR_3->phycal_timer);

 VAR_3->mphase_cal_phase_id = VAR_0;
 FUNC_0(VAR_3->phycal_timer, VAR_4, 0);
}
