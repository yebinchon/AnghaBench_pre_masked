
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fast_ant_train {int FAT_State; scalar_t__ TrainIdx; scalar_t__* antAveRSSI; scalar_t__* antRSSIcnt; scalar_t__* antSumRSSI; scalar_t__* Bssid; } ;
struct odm_dm_struct {int* mp_mode; int bIsMPChip; struct fast_ant_train DM_FatTable; struct adapter* Adapter; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct adapter*,int,int) ;
 int FUNC_2 (struct adapter*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct odm_dm_struct *VAR_4)
{
 struct adapter *VAR_5 = VAR_4->Adapter;
 u32 VAR_6, VAR_7;
 struct fast_ant_train *VAR_8 = &VAR_4->DM_FatTable;

 if (*VAR_4->mp_mode == 1)
  return;

 for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
  VAR_8->Bssid[VAR_7] = 0;
  VAR_8->antSumRSSI[VAR_7] = 0;
  VAR_8->antRSSIcnt[VAR_7] = 0;
  VAR_8->antAveRSSI[VAR_7] = 0;
 }
 VAR_8->TrainIdx = 0;
 VAR_8->FAT_State = VAR_0;


 VAR_6 = FUNC_1(VAR_5, 0x4c, VAR_3);
 FUNC_2(VAR_5, 0x4c, VAR_3,
         VAR_6 | (FUNC_0(23) | FUNC_0(25)));
 VAR_6 = FUNC_1(VAR_5, 0x7B4, VAR_3);
 FUNC_2(VAR_5, 0x7b4, VAR_3,
         VAR_6 | (FUNC_0(16) | FUNC_0(17)));


 FUNC_2(VAR_5, 0x7b4, 0xFFFF, 0);
 FUNC_2(VAR_5, 0x7b0, VAR_3, 0);

 FUNC_2(VAR_5, 0x870, FUNC_0(9) | FUNC_0(8), 0);
 FUNC_2(VAR_5, 0x864, FUNC_0(10), 0);
 FUNC_2(VAR_5, 0xb2c, FUNC_0(22), 0);
 FUNC_2(VAR_5, 0xb2c, FUNC_0(31), 1);
 FUNC_2(VAR_5, 0xca4, VAR_3, 0x000000a0);


 if (!VAR_4->bIsMPChip) {
  FUNC_2(VAR_5, 0x858, FUNC_0(10) | FUNC_0(9) | FUNC_0(8), 1);
  FUNC_2(VAR_5, 0x858, FUNC_0(13) | FUNC_0(12) | FUNC_0(11), 2);
 } else {
  FUNC_2(VAR_5, 0x914, VAR_1, 1);
  FUNC_2(VAR_5, 0x914, VAR_2, 2);
 }


 FUNC_2(VAR_5, 0x80c, FUNC_0(21), 1);
 FUNC_2(VAR_5, 0x864, FUNC_0(5) | FUNC_0(4) | FUNC_0(3), 0);
 FUNC_2(VAR_5, 0x864, FUNC_0(8) | FUNC_0(7) | FUNC_0(6), 1);


 FUNC_2(VAR_5, 0x864, FUNC_0(2) | FUNC_0(1) | FUNC_0(0), 1);
 FUNC_2(VAR_5, 0xc50, FUNC_0(7), 1);
}
