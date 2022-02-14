
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef TYPE_1__* pPS_T ;
struct TYPE_3__ {int initialize; int Reg874; int RegC70; int Reg85C; int RegA74; scalar_t__ PreRFState; scalar_t__ CurRFState; } ;
struct TYPE_4__ {int PatchID; int RSSI_Min; int Adapter; TYPE_1__ DM_PSTable; } ;
typedef TYPE_2__* PDM_ODM_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_2(void *VAR_6, u8 VAR_7)
{
 PDM_ODM_T VAR_8 = (PDM_ODM_T)VAR_6;
 pPS_T VAR_9 = &VAR_8->DM_PSTable;
 u8 VAR_10 = 30;
 u8 VAR_11 = 25;

 if (VAR_8->PatchID == 40) {
  VAR_10 = 50;
  VAR_11 = 45;
 }

 if (VAR_9->initialize == 0) {

  VAR_9->Reg874 = (FUNC_0(VAR_8->Adapter, 0x874, VAR_5)&0x1CC000)>>14;
  VAR_9->RegC70 = (FUNC_0(VAR_8->Adapter, 0xc70, VAR_5)&VAR_1)>>3;
  VAR_9->Reg85C = (FUNC_0(VAR_8->Adapter, 0x85c, VAR_5)&0xFF000000)>>24;
  VAR_9->RegA74 = (FUNC_0(VAR_8->Adapter, 0xa74, VAR_5)&0xF000)>>12;

  VAR_9->initialize = 1;
 }

 if (!VAR_7) {
  if (VAR_8->RSSI_Min != 0xFF) {
   if (VAR_9->PreRFState == VAR_3) {
    if (VAR_8->RSSI_Min >= VAR_10)
     VAR_9->CurRFState = VAR_4;
    else
     VAR_9->CurRFState = VAR_3;
   } else {
    if (VAR_8->RSSI_Min <= VAR_11)
     VAR_9->CurRFState = VAR_3;
    else
     VAR_9->CurRFState = VAR_4;
   }
  } else
   VAR_9->CurRFState = VAR_2;
 } else
  VAR_9->CurRFState = VAR_3;

 if (VAR_9->PreRFState != VAR_9->CurRFState) {
  if (VAR_9->CurRFState == VAR_4) {
   FUNC_1(VAR_8->Adapter, 0x874, 0x1C0000, 0x2);
   FUNC_1(VAR_8->Adapter, 0xc70, VAR_1, 0);
   FUNC_1(VAR_8->Adapter, 0x85c, 0xFF000000, 0x63);
   FUNC_1(VAR_8->Adapter, 0x874, 0xC000, 0x2);
   FUNC_1(VAR_8->Adapter, 0xa74, 0xF000, 0x3);
   FUNC_1(VAR_8->Adapter, 0x818, VAR_0, 0x0);
   FUNC_1(VAR_8->Adapter, 0x818, VAR_0, 0x1);
  } else {
   FUNC_1(VAR_8->Adapter, 0x874, 0x1CC000, VAR_9->Reg874);
   FUNC_1(VAR_8->Adapter, 0xc70, VAR_1, VAR_9->RegC70);
   FUNC_1(VAR_8->Adapter, 0x85c, 0xFF000000, VAR_9->Reg85C);
   FUNC_1(VAR_8->Adapter, 0xa74, 0xF000, VAR_9->RegA74);
   FUNC_1(VAR_8->Adapter, 0x818, VAR_0, 0x0);
  }
  VAR_9->PreRFState = VAR_9->CurRFState;
 }
}
