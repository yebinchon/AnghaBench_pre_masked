
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sta_priv {int dummy; } ;
struct TYPE_5__ {scalar_t__ UndecoratedSmoothedPWDB; } ;
struct sta_info {TYPE_1__ rssi_stat; } ;
struct mlme_priv {int dummy; } ;
struct TYPE_6__ {int CurIGValue; } ;
struct TYPE_7__ {int SupportAbility; scalar_t__ RSSI_Min; TYPE_2__ DM_DigTable; } ;
struct dm_priv {scalar_t__ EntryMinUndecoratedSmoothedPWDB; scalar_t__ MinUndecoratedPWDBForDM; } ;
struct hal_com_data {TYPE_3__ odmpriv; struct dm_priv dmpriv; } ;
struct adapter {int hw_init_completed; struct sta_priv stapriv; struct mlme_priv mlmepriv; } ;
typedef TYPE_2__* pDIG_T ;
typedef TYPE_3__* PDM_ODM_T ;


 int FUNC_0 (char*,int,scalar_t__) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (struct mlme_priv*) ;
 int FUNC_4 (struct adapter*) ;
 struct sta_info* FUNC_5 (struct sta_priv*,int ) ;
 scalar_t__ FUNC_6 (struct adapter*) ;

void FUNC_7(struct adapter *VAR_2)
{
 u8 VAR_3 = 0;
 struct hal_com_data *VAR_4 = FUNC_1(VAR_2);
 struct mlme_priv *VAR_5 = &VAR_2->mlmepriv;
 struct dm_priv *VAR_6 = &VAR_4->dmpriv;
 PDM_ODM_T VAR_7 = &VAR_4->odmpriv;
 pDIG_T VAR_8 = &VAR_7->DM_DigTable;
 struct sta_priv *VAR_9 = &VAR_2->stapriv;
 struct sta_info *VAR_10 = ((void*)0);

 if (VAR_2->hw_init_completed == 0)
  goto skip_lps_dm;


 if (FUNC_6(VAR_2))
  VAR_3 = 1;

 FUNC_2(&VAR_4->odmpriv, VAR_1, VAR_3);

 if (VAR_3 == 0)
  goto skip_lps_dm;

 if (!(VAR_7->SupportAbility & VAR_0))
  goto skip_lps_dm;






 VAR_10 = FUNC_5(VAR_9, FUNC_3(VAR_5));
 if (!VAR_10)
  goto skip_lps_dm;

 VAR_6->EntryMinUndecoratedSmoothedPWDB = VAR_10->rssi_stat.UndecoratedSmoothedPWDB;

 FUNC_0("CurIGValue =%d, EntryMinUndecoratedSmoothedPWDB = %d\n", VAR_8->CurIGValue, VAR_6->EntryMinUndecoratedSmoothedPWDB);

 if (VAR_6->EntryMinUndecoratedSmoothedPWDB <= 0)
  goto skip_lps_dm;

 VAR_6->MinUndecoratedPWDBForDM = VAR_6->EntryMinUndecoratedSmoothedPWDB;

 VAR_7->RSSI_Min = VAR_6->MinUndecoratedPWDBForDM;


 if (
  (VAR_8->CurIGValue > VAR_7->RSSI_Min + 5) ||
  (VAR_8->CurIGValue < VAR_7->RSSI_Min - 5)
 )
  FUNC_4(VAR_2);


skip_lps_dm:

 return;

}
