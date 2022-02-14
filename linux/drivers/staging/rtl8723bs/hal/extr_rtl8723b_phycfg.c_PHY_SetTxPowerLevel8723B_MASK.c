
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ RxIdleAnt; } ;
struct TYPE_4__ {TYPE_1__ DM_FatTable; } ;
struct hal_com_data {int ant_path; scalar_t__ AntDivCfg; TYPE_2__ odmpriv; } ;
struct adapter {int dummy; } ;
typedef TYPE_1__* pFAT_T ;
typedef TYPE_2__* PDM_ODM_T ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct adapter*,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(struct adapter *VAR_5, u8 VAR_6)
{
 struct hal_com_data *VAR_7 = FUNC_0(VAR_5);
 PDM_ODM_T VAR_8 = &VAR_7->odmpriv;
 pFAT_T VAR_9 = &VAR_8->DM_FatTable;
 u8 VAR_10 = VAR_1;

 if (VAR_7->AntDivCfg) {
  VAR_10 = ((VAR_9->RxIdleAnt == VAR_0) ? VAR_1 : VAR_2);
 } else {
  VAR_10 = VAR_7->ant_path;
 }

 FUNC_2(VAR_4, VAR_3, ("==>PHY_SetTxPowerLevel8723B()\n"));

 FUNC_1(VAR_5, VAR_6, VAR_10);

 FUNC_2(VAR_4, VAR_3, ("<==PHY_SetTxPowerLevel8723B()\n"));
}
