
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sw_ant_switch {int SWAS_NoLink_State; scalar_t__ CurAntenna; } ;
struct odm_dm_struct {struct sw_ant_switch DM_SWAT_Table; } ;
struct mlme_priv {int dummy; } ;
struct adapter {TYPE_1__* HalData; struct mlme_priv mlmepriv; } ;
struct TYPE_2__ {scalar_t__ AntDivCfg; struct odm_dm_struct odmpriv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int ) ;
 int FUNC_1 (struct adapter*,scalar_t__,int) ;

u8 FUNC_2(struct adapter *VAR_3)
{
 struct odm_dm_struct *VAR_4 = &VAR_3->HalData->odmpriv;
 struct sw_ant_switch *VAR_5 = &VAR_4->DM_SWAT_Table;
 struct mlme_priv *VAR_6 = &(VAR_3->mlmepriv);


 if (VAR_3->HalData->AntDivCfg == 0)
  return 0;

 if (FUNC_0(VAR_6, VAR_2))
  return 0;

 if (VAR_5->SWAS_NoLink_State == 0) {

  VAR_5->SWAS_NoLink_State = 1;
  VAR_5->CurAntenna = (VAR_5->CurAntenna == VAR_0) ? VAR_1 : VAR_0;

  FUNC_1(VAR_3, VAR_5->CurAntenna, 0);
  return 1;
 } else {
  VAR_5->SWAS_NoLink_State = 0;
  return 0;
 }
}
