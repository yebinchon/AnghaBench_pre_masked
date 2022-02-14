
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct odm_dm_struct {int* mp_mode; int bIsMPChip; int AntDivType; struct adapter* Adapter; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct adapter*,int ,int) ;
 int FUNC_2 (struct adapter*,int ,int,int) ;
 int FUNC_3 (struct odm_dm_struct*,int ) ;

__attribute__((used)) static void FUNC_4(struct odm_dm_struct *VAR_14)
{
 struct adapter *VAR_15 = VAR_14->Adapter;
 u32 VAR_16;

 if (*VAR_14->mp_mode == 1) {
  VAR_14->AntDivType = VAR_0;
  FUNC_2(VAR_15, VAR_7, FUNC_0(7), 0);
  FUNC_2(VAR_15, VAR_10,
          FUNC_0(5) | FUNC_0(4) | FUNC_0(3), 0);
  return;
 }


 VAR_16 = FUNC_1(VAR_15, VAR_3, VAR_13);
 FUNC_2(VAR_15, VAR_3, VAR_13,
         VAR_16 | (FUNC_0(23) | FUNC_0(25)));

 FUNC_2(VAR_15, VAR_9, FUNC_0(9) | FUNC_0(8), 0);
 FUNC_2(VAR_15, VAR_10, FUNC_0(10), 0);
 FUNC_2(VAR_15, VAR_8, FUNC_0(22), 0);
 FUNC_2(VAR_15, VAR_8, FUNC_0(31), 1);

 FUNC_2(VAR_15, VAR_2, VAR_13,
         0x000000a0);

 FUNC_2(VAR_15, VAR_5, FUNC_0(7), 1);
 FUNC_2(VAR_15, VAR_6, FUNC_0(4), 1);

 FUNC_2(VAR_15, VAR_12, FUNC_0(21), 0);
 FUNC_3(VAR_14, VAR_1);


 if (!VAR_14->bIsMPChip) {
  FUNC_2(VAR_15, VAR_11,
          FUNC_0(10) | FUNC_0(9) | FUNC_0(8), 1);
  FUNC_2(VAR_15, VAR_11,
          FUNC_0(13) | FUNC_0(12) | FUNC_0(11), 2);
 } else {
  FUNC_2(VAR_15, VAR_4, VAR_13,
          0x0201);
 }
}
