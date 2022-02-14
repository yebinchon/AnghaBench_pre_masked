
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_dig {scalar_t__ CurCCK_CCAThres; scalar_t__ PreCCK_CCAThres; } ;
struct odm_dm_struct {struct adapter* Adapter; struct rtw_dig DM_DigTable; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int ,scalar_t__) ;

void FUNC_1(struct odm_dm_struct *VAR_1, u8 VAR_2)
{
 struct rtw_dig *VAR_3 = &VAR_1->DM_DigTable;
 struct adapter *VAR_4 = VAR_1->Adapter;

 if (VAR_3->CurCCK_CCAThres != VAR_2)
  FUNC_0(VAR_4, VAR_0, VAR_2);
 VAR_3->PreCCK_CCAThres = VAR_3->CurCCK_CCAThres;
 VAR_3->CurCCK_CCAThres = VAR_2;
}
