
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_dig {scalar_t__ CurIGValue; } ;
struct odm_dm_struct {struct adapter* Adapter; struct rtw_dig DM_DigTable; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int ,scalar_t__) ;

void FUNC_1(struct odm_dm_struct *VAR_2, u8 VAR_3)
{
 struct rtw_dig *VAR_4 = &VAR_2->DM_DigTable;
 struct adapter *VAR_5 = VAR_2->Adapter;

 if (VAR_4->CurIGValue != VAR_3) {
  FUNC_0(VAR_5, VAR_1, VAR_0, VAR_3);
  VAR_4->CurIGValue = VAR_3;
 }
}
