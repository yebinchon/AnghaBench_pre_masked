
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_ps {int initialize; int Reg874; int RegC70; int Reg85C; int RegA74; scalar_t__ PreRFState; scalar_t__ CurRFState; } ;
struct odm_dm_struct {int PatchID; int RSSI_Min; struct rtl_ps DM_PSTable; struct adapter* Adapter; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct adapter*,int,int ) ;
 int FUNC_2 (struct adapter*,int,int,int) ;

void FUNC_3(struct odm_dm_struct *VAR_4, u8 VAR_5)
{
 struct adapter *VAR_6 = VAR_4->Adapter;
 struct rtl_ps *VAR_7 = &VAR_4->DM_PSTable;
 u8 VAR_8 = 30;
 u8 VAR_9 = 25;

 if (VAR_4->PatchID == 40) {
  VAR_8 = 50;
  VAR_9 = 45;
 }
 if (VAR_7->initialize == 0) {
  VAR_7->Reg874 = (FUNC_1(VAR_6, 0x874, VAR_3)&0x1CC000)>>14;
  VAR_7->RegC70 = (FUNC_1(VAR_6, 0xc70, VAR_3) & FUNC_0(3))>>3;
  VAR_7->Reg85C = (FUNC_1(VAR_6, 0x85c, VAR_3)&0xFF000000)>>24;
  VAR_7->RegA74 = (FUNC_1(VAR_6, 0xa74, VAR_3)&0xF000)>>12;
  VAR_7->initialize = 1;
 }

 if (!VAR_5) {
  if (VAR_4->RSSI_Min != 0xFF) {
   if (VAR_7->PreRFState == VAR_1) {
    if (VAR_4->RSSI_Min >= VAR_8)
     VAR_7->CurRFState = VAR_2;
    else
     VAR_7->CurRFState = VAR_1;
   } else {
    if (VAR_4->RSSI_Min <= VAR_9)
     VAR_7->CurRFState = VAR_1;
    else
     VAR_7->CurRFState = VAR_2;
   }
  } else {
   VAR_7->CurRFState = VAR_0;
  }
 } else {
  VAR_7->CurRFState = VAR_1;
 }

 if (VAR_7->PreRFState != VAR_7->CurRFState) {
  if (VAR_7->CurRFState == VAR_2) {
   FUNC_2(VAR_6, 0x874, 0x1C0000, 0x2);
   FUNC_2(VAR_6, 0xc70, FUNC_0(3), 0);
   FUNC_2(VAR_6, 0x85c, 0xFF000000, 0x63);
   FUNC_2(VAR_6, 0x874, 0xC000, 0x2);
   FUNC_2(VAR_6, 0xa74, 0xF000, 0x3);
   FUNC_2(VAR_6, 0x818, FUNC_0(28), 0x0);
   FUNC_2(VAR_6, 0x818, FUNC_0(28), 0x1);
  } else {
   FUNC_2(VAR_6, 0x874, 0x1CC000, VAR_7->Reg874);
   FUNC_2(VAR_6, 0xc70, FUNC_0(3), VAR_7->RegC70);
   FUNC_2(VAR_6, 0x85c, 0xFF000000, VAR_7->Reg85C);
   FUNC_2(VAR_6, 0xa74, 0xF000, VAR_7->RegA74);
   FUNC_2(VAR_6, 0x818, FUNC_0(28), 0x0);
  }
  VAR_7->PreRFState = VAR_7->CurRFState;
 }
}
