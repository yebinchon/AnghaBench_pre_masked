
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct odm_dm_struct {int* mp_mode; int AntDivType; struct adapter* Adapter; } ;
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
 int FUNC_1 (struct adapter*,int ,int) ;
 int FUNC_2 (struct adapter*,int ,int,int) ;
 int FUNC_3 (struct odm_dm_struct*,int ) ;

__attribute__((used)) static void FUNC_4(struct odm_dm_struct *VAR_12)
{
 struct adapter *VAR_13 = VAR_12->Adapter;
 u32 VAR_14;

 if (*VAR_12->mp_mode == 1) {
  VAR_12->AntDivType = VAR_0;
  FUNC_2(VAR_13, VAR_7, FUNC_0(7), 0);
  FUNC_2(VAR_13, VAR_8, FUNC_0(31), 1);
  return;
 }


 VAR_14 = FUNC_1(VAR_13, VAR_3, VAR_11);
 FUNC_2(VAR_13, VAR_3, VAR_11,
         VAR_14 | (FUNC_0(23) | FUNC_0(25)));

 FUNC_2(VAR_13, VAR_9, FUNC_0(9) | FUNC_0(8), 0);
 FUNC_2(VAR_13, VAR_10, FUNC_0(10), 0);
 FUNC_2(VAR_13, VAR_8, FUNC_0(22), 1);
 FUNC_2(VAR_13, VAR_8, FUNC_0(31), 1);

 FUNC_2(VAR_13, VAR_2, VAR_11,
         0x000000a0);

 FUNC_2(VAR_13, VAR_5, FUNC_0(7), 1);
 FUNC_2(VAR_13, VAR_6, FUNC_0(4), 1);
 FUNC_3(VAR_12, VAR_1);
 FUNC_2(VAR_13, VAR_4, 0xFFFF, 0x0201);
}
