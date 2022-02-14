
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct fast_ant_train {scalar_t__ RxIdleAnt; } ;
struct odm_dm_struct {scalar_t__ AntDivType; struct adapter* Adapter; struct fast_ant_train DM_FatTable; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct adapter*,int ,int,int ) ;

void FUNC_2(struct odm_dm_struct *VAR_10, u8 VAR_11)
{
 struct fast_ant_train *VAR_12 = &VAR_10->DM_FatTable;
 struct adapter *VAR_13 = VAR_10->Adapter;
 u32 VAR_14, VAR_15;

 if (VAR_12->RxIdleAnt != VAR_11) {
  if (VAR_11 == VAR_4) {
   VAR_14 = (VAR_10->AntDivType == VAR_3) ?
           VAR_6 : VAR_5;
   VAR_15 = (VAR_10->AntDivType == VAR_3) ?
     VAR_1 : VAR_0;
  } else {
   VAR_14 = (VAR_10->AntDivType == VAR_3) ?
           VAR_1 : VAR_0;
   VAR_15 = (VAR_10->AntDivType == VAR_3) ?
     VAR_6 : VAR_5;
  }

  if (VAR_10->AntDivType == VAR_3) {
   FUNC_1(VAR_13, VAR_9,
           FUNC_0(5) | FUNC_0(4) | FUNC_0(3), VAR_14);
   FUNC_1(VAR_13, VAR_9,
           FUNC_0(8) | FUNC_0(7) | FUNC_0(6), VAR_15);
   FUNC_1(VAR_13, VAR_7,
           FUNC_0(14) | FUNC_0(13) | FUNC_0(12), VAR_14);
   FUNC_1(VAR_13, VAR_8,
           FUNC_0(6) | FUNC_0(7), VAR_14);
  } else if (VAR_10->AntDivType == VAR_2) {
   FUNC_1(VAR_13, VAR_9,
           FUNC_0(5) | FUNC_0(4) | FUNC_0(3), VAR_14);
   FUNC_1(VAR_13, VAR_9,
           FUNC_0(8) | FUNC_0(7) | FUNC_0(6), VAR_15);
  }
 }
 VAR_12->RxIdleAnt = VAR_11;
}
